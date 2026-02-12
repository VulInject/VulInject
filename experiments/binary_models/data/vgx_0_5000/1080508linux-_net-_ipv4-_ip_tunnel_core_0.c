static int ip_tun_opts_nlsize(struct ip_tunnel_info *info)
{
int opt_len;

if (!(info->key.tun_flags & TUNNEL_OPTIONS_PRESENT))
return 0;

opt_len = nla_total_size(0);		
if (info->key.tun_flags & TUNNEL_GENEVE_OPT) {
struct geneve_opt *opt;
int offset = 0;

opt_len += nla_total_size(0);	
while (info->options_len > offset) {
opt = ip_tunnel_info_opts(info) + offset;
opt_len += nla_total_size(2)	
+ nla_total_size(1)	
+ nla_total_size(opt->length * 4);

offset += sizeof(*opt) + opt->length * 4;
}
} else if (info->key.tun_flags & TUNNEL_VXLAN_OPT) {
opt_len += nla_total_size(0)	
+ nla_total_size(4);	
} else if (info->key.tun_flags & TUNNEL_ERSPAN_OPT) {
struct erspan_metadata *md = ip_tunnel_info_opts(info);

opt_len += nla_total_size(0)	
+ nla_total_size(1)	
+ (md->version == 1 ? nla_total_size(4)

: nla_total_size(1) +
nla_total_size(1));

}

return opt_len;
}