static int mlxsw_i2c_irq_init(struct mlxsw_i2c *mlxsw_i2c, u8 addr)
{
int err;


if (!IS_REACHABLE(CONFIG_MLXREG_HOTPLUG))
return 0;


if (mlxsw_i2c->pdata && mlxsw_i2c->pdata->irq)
mlxsw_i2c->irq = mlxsw_i2c->pdata->irq;
else if (addr == MLXSW_FAST_I2C_SLAVE)
mlxsw_i2c->irq = MLXSW_I2C_DEFAULT_IRQ;

if (!mlxsw_i2c->irq)
return 0;

INIT_WORK(&mlxsw_i2c->irq_work, mlxsw_i2c_work_handler);
err = request_irq(mlxsw_i2c->irq, mlxsw_i2c_irq_handler,
IRQF_TRIGGER_FALLING | IRQF_SHARED, "mlxsw-i2c",
mlxsw_i2c);
if (err) {
dev_err(mlxsw_i2c->bus_info.dev, "Failed to request irq: %d\n",
err);
return err;
}

return 0;
}