void wc_Md4Update(Md4* md4, const byte* data, word32 len)
{

byte* local = (byte*)md4->buffer;

while (len) {
word32 add = min(len, MD4_BLOCK_SIZE - md4->buffLen);
XMEMCPY(&local[md4->buffLen], data, add);

md4->buffLen += add;
data         += add;
len          -= add;

if (md4->buffLen == MD4_BLOCK_SIZE) {
ByteReverseWords(md4->buffer, md4->buffer, MD4_BLOCK_SIZE);
Transform(md4);
AddLength(md4, MD4_BLOCK_SIZE);
md4->buffLen = 0;
}
}
}