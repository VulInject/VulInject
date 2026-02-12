static void batadv_tp_update_rto(struct batadv_tp_vars *tp_vars,
u32 new_rtt)
{
long m = new_rtt;


if (tp_vars->srtt != 0) {
m -= (tp_vars->srtt >> 3); 
tp_vars->srtt += m; 
if (m < 0)
m = -m;

m -= (tp_vars->rttvar >> 2);
tp_vars->rttvar += m; 
} else {

tp_vars->srtt = m << 3;	
tp_vars->rttvar = m << 1; 
}


tp_vars->rto = (tp_vars->srtt >> 3) + tp_vars->rttvar;
}