static bool comp_mt(const struct sk_buff *skb, struct xt_action_param *par)
{
struct ip_comp_hdr _comphdr;
const struct ip_comp_hdr *chdr;
const struct xt_ipcomp *compinfo = par->matchinfo;


if (par->fragoff != 0)
return false;

chdr = skb_header_pointer(skb, par->thoff, sizeof(_comphdr), &_comphdr);
if (chdr == NULL) {

pr_debug("Dropping evil IPComp tinygram.\n");
par->hotdrop = true;
return false;
}

return spi_match(compinfo->spis[0], compinfo->spis[1],
ntohs(chdr->cpi),
!!(compinfo->invflags & XT_IPCOMP_INV_SPI));
}