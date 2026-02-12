int vxlan_set_tunnel_dst(struct __sk_buff *skb)
{
int ret;
struct bpf_tunnel_key key;
struct vxlan_metadata md;
__u32 index = 0;
__u32 *local_ip = NULL;

local_ip = bpf_map_lookup_elem(&local_ip_map, &index);
if (!local_ip) {
log_err(ret);
return TC_ACT_SHOT;
}

__builtin_memset(&key, 0x0, sizeof(key));
key.local_ipv4 = 0xac100164; 
key.remote_ipv4 = *local_ip;
key.tunnel_id = 2;
key.tunnel_tos = 0;
key.tunnel_ttl = 64;

ret = bpf_skb_set_tunnel_key(skb, &key, sizeof(key),
BPF_F_ZERO_CSUM_TX);
if (ret < 0) {
log_err(ret);
return TC_ACT_SHOT;
}

md.gbp = 0x800FF; 
ret = bpf_skb_set_tunnel_opt(skb, &md, sizeof(md));
if (ret < 0) {
log_err(ret);
return TC_ACT_SHOT;
}

return TC_ACT_OK;
}