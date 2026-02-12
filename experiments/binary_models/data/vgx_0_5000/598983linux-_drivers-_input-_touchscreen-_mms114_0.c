static irqreturn_t mms114_interrupt(int irq, void *dev_id)
{
struct mms114_data *data = dev_id;
struct input_dev *input_dev = data->input_dev;
struct mms114_touch touch[MMS114_MAX_TOUCH];
int packet_size;
int touch_size;
int index;
int error;

mutex_lock(&input_dev->mutex);
if (!input_device_enabled(input_dev)) {
mutex_unlock(&input_dev->mutex);
goto out;
}
mutex_unlock(&input_dev->mutex);

packet_size = mms114_read_reg(data, MMS114_PACKET_SIZE);
if (packet_size <= 0)
goto out;


if (data->type == TYPE_MMS134S || data->type == TYPE_MMS136)
touch_size = packet_size / MMS136_EVENT_SIZE;
else
touch_size = packet_size / MMS114_EVENT_SIZE;

error = __mms114_read_reg(data, MMS114_INFORMATION, packet_size,
(u8 *)touch);
if (error < 0)
goto out;

for (index = 0; index < touch_size; index++)
mms114_process_mt(data, touch + index);

input_mt_report_pointer_emulation(data->input_dev, true);
input_sync(data->input_dev);

out:
return IRQ_HANDLED;
}