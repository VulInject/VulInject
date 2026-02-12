static void amd_sfh_resume(struct amd_mp2_dev *mp2)
{
struct amdtp_cl_data *cl_data = mp2->cl_data;
struct amd_mp2_sensor_info info;
int i, status;

for (i = 0; i < cl_data->num_hid_devices; i++) {
if (cl_data->sensor_sts[i] == SENSOR_DISABLED) {
info.period = AMD_SFH_IDLE_LOOP;
info.sensor_idx = cl_data->sensor_idx[i];
info.dma_address = cl_data->sensor_dma_addr[i];
mp2->mp2_ops->start(mp2, info);
status = amd_sfh_wait_for_response
(mp2, cl_data->sensor_idx[i], SENSOR_ENABLED);
if (status == SENSOR_ENABLED)
cl_data->sensor_sts[i] = SENSOR_ENABLED;
dev_dbg(&mp2->pdev->dev, "resume sid 0x%x (%s) status 0x%x\n",
cl_data->sensor_idx[i], get_sensor_name(cl_data->sensor_idx[i]),
cl_data->sensor_sts[i]);
}
}

schedule_delayed_work(&cl_data->work_buffer, msecs_to_jiffies(AMD_SFH_IDLE_LOOP));
amd_sfh_clear_intr(mp2);
}