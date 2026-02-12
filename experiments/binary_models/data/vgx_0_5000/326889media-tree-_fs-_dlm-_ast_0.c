void dlm_add_cb(struct dlm_lkb *lkb, uint32_t flags, int mode, int status,
uint32_t sbflags)
{
struct dlm_ls *ls = lkb->lkb_resource->res_ls;
uint64_t new_seq, prev_seq;
int rv;

spin_lock(&dlm_cb_seq_spin);
new_seq = ++dlm_cb_seq;
spin_unlock(&dlm_cb_seq_spin);

if (lkb->lkb_flags & DLM_IFL_USER) {
dlm_user_add_ast(lkb, flags, mode, status, sbflags, new_seq);
return;
}

mutex_lock(&lkb->lkb_cb_mutex);
prev_seq = lkb->lkb_callbacks[0].seq;

rv = dlm_add_lkb_callback(lkb, flags, mode, status, sbflags, new_seq);
if (rv < 0)
goto out;

if (!prev_seq) {
kref_get(&lkb->lkb_ref);

if (test_bit(LSFL_CB_DELAY, &ls->ls_flags)) {
mutex_lock(&ls->ls_cb_mutex);
list_add(&lkb->lkb_cb_list, &ls->ls_cb_delay);
mutex_unlock(&ls->ls_cb_mutex);
} else {
queue_work(ls->ls_callback_wq, &lkb->lkb_cb_work);
}
}
out:
mutex_unlock(&lkb->lkb_cb_mutex);
}