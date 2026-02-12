static int srp_map_sg_fr(struct srp_map_state *state, struct srp_rdma_ch *ch,
struct srp_request *req, struct scatterlist *scat,
int count)
{
unsigned int sg_offset = 0;

state->fr.next = req->fr_list;
state->fr.end = req->fr_list + ch->target->mr_per_cmd;
state->sg = scat;

if (count == 0)
return 0;

while (count) {
int i, n;

n = srp_map_finish_fr(state, req, ch, count, &sg_offset);
if (unlikely(n < 0))
return n;

count -= n;
for (i = 0; i < n; i++)
state->sg = sg_next(state->sg);
}

return 0;
}