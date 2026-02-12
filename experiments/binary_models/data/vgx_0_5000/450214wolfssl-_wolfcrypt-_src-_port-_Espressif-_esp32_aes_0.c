static void esp_aes_hw_Set_KeyMode(Aes *ctx, ESP32_AESPROCESS mode)
{
word32 i;
word32 mode_ = 0;

ESP_LOGV(TAG, "  enter esp_aes_hw_Set_KeyMode");


if(mode == ESP32_AES_UPDATEKEY_ENCRYPT) {
mode_ = 0;
}
else {
if (mode == ESP32_AES_UPDATEKEY_DECRYPT) {
mode_ = 4;
}
else {
ESP_LOGE(TAG, "  >> unexpected error.");
return;
}
}


for(i=0; i<(ctx->keylen)/sizeof(word32); i++){
DPORT_REG_WRITE(AES_KEY_BASE + (i*4), *(((word32*)ctx->key) + i));
}


switch(ctx->keylen){
case 24: mode_ += 1; break;
case 32: mode_ += 2; break;
default: break;
}

DPORT_REG_WRITE(AES_MODE_REG, mode_);
ESP_LOGV(TAG, "  leave esp_aes_hw_Setkey");
}