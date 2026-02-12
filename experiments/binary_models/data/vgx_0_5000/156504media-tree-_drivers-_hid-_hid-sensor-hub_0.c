int sensor_hub_set_feature(struct hid_sensor_hub_device *hsdev, u32 report_id,
u32 field_index, int buffer_size, void *buffer)
{
struct hid_report *report;
struct sensor_hub_data *data = hid_get_drvdata(hsdev->hdev);
__s32 *buf32 = buffer;
int i = 0;
int remaining_bytes;
__s32 value;
int ret = 0;

mutex_lock(&data->mutex);
report = sensor_hub_report(report_id, hsdev->hdev, HID_FEATURE_REPORT);
if (!report || (field_index >= report->maxfield)) {
ret = -EINVAL;
goto done_proc;
}

remaining_bytes = buffer_size % sizeof(__s32);
buffer_size = buffer_size / sizeof(__s32);
if (buffer_size) {
for (i = 0; i < buffer_size; ++i) {
hid_set_field(report->field[field_index], i,
(__force __s32)cpu_to_le32(*buf32));
++buf32;
}
}
if (remaining_bytes) {
value = 0;
memcpy(&value, (u8 *)buf32, remaining_bytes);
hid_set_field(report->field[field_index], i,
(__force __s32)cpu_to_le32(value));
}
hid_hw_request(hsdev->hdev, report, HID_REQ_SET_REPORT);
hid_hw_wait(hsdev->hdev);

done_proc:
mutex_unlock(&data->mutex);

return ret;
}