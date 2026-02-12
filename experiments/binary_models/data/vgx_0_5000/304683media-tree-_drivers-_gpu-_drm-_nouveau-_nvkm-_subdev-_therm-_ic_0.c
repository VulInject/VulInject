static bool
probe_monitoring_device(struct nvkm_i2c_bus *bus,
struct i2c_board_info *info, void *data)
{
struct nvkm_therm *therm = data;
struct nvbios_therm_sensor *sensor = &therm->bios_sensor;
struct i2c_client *client;

request_module("%s%s", I2C_MODULE_PREFIX, info->type);

client = i2c_new_device(&bus->i2c, info);
if (!client)
return false;

if (!client->dev.driver ||
to_i2c_driver(client->dev.driver)->detect(client, info)) {
i2c_unregister_device(client);
return false;
}

nvkm_debug(&therm->subdev,
"Found an %s at address 0x%x (controlled by lm_sensors, "
"temp offset %+i C)\n",
info->type, info->addr, sensor->offset_constant);
therm->ic = client;
return true;
}