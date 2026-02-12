static int hclge_dbg_dump_dcb_qset(struct hclge_dev *hdev, char *buf, int len,
int *pos)
{
struct hclge_dbg_bitmap_cmd req;
struct hclge_desc desc;
u16 qset_id, qset_num;
int ret;

ret = hclge_tm_get_qset_num(hdev, &qset_num);
if (ret)
return ret;

*pos += scnprintf(buf + *pos, len - *pos,
"qset_id  roce_qset_mask  nic_qset_mask  qset_shaping_pass  qset_bp_status\n");
for (qset_id = 0; qset_id < qset_num; qset_id++) {
ret = hclge_dbg_cmd_send(hdev, &desc, qset_id, 1,
HCLGE_OPC_QSET_DFX_STS);
if (ret)
return ret;

req.bitmap = (u8)le32_to_cpu(desc.data[1]);

*pos += scnprintf(buf + *pos, len - *pos,
"%04u           %#x            %#x             %#x               %#x\n",
qset_id, req.bit0, req.bit1, req.bit2,
req.bit3);
}

return 0;
}