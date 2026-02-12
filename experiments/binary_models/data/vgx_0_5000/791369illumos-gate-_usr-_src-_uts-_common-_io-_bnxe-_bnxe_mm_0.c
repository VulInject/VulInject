void BnxeInitBdCnts(um_device_t * pUM,
int           cli_idx)
{
lm_device_t *      pLM = (lm_device_t *)pUM;
BnxeHwPageConfig * pPageCfg;

pLM->params.l2_tx_bd_page_cnt[cli_idx]  = BNXE_DEF_TX_BD_PAGE_CNT;
pLM->params.l2_tx_coal_buf_cnt[cli_idx] = BNXE_DEF_TX_COAL_BUF_CNT;

pPageCfg = &bnxeHwPageConfigs[0];
while (pPageCfg->bufCnt)
{
if (pLM->params.l2_rx_desc_cnt[cli_idx] <= pPageCfg->bufCnt)
{
pLM->params.l2_tx_bd_page_cnt[cli_idx]  = pPageCfg->txBdPageCnt;
pLM->params.l2_tx_coal_buf_cnt[cli_idx] = pPageCfg->txCoalBufCnt;
break;
}

pPageCfg++;
}
}