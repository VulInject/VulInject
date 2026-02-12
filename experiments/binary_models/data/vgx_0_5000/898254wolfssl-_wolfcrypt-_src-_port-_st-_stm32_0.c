int wc_Stm32_Hash_Final(STM32_HASH_Context* stmCtx, word32 algo,
byte* hash, word32 digestSize)
{
int ret = 0;

printf("STM Hash Final: algo %x, digestSz %d\n", algo, digestSize);


STM32_HASH_CLOCK_ENABLE(stmCtx);


wc_Stm32_Hash_RestoreContext(stmCtx, algo);


if (stmCtx->buffLen > 0) {

wc_Stm32_Hash_Data(stmCtx, stmCtx->buffLen);
}


wc_Stm32_Hash_NumValidBits(stmCtx->loLen + stmCtx->buffLen);


HASH->STR |= HASH_STR_DCAL;


ret = wc_Stm32_Hash_WaitDone(stmCtx);
if (ret == 0) {

wc_Stm32_Hash_GetDigest(hash, digestSize);
}


STM32_HASH_CLOCK_DISABLE(stmCtx);

return ret;
}