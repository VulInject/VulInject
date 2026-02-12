uint32_t amdgpu_mes_rreg(struct amdgpu_device *adev, uint32_t reg)
{
struct mes_misc_op_input op_input;
int r, val = 0;

op_input.op = MES_MISC_OP_READ_REG;
op_input.read_reg.reg_offset = reg;
op_input.read_reg.buffer_addr = adev->mes.read_val_gpu_addr;

if (!adev->mes.funcs->misc_op) {
DRM_ERROR("mes rreg is not supported!\n");
goto error;
}

r = adev->mes.funcs->misc_op(&adev->mes, &op_input);
if (r)
DRM_ERROR("failed to read reg (0x%x)\n", reg);
else
val = *(adev->mes.read_val_ptr);

error:
return val;
}