static int itacns_match_cns_card(sc_card_t *card, unsigned int i)
{
unsigned char *atr = card->atr.value;
sc_context_t *ctx;
ctx = card->ctx;


itacns_atr_match(i, 0x01); 
i += 2; 
itacns_atr_match(i, 'C'); 
itacns_atr_match(i, 'N'); 
itacns_atr_match(i, 'S'); 



if(card->driver) {
DRVDATA(card)->cns_version = atr[i];
}

if(atr[i] != 0x10 && atr[i] != 0x11) {
char version[8];
snprintf(version, sizeof(version), "%d.%d", (atr[i] >> 4) & 0x0f, atr[i] & 0x0f);
sc_log(card->ctx, "CNS card version %s; no official specifications "
"are published. Proceeding anyway.\n", version);
}
i++;

itacns_atr_match(i, 0x31); 
itacns_atr_match(i, 0x80); 

card->type = SC_CARD_TYPE_ITACNS_CNS;

return 1;
}