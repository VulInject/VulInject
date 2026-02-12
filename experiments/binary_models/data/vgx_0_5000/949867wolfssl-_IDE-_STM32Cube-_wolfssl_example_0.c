static int uartIORx(WOLFSSL *ssl, char *buf, int sz, void *ctx)
{
HAL_StatusTypeDef status;
tls13_buf *tb = ctx;

printf("UART Read: In %d\n", sz);

if (tb->curr_index + sz <= tb->data_len) {
XMEMCPY(buf, tb->buf + tb->curr_index, sz);
tb->curr_index += sz;
printf("UART Read1: Out %d\n", sz);
return sz;
}

msg_length = 0;
XMEMSET(tb, 0, sizeof(*tb));



status = HAL_UARTEx_ReceiveToIdle_DMA(&TLS_UART, (uint8_t *)tb->buf, MAX_RECORD_SIZE);
if (status != HAL_OK) {
return WOLFSSL_CBIO_ERR_WANT_READ;
}
else {

while (msg_length == 0) {
HAL_Delay(10);
}
printf("Message received! length = %d\n", msg_length);
}


XMEMCPY(buf, tb->buf, sz);
tb->data_len = msg_length;
tb->curr_index = sz;

printf("UART Read2: Out %d\n", tb->data_len);

return sz;
}