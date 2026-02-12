static void nft_xfrm_get_eval_in(const struct nft_xfrm *priv,
struct nft_regs *regs,
const struct nft_pktinfo *pkt)
{
const struct sec_path *sp = skb_sec_path(pkt->skb);
const struct xfrm_state *state;

if (sp == NULL || sp->len <= priv->spnum) {
regs->verdict.code = NFT_BREAK;
return;
}

state = sp->xvec[priv->spnum];
nft_xfrm_state_get_key(priv, regs, state);
}