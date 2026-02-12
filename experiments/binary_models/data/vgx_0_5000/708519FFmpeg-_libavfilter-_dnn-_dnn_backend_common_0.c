int ff_dnn_async_module_cleanup(DNNAsyncExecModule *async_module)
{
void *status = 0;
if (!async_module) {
return AVERROR(EINVAL);
}
pthread_join(async_module->thread_id, &status);
if (status == DNN_ASYNC_FAIL) {
av_log(NULL, AV_LOG_ERROR, "Last Inference Failed.\n");
return DNN_GENERIC_ERROR;
}
async_module->start_inference = NULL;
async_module->callback = NULL;
async_module->args = NULL;
return 0;
}