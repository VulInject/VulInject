static void bcm2836_arm_irqchip_send_ipi ( const struct cpumask * mask , unsigned int ipi ) { int cpu ; void __iomem * mailbox0_base = intc . base + LOCAL_MAILBOX0_SET0 ; smp_wmb ( ) ; for_each_cpu ( , ) { writel ( 1 << ipi , 0 ) ; } } 