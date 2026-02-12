int irq_cpu_rmap_add(struct cpu_rmap *rmap, int irq)
{
struct irq_glue *glue = kzalloc(sizeof(*glue), GFP_KERNEL);
int rc;

if (!glue)
return -ENOMEM;
glue->notify.notify = irq_cpu_rmap_notify;
glue->notify.release = irq_cpu_rmap_release;
glue->rmap = rmap;
cpu_rmap_get(rmap);
glue->index = cpu_rmap_add(rmap, glue);
rc = irq_set_affinity_notifier(irq, &glue->notify);
if (rc) {
cpu_rmap_put(glue->rmap);
kfree(glue);
}
return rc;
}