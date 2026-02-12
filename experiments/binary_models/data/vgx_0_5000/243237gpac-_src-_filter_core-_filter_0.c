GF_Err gf_filter_push_caps(GF_Filter *filter, u32 code, GF_PropertyValue *value, const char *name, u32 flags, u8 priority)
{
u32 nb_caps;
GF_FilterCapability *caps;
if (! (filter->freg->flags & GF_FS_REG_CUSTOM)) {
GF_LOG(GF_LOG_ERROR, GF_LOG_FILTER, ("Attempt to push cap on non custom filter %s\n", filter->freg->name));
return GF_BAD_PARAM;
}
caps = (GF_FilterCapability *)filter->forced_caps;
nb_caps = filter->nb_forced_caps;
caps = gf_realloc(caps, sizeof(GF_FilterCapability)*(nb_caps+1) );
if (!caps) return GF_OUT_OF_MEM;
caps[nb_caps].code = code;
caps[nb_caps].val = *value;
caps[nb_caps].name = name ? gf_strdup(name) : NULL;
caps[nb_caps].priority = priority;
caps[nb_caps].flags = flags;
filter->nb_forced_caps++;
filter->forced_caps = caps;


GF_FilterRegister *freg = (GF_FilterRegister *)filter->freg;
freg->caps = filter->forced_caps;
freg->nb_caps = filter->nb_forced_caps;
gf_filter_sess_reset_graph(filter->session, filter->freg);
gf_filter_sess_build_graph(filter->session, filter->freg);

return GF_OK;
}