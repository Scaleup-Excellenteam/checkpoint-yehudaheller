#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>


MODULE_LICENSE("GPL");
MODULE_AUTHOR("MOSHE & YEHUDA");

static int __init lkm_example_init(void)
{
	printk(KERN_INFO "hello world\n");
	
	return 0;
}


static void __exit lkm_example_exit(void)
{
	printk(KERN_INFO "Goodbye, world!\n");
}

module_init(lkm_example_init);
module_exit(lkm_example_exit);





