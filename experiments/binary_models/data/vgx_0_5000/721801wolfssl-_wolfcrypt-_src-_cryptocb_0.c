int wc_CryptoCb_RandomBlock(WC_RNG* rng, byte* out, word32 sz)
{
int ret = CRYPTOCB_UNAVAILABLE;
CryptoCb* dev;


if (rng) {
dev = wc_CryptoCb_FindDevice(rng->devId);
}
else {

dev = wc_CryptoCb_FindDeviceByIndex(0);
}

if (dev && dev->cb) {
wc_CryptoInfo cryptoInfo;
XMEMSET(&cryptoInfo, 0, sizeof(cryptoInfo));
cryptoInfo.algo_type = WC_ALGO_TYPE_RNG;
cryptoInfo.rng.rng = rng;
cryptoInfo.rng.out = out;
cryptoInfo.rng.sz = sz;

ret = dev->cb(dev->devId, &cryptoInfo, dev->ctx);
}

return wc_CryptoCb_TranslateErrorCode(ret);
}