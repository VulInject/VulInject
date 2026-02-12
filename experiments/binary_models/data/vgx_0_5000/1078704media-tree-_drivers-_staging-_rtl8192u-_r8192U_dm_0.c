static void dm_ctstoself(struct net_device *dev)
{
struct r8192_priv *priv = ieee80211_priv(dev);
PRT_HIGH_THROUGHPUT	pHTInfo = priv->ieee80211->pHTInfo;
static unsigned long				lastTxOkCnt;
static unsigned long				lastRxOkCnt;
unsigned long						curTxOkCnt = 0;
unsigned long						curRxOkCnt = 0;

if (priv->ieee80211->bCTSToSelfEnable != true) {
pHTInfo->IOTAction &= ~HT_IOT_ACT_FORCED_CTS2SELF;
return;
}


if (pHTInfo->IOTPeer == HT_IOT_PEER_BROADCOM) {
curTxOkCnt = priv->stats.txbytesunicast - lastTxOkCnt;
curRxOkCnt = priv->stats.rxbytesunicast - lastRxOkCnt;
if (curRxOkCnt > 4*curTxOkCnt) { 
pHTInfo->IOTAction &= ~HT_IOT_ACT_FORCED_CTS2SELF;

} else { 
pHTInfo->IOTAction |= HT_IOT_ACT_FORCED_CTS2SELF;
}

lastTxOkCnt = priv->stats.txbytesunicast;
lastRxOkCnt = priv->stats.rxbytesunicast;
}
}