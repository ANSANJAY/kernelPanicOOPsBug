#include <linux/kernel.h>
#include <linux/module.h>

static int test_oops_init(void)
{
    printk(KERN_INFO"%s: In init\n", __func__);
	//we are trying to access invalid memory location
    *(int *)0x12 = 'a';
    return 0;
}
static void test_oops_exit(void)
{
    printk(KERN_INFO"%s: In exit\n", __func__);
}
module_init(test_oops_init);
module_exit(test_oops_exit);
