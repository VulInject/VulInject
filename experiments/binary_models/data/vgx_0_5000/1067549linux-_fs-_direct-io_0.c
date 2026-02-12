static inline void dio_bio_submit(struct dio *dio, struct dio_submit *sdio)
{
const enum req_op dio_op = dio->opf & REQ_OP_MASK;
struct bio *bio = sdio->bio;
unsigned long flags;

bio->bi_private = dio;

spin_lock_irqsave(&dio->bio_lock, flags);
dio->refcount++;
spin_unlock_irqrestore(&dio->bio_lock, flags);

if (dio->is_async && dio_op == REQ_OP_READ && dio->should_dirty)
bio_set_pages_dirty(bio);

dio->bio_disk = bio->bi_bdev->bd_disk;

if (sdio->submit_io)
sdio->submit_io(bio, dio->inode, sdio->logical_offset_in_bio);
else
submit_bio(bio);

sdio->bio = NULL;
sdio->boundary = 0;
sdio->logical_offset_in_bio = 0;
}