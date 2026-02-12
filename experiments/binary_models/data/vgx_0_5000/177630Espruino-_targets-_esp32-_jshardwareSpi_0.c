bool jshSPISendMany(IOEventFlags device, unsigned char *tx, unsigned char *rx, size_t count, void (*callback)()) {
if (!jshIsDeviceInitialised(device)) return false;
if (count==1) {
int r = jshSPISend(device, tx?*tx:-1);
if (rx) *rx = r;
if(callback)callback();
return true;
}
jshSPIWait(device);
int channelPnt = getSPIChannelPnt(device);
esp_err_t ret;
memset(&spi_trans, 0, sizeof(spi_trans));
spi_trans.length=count*8;
spi_trans.tx_buffer=tx;
spi_trans.rx_buffer=rx;
spi_Sending = true;
ret=spi_device_queue_trans(SPIChannels[channelPnt].spi, &spi_trans, rx?0:portMAX_DELAY);

if (ret != ESP_OK) {
spi_Sending = false;
jsExceptionHere(JSET_INTERNALERROR, "SPI Send Error %d\n", ret);
return false;
}
jshSPIWait(device);
if(callback)callback();
return true;
}