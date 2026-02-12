static bool btrfs_wq_submit_bio(struct btrfs_bio *bbio,
struct btrfs_io_context *bioc,
struct btrfs_io_stripe *smap, int mirror_num)
{
struct btrfs_fs_info *fs_info = bbio->inode->root->fs_info;
struct async_submit_bio *async;

async = kmalloc(sizeof(*async), GFP_NOFS);
if (!async)
return false;

async->bbio = bbio;
async->bioc = bioc;
async->smap = *smap;
async->mirror_num = mirror_num;

btrfs_init_work(&async->work, run_one_async_start, run_one_async_done,
run_one_async_free);
if (op_is_sync(bbio->bio.bi_opf))
btrfs_queue_work(fs_info->hipri_workers, &async->work);
else
btrfs_queue_work(fs_info->workers, &async->work);
return true;
}