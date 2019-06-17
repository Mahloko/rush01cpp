#include <iostream>
#include <sys/types.h>
#include <sys/sysctl.h>
#   include <net/route.h>
#   include <net/if.h>

int main(int argc, char const *argv[])
{
	   int 		mib[6];
	char 		*lim;
	char 		*next;
	size_t 		len;
	struct 		if_msghdr *ifm;

	long int 	ipackets = 0;
	long int 	opackets = 0;
	long int 	ibytes = 0;
	long int 	obytes = 0;

	mib[0]= CTL_NET;// networking subsystem
	mib[1]= PF_ROUTE;// type of information
	mib[2]= 0;// protocol (IPPROTO_xxx)
	mib[3]= 0;// address family
	mib[4]= NET_RT_IFLIST2;// operation
	mib[5]= 0;
	
	sysctl(mib, 6, NULL, &len, NULL, 0);
	char buf[len];
	sysctl(mib, 6, buf, &len, NULL, 0);
	std::cout << static_cast<std::string>(buf) << std::endl;
	return 0;
}

/*

int main(int argc, char const *argv[])
{
	int net[1];
	size_t oldplen = 90000;
	size_t l = 0;

	net[0] = CTL_HW;
	// net[1] = KERN_PRINTK;
	sysctl( net, 1, NULL, &oldplen, NULL, 0 );
	
	char oldp[oldplen];

	sysctl( net, 1, oldp, &oldplen, NULL, 0 );
	std::cout << oldplen << std::endl;
	std::cout << static_cast<std::string>(oldp) << std::endl;
	
	return (0);
}
 */
