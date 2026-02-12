static int ublk_init_queue(struct ublk_device *ub, int q_id)
{
struct ublk_queue *ubq = ublk_get_queue(ub, q_id);
gfp_t gfp_flags = GFP_KERNEL | __GFP_ZERO;
void *ptr;
int size;

ubq->flags = ub->dev_info.flags;
ubq->q_id = q_id;
ubq->q_depth = ub->dev_info.queue_depth;
size = ublk_queue_cmd_buf_size(ub, q_id);

ptr = (void *) __get_free_pages(gfp_flags, get_order(size));
if (!ptr)
return -ENOMEM;

ubq->io_cmd_buf = ptr;
ubq->dev = ub;
return 0;
}