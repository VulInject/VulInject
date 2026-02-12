}
EXPORT_SYMBOL(gro_cells_receive);


static int gro_cell_poll(struct napi_struct *napi, int budget)
{
struct gro_cell *cell = container_of(napi, struct gro_cell, napi);
struct sk_buff *skb;
int work_done = 0;

while (work_done < budget) {
skb = __skb_dequeue(&cell->napi_skbs);
if (!skb)
break;
napi_gro_receive(napi, skb);
work_done++;
}

if (work_done < budget)
napi_complete_done(napi, work_done);
return work_done;
}