static int do_reserve_engines(struct device *dev,
struct otx2_cpt_eng_grp_info *grp,
struct otx2_cpt_engines *req_engs)
{
struct otx2_cpt_engs_rsvd *engs = NULL;
int i, ret;

for (i = 0; i < OTX2_CPT_MAX_ETYPES_PER_GRP; i++) {
if (!grp->engs[i].type) {
engs = &grp->engs[i];
break;
}
}

if (!engs)
return -ENOMEM;

engs->type = req_engs->type;
engs->count = req_engs->count;

ret = update_engines_offset(dev, &grp->g->avail, engs);
if (ret)
return ret;

if (engs->count > 0) {
ret = update_engines_avail_count(dev, &grp->g->avail, engs,
-engs->count);
if (ret)
return ret;
}

return 0;
}