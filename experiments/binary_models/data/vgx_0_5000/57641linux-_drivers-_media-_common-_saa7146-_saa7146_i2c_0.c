int saa7146_i2c_adapter_prepare(struct saa7146_dev *dev, struct i2c_adapter *i2c_adapter, u32 bitrate)
{
DEB_EE("bitrate: 0x%08x\n", bitrate);


saa7146_write(dev, MC1, (MASK_08 | MASK_24));

dev->i2c_bitrate = bitrate;
saa7146_i2c_reset(dev);

if (i2c_adapter) {
i2c_set_adapdata(i2c_adapter, &dev->v4l2_dev);
i2c_adapter->dev.parent    = &dev->pci->dev;
i2c_adapter->algo	   = &saa7146_algo;
i2c_adapter->algo_data     = NULL;
i2c_adapter->timeout = SAA7146_I2C_TIMEOUT;
i2c_adapter->retries = SAA7146_I2C_RETRIES;
}

return 0;
}