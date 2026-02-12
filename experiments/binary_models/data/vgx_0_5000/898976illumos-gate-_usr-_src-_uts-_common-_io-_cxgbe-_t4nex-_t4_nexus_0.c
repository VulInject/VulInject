void
enable_port_queues(struct port_info *pi)
{
struct adapter *sc = pi->adapter;
int i;
struct sge_iq *iq;
struct sge_rxq *rxq;
struct sge_ofld_rxq *ofld_rxq;

ASSERT(pi->flags & PORT_INIT_DONE);



for_each_ofld_rxq(pi, i, ofld_rxq) {
iq = &ofld_rxq->iq;
if (atomic_cas_uint(&iq->state, IQS_DISABLED, IQS_IDLE) !=
IQS_DISABLED)
panic("%s: iq %p wasn't disabled", __func__,
(void *)iq);
t4_write_reg(sc, MYPF_REG(A_SGE_PF_GTS),
V_SEINTARM(iq->intr_params) | V_INGRESSQID(iq->cntxt_id));
}

for_each_rxq(pi, i, rxq) {
iq = &rxq->iq;
if (atomic_cas_uint(&iq->state, IQS_DISABLED, IQS_IDLE) !=
IQS_DISABLED)
panic("%s: iq %p wasn't disabled", __func__,
(void *) iq);
t4_write_reg(sc, MYPF_REG(A_SGE_PF_GTS),
V_SEINTARM(iq->intr_params) | V_INGRESSQID(iq->cntxt_id));
}
}