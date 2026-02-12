int
nvkm_event_init(const struct nvkm_event_func *func, int types_nr, int index_nr,
struct nvkm_event *event)
{
event->refs = kzalloc(sizeof(*event->refs) * index_nr * types_nr,
GFP_KERNEL);
if (!event->refs)
return -ENOMEM;

event->func = func;
event->types_nr = types_nr;
event->index_nr = index_nr;
spin_lock_init(&event->refs_lock);
spin_lock_init(&event->list_lock);
INIT_LIST_HEAD(&event->list);
return 0;
}