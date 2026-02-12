struct ct_timer_instance *
ct_timer_instance_new(struct ct_timer *atimer, struct ct_atc_pcm *apcm)
{
struct ct_timer_instance *ti;

ti = kzalloc(sizeof(*ti), GFP_KERNEL);
if (!ti)
return NULL;
spin_lock_init(&ti->lock);
INIT_LIST_HEAD(&ti->instance_list);
INIT_LIST_HEAD(&ti->running_list);
ti->timer_base = atimer;
ti->apcm = apcm;
ti->substream = apcm->substream;
if (atimer->ops->init)
atimer->ops->init(ti);

spin_lock_irq(&atimer->list_lock);
list_add(&ti->instance_list, &atimer->instance_head);
spin_unlock_irq(&atimer->list_lock);

return ti;
}