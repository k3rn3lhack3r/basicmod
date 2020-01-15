#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>

MODULE_LICENSE("GPL");

static int __init mymod_init(void) {
	printk(KERN_INFO "They leap madly, desperately, higher and higher...\n");
	return 0;
}

static void __exit mymod_exit(void) {
	printk(KERN_INFO "So long, and thanks for all the fish.\n");
}

module_init(mymod_init);
module_exit(mymod_exit);

