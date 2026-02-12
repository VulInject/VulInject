static int dccp_hdlr_min_cscov(struct sock *sk, u64 cscov, bool rx)
{
struct dccp_sock *dp = dccp_sk(sk);

if (rx)
dp->dccps_pcrlen = cscov;
else {
if (dp->dccps_pcslen == 0)
dp->dccps_pcslen = cscov;
else if (cscov > dp->dccps_pcslen)
DCCP_WARN("CsCov %u too small, peer requires >= %u\n",
dp->dccps_pcslen, (u8)cscov);
}
return 0;
}

static const struct {
u8			feat_num;		
enum dccp_feat_type	rxtx;			
enum dccp_feat_type	reconciliation;		
u8			default_value;		
int (*activation_hdlr)(struct sock *sk, u64 val, bool rx);

} dccp_feat_table[] = {