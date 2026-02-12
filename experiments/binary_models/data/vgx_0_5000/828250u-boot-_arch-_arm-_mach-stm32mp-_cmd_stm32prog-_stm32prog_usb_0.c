int stm32prog_get_medium_size_virt(struct dfu_entity *dfu, u64 *size)
{
if (dfu->dev_type != DFU_DEV_VIRT) {
*size = 0;
log_debug("%s, invalid dev_type = %d\n",
__func__, dfu->dev_type);
return -EINVAL;
}

switch (dfu->data.virt.dev_num) {
case PHASE_CMD:
*size = CMD_SIZE;
break;
case PHASE_OTP:
*size = stm32prog_data->tee ? OTP_SIZE_TA : OTP_SIZE_SMC;
break;
case PHASE_PMIC:
*size = PMIC_SIZE;
break;
}

return 0;
}