static int saa6588_probe(struct i2c_client *client)
{
struct saa6588 *s;
struct v4l2_subdev *sd;

v4l_info(client, "saa6588 found @ 0x%x (%s)\n",
client->addr << 1, client->adapter->name);

s = devm_kzalloc(&client->dev, sizeof(*s), GFP_KERNEL);
if (s == NULL)
return -ENOMEM;

s->buf_size = bufblocks * 3;

s->buffer = devm_kzalloc(&client->dev, s->buf_size, GFP_KERNEL);
if (s->buffer == NULL)
return -ENOMEM;
sd = &s->sd;
v4l2_i2c_subdev_init(sd, client, &saa6588_ops);
spin_lock_init(&s->lock);
s->block_count = 0;
s->wr_index = 0;
s->rd_index = 0;
s->last_blocknum = 0xff;
init_waitqueue_head(&s->read_queue);
s->data_available_for_read = 0;

saa6588_configure(s);


INIT_DELAYED_WORK(&s->work, saa6588_work);
schedule_delayed_work(&s->work, 0);
return 0;
}