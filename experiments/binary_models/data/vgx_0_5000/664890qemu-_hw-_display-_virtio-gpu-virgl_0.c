static void virgl_write_fence(void *opaque, uint32_t fence)
{
VirtIOGPU *g = opaque;
struct virtio_gpu_ctrl_command *cmd, *tmp;

QTAILQ_FOREACH_SAFE(cmd, &g->fenceq, next, tmp) {

if (cmd->cmd_hdr.fence_id > fence) {
continue;
}
trace_virtio_gpu_fence_resp(cmd->cmd_hdr.fence_id);
virtio_gpu_ctrl_response_nodata(g, cmd, VIRTIO_GPU_RESP_OK_NODATA);
QTAILQ_REMOVE(&g->fenceq, cmd, next);
g_free(cmd);
g->inflight--;
if (virtio_gpu_stats_enabled(g->parent_obj.conf)) {
fprintf(stderr, "inflight: %3d (-)\r", g->inflight);
}
}
}