static struct dma_fence *panfrost_fence_create(struct panfrost_device *pfdev, int js_num)
{
struct panfrost_fence *fence;
struct panfrost_job_slot *js = pfdev->js;

fence = kzalloc(sizeof(*fence), GFP_KERNEL);
if (!fence)
return ERR_PTR(-ENOMEM);

fence->dev = pfdev->ddev;
fence->queue = js_num;
fence->seqno = ++js->queue[js_num].emit_seqno;
dma_fence_init(&fence->base, &panfrost_fence_ops, &js->job_lock,
js->queue[js_num].fence_context, fence->seqno);

return &fence->base;
}