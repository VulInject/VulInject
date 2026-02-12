void md_bitmap_flush(struct mddev *mddev)
{
struct bitmap *bitmap = mddev->bitmap;
long sleep;

if (!bitmap) 
return;


sleep = mddev->bitmap_info.daemon_sleep * 2;
bitmap->daemon_lastrun -= sleep;
md_bitmap_daemon_work(mddev);
bitmap->daemon_lastrun -= sleep;
md_bitmap_daemon_work(mddev);
bitmap->daemon_lastrun -= sleep;
md_bitmap_daemon_work(mddev);
if (mddev->bitmap_info.external)
md_super_wait(mddev);
md_bitmap_update_sb(bitmap);
}