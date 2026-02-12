lm_status_t lm_dmae_context_execute_sgl(struct _lm_device_t* pdev, lm_dmae_context_t *context, lm_dmae_operation_t *operation)
{
lm_status_t lm_status = LM_STATUS_SUCCESS;

context->completion_word = operation->command_id;

lm_dmae_post_command(pdev, context->main_channel, &operation->main_cmd);

if (operation->b_sync)
{
lm_status = lm_dmae_operation_wait(pdev, operation);
if (LM_STATUS_SUCCESS != lm_status)
{
DbgMessage(pdev, FATAL, "lm_dmae_operation_wait returned %d\n", lm_status);
}
}

return lm_status;
}