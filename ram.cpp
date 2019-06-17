#include <mach/vm_statistics.h>
#include <stdio.h>
#include <mach/mach_init.h>
#include <mach/mach_host.h>
#include <fstream>
#include <iostream>
#include <sys/types.h>
#include <sys/sysctl.h>

int main(int argc, const char * argv[]) {
    vm_size_t page_size;
    mach_port_t mach_port;
    mach_msg_type_number_t count;
    vm_statistics64_data_t vm_stats;
	
	/*
	* create ramfile
	* read ramfile
	*/

	system("touch ramfile");
	std::ofstream read("ramfile");
    long long free_memory;
    long long used_memory;

	/* 
	* Total memory
	*/

	int mib[2];
	int64_t physical_memory;
	mib[0] = CTL_HW;
	mib[1] = HW_MEMSIZE;
	size_t length = sizeof(int64_t);
	if ( read.good() ) {
		sysctl(mib, 2, &physical_memory, &length, NULL, 0);
		read << "Total Memory " << physical_memory/10000 << '\n';

		mach_port = mach_host_self();
		count = sizeof(vm_stats) / sizeof(natural_t);
		if (KERN_SUCCESS == host_page_size(mach_port, &page_size) &&
			KERN_SUCCESS == host_statistics64(mach_port, HOST_VM_INFO,
											(host_info64_t)&vm_stats, &count))
											/* fix casting */
		{
			free_memory = (static_cast<int64_t>(vm_stats.free_count) * static_cast<int64_t>(page_size)) / 1000;

			read << "Free Memory " << free_memory << '\n';

			used_memory = (( static_cast<int64_t>( vm_stats.active_count ) +
									static_cast<int64_t>( vm_stats.inactive_count ) +
									static_cast<int64_t>( vm_stats.wire_count ) *  static_cast<int64_t>( page_size ) )) / 1000;
			read << "Used Memory " << used_memory;
			
			/*
			* pipe free and used memory into stream 
			*/
			read.close();
		}
	}
    return (0);
}