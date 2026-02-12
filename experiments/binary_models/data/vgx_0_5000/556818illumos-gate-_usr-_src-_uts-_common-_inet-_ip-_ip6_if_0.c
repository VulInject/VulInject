static rule_res_t
rule_prefix(cand_t *bc, cand_t *cc, const dstinfo_t *dstinfo, ip_stack_t *ipst)
{
if (!bc->cand_common_pref_set) {
bc->cand_common_pref = ip_common_prefix_v6(&bc->cand_srcaddr,
dstinfo->dst_addr);
bc->cand_common_pref_set = B_TRUE;
}

cc->cand_common_pref = ip_common_prefix_v6(&cc->cand_srcaddr,
dstinfo->dst_addr);
cc->cand_common_pref_set = B_TRUE;

if (bc->cand_common_pref == cc->cand_common_pref)
return (CAND_TIE);
else if (bc->cand_common_pref > cc->cand_common_pref)
return (CAND_AVOID);
else
return (CAND_PREFER);
}