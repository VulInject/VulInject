static int hclge_mac_query_reg_num(struct hclge_dev *hdev, u32 *reg_num)
{
struct hclge_desc desc;
int ret;


if (hdev->ae_dev->dev_version == HNAE3_DEVICE_VERSION_V2) {
*reg_num = HCLGE_MAC_STATS_MAX_NUM_V1;
return 0;
}

hclge_cmd_setup_basic_desc(&desc, HCLGE_OPC_QUERY_MAC_REG_NUM, true);
ret = hclge_cmd_send(&hdev->hw, &desc, 1);
if (ret) {
dev_err(&hdev->pdev->dev,
"failed to query mac statistic reg number, ret = %d\n",
ret);
return ret;
}

*reg_num = le32_to_cpu(desc.data[0]);
if (*reg_num == 0) {
dev_err(&hdev->pdev->dev,
"mac statistic reg number is invalid!\n");
return -ENODATA;
}

return 0;
}