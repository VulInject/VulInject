void jshI2CWrite(IOEventFlags device, unsigned char address, int nBytes,
const unsigned char *data, bool sendStop) {

if (device != EV_I2C1) return;     

uint8 ack;

i2c_master_start();                   
i2c_master_writeByte((address<<1)|0); 
ack = i2c_master_getAck();            

if (!ack) goto error;
while (nBytes--) {
i2c_master_writeByte(*data++);      
ack = i2c_master_getAck();          
if (!ack) goto error;
}
if (sendStop) i2c_master_stop();
return;
error:
i2c_master_stop();
jsExceptionHere(JSET_INTERNALERROR, "I2CWrite: No ACK %d\n", ack);
}