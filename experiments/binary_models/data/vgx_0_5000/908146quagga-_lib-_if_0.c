if_link_params_get (struct interface *ifp)
{
int i;

if (ifp->link_params != NULL)
return ifp->link_params;

struct if_link_params *iflp = XCALLOC(MTYPE_IF_LINK_PARAMS,
sizeof (struct if_link_params));
if (iflp == NULL) return NULL;


iflp->te_metric = ifp->metric;


int bw = (float)((ifp->bandwidth ? ifp->bandwidth : DEFAULT_BANDWIDTH) 
* TE_KILO_BIT / TE_BYTE);


iflp->max_bw = bw;
iflp->max_rsv_bw = bw;
for (i = 0; i < MAX_CLASS_TYPE; i++)
iflp->unrsv_bw[i] = bw;


iflp->lp_status = LP_TE | LP_MAX_BW | LP_MAX_RSV_BW | LP_UNRSV_BW;


ifp->link_params = iflp;

return iflp;
}