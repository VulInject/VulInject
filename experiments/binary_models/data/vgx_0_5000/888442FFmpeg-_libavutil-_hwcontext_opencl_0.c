static void opencl_unmap_from_qsv(AVHWFramesContext *dst_fc,
HWMapDescriptor *hwmap)
{
AVOpenCLFrameDescriptor    *desc = hwmap->priv;
OpenCLDeviceContext *device_priv = dst_fc->device_ctx->internal->priv;
OpenCLFramesContext *frames_priv = dst_fc->internal->priv;
cl_event event;
cl_int cle;
int p;

av_log(dst_fc, AV_LOG_DEBUG, "Unmap QSV/VAAPI surface from OpenCL.\n");

cle = device_priv->clEnqueueReleaseVA_APIMediaSurfacesINTEL(
frames_priv->command_queue, desc->nb_planes, desc->planes,
0, NULL, &event);
if (cle != CL_SUCCESS) {
av_log(dst_fc, AV_LOG_ERROR, "Failed to release surface "
"handles: %d.\n", cle);
}

opencl_wait_events(dst_fc, &event, 1);

for (p = 0; p < desc->nb_planes; p++) {
cle = clReleaseMemObject(desc->planes[p]);
if (cle != CL_SUCCESS) {
av_log(dst_fc, AV_LOG_ERROR, "Failed to release CL "
"image of plane %d of QSV/VAAPI surface: %d\n",
p, cle);
}
}

av_free(desc);
}