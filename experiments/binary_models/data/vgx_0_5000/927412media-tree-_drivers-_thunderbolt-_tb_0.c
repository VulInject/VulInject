static void tb_schedule_hotplug_handler(void *data, u64 route, u8 port,
bool unplug)
{
struct tb *tb = data;
struct tb_hotplug_event *ev = kmalloc(sizeof(*ev), GFP_KERNEL);
if (!ev)
return;
INIT_WORK(&ev->work, tb_handle_hotplug);
ev->tb = tb;
ev->route = route;
ev->port = port;
ev->unplug = unplug;
queue_work(tb->wq, &ev->work);
}