void lm_pf_int_vf_igu_sb_cleanup(lm_device_t *pdev, lm_vf_info_t *vf_info, u8_t vf_chain_id)
{
struct igu_regular  cmd_data = {0};
struct igu_ctrl_reg cmd_ctrl = {0};
u32_t igu_addr_ack           = 0;
u32_t sb_bit                 = 0;
u32_t cnt                    = 100;
u8_t  igu_sb_id              = 0;
return;


if (INTR_BLK_MODE(pdev) == INTR_BLK_MODE_BC)
{
return;
}

if ((vf_info == NULL) || (pdev == NULL))
{
DbgBreakMsg("lm_pf_int_vf_igu_sb_cleanup : invalid paramters");
return; 
}

if (IS_VFDEV(pdev)) 
{
DbgBreakMsg("lm_pf_int_vf_igu_sb_cleanup : only available on Host/PF side");
return; 
}

igu_sb_id = LM_VF_IGU_SB_ID(vf_info,vf_chain_id);
igu_addr_ack = IGU_REG_CSTORM_TYPE_0_SB_CLEANUP + (igu_sb_id/32)*4;
sb_bit =  1 << (igu_sb_id%32);


cmd_data.sb_id_and_flags =
((IGU_USE_REGISTER_cstorm_type_0_sb_cleanup << IGU_REGULAR_CLEANUP_TYPE_SHIFT) |
IGU_REGULAR_CLEANUP_SET |
IGU_REGULAR_BCLEANUP);

cmd_ctrl.ctrl_data =
(((IGU_CMD_E2_PROD_UPD_BASE + igu_sb_id) << IGU_CTRL_REG_ADDRESS_SHIFT) |
(vf_info->abs_vf_id << IGU_CTRL_REG_FID_SHIFT) |
(IGU_CTRL_CMD_TYPE_WR << IGU_CTRL_REG_TYPE_SHIFT));

REG_WR(pdev, IGU_REG_COMMAND_REG_32LSB_DATA, cmd_data.sb_id_and_flags);
REG_WR(pdev, IGU_REG_COMMAND_REG_CTRL, cmd_ctrl.ctrl_data);


while (!(REG_RD(pdev, igu_addr_ack) & sb_bit) && --cnt)
{
mm_wait(pdev, 10);
}

if (!(REG_RD(pdev, igu_addr_ack) & sb_bit))
{
DbgMessage(pdev, FATAL, "Unable to finish IGU cleanup - set: igu_sb_id %d offset %d bit %d (cnt %d)\n",
igu_sb_id, igu_sb_id/32, igu_sb_id%32, cnt);
}


cmd_data.sb_id_and_flags =
((IGU_USE_REGISTER_cstorm_type_0_sb_cleanup << IGU_REGULAR_CLEANUP_TYPE_SHIFT) |
IGU_REGULAR_BCLEANUP);


REG_WR(pdev, IGU_REG_COMMAND_REG_32LSB_DATA, cmd_data.sb_id_and_flags);
REG_WR(pdev, IGU_REG_COMMAND_REG_CTRL, cmd_ctrl.ctrl_data);


while ((REG_RD(pdev, igu_addr_ack) & sb_bit) && --cnt)
{
mm_wait(pdev, 10);
}

if ((REG_RD(pdev, igu_addr_ack) & sb_bit))
{
DbgMessage(pdev, FATAL, "Unable to finish IGU cleanup - clear: igu_sb_id %d offset %d bit %d (cnt %d)\n",
igu_sb_id, igu_sb_id/32, igu_sb_id%32, cnt);
}
}