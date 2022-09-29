#include <Zephyr.h>

int main() {
	int32_t timeout = 500;
	for(;;) {	
			printk("Hello, world!");
			k_msleep(timeout);
	}

	return 0;
}