#include <linux/init.h>
#include <linux/module.h>
#include <linux/i2c.h>
#include <linux/utsname.h>
//#include <sys/utsname.h>

/* Add your code here */
static int __init hello_init(void)
{
	struct new_utsname *nu;
	pr_alert("Good morrow to this fair assembly.\n");
	nu = utsname();
	pr_alert("sysname : %s, nodename : %s, release : %s, version : %s, machine : %s, domainname : %s\n",nu->sysname, nu->nodename, nu->release, nu->version, nu->machine, nu->domainname);
	return 0;
}

static void __exit hello_exit(void)
{
	pr_alert("Alsa, poor world, what treasuer hast thou lost!\n");
}
module_init(hello_init);
module_exit(hello_exit);
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("Greeting module");
MODULE_AUTHOR("Park Jong Woo");

