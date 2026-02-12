static int tps65010_remove(struct i2c_client *client)
{
struct tps65010		*tps = i2c_get_clientdata(client);
struct tps65010_board	*board = dev_get_platdata(&client->dev);

if (board && board->teardown) {
int status = board->teardown(client, board->context);
if (status < 0)
dev_dbg(&client->dev, "board %s %s err %d\n",
"teardown", client->name, status);
}
if (client->irq > 0)
free_irq(client->irq, tps);
cancel_delayed_work_sync(&tps->work);
debugfs_remove(tps->file);
the_tps = NULL;
return 0;
}