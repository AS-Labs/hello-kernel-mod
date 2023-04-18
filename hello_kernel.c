#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("as-labs");
MODULE_DESCRIPTION("simple linux module");
MODULE_VERSION("0.01");

static int __int lkm_example_init(void) {
    printk(KERN_INFO "Hello linux kernel\n");
    return 0;
}

static void __exit lkm_example_exit(void) {
    printk(KERN_INFO "Goodbye linux kernel\n");
}

module_init(lkm_example_init);
module_exit(lkm_example_exit);
