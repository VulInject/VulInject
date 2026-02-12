void smt_free_mbuf(struct s_smc *smc, SMbuf *mb)
{

if (mb) {
mb->sm_use_count-- ;
DB_GEN(3, "free_mbuf: sm_use_count = %d", mb->sm_use_count);

if (!mb->sm_use_count) {
DB_GEN(3, "free SMbuf: mb = %p", mb);
mb->sm_next = smc->os.hwm.mbuf_pool.mb_free ;
smc->os.hwm.mbuf_pool.mb_free = mb ;
mb->sm_next = mb_free ;
mb_free = mb ;
}
}
else
SMT_PANIC(smc,HWM_E0003,HWM_E0003_MSG) ;
}