void
V1P_Charge(struct req *req, const struct v1p_acct *a, struct VSC_vbe *b)
{

AN(b);
VSLb(req->vsl, SLT_PipeAcct, "%ju %ju %ju %ju",
(uintmax_t)a->req,
(uintmax_t)a->bereq,
(uintmax_t)a->in,
(uintmax_t)a->out);

Lck_Lock(&pipestat_mtx);
VSC_C_main->s_pipe_hdrbytes += a->req;
VSC_C_main->s_pipe_in += a->in;
VSC_C_main->s_pipe_out += a->out;
b->pipe_hdrbytes += a->bereq;
b->pipe_out += a->in;
b->pipe_in += a->out;
Lck_Unlock(&pipestat_mtx);
}