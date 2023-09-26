#include <linux/kernel.h>
#include <linux/module.h>
#include <linux/delay.h>

MODULE_LICENSE("GPL");

static int test_hello_init(void)
{
#ifdef DBG
    printk(KERN_INFO"%s: In init\n", __func__);
#endif
    return 0;
}

static void test_hello_exit(void)
{
#ifdef DBG
    printk(KERN_INFO"%s: In exit\n", __func__);
#endif
}

module_init(test_hello_init);
module_exit(test_hello_exit);
