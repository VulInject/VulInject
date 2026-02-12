void _rtw_free_sta_priv(struct	sta_priv *pstapriv)
{
struct list_head *phead, *plist;
struct sta_info *psta = NULL;
struct recv_reorder_ctrl *preorder_ctrl;
int	index;

if (pstapriv) {

spin_lock_bh(&pstapriv->sta_hash_lock);
for (index = 0; index < NUM_STA; index++) {
phead = &pstapriv->sta_hash[index];
plist = phead->next;

while (phead != plist) {
int i;
psta = container_of(plist, struct sta_info, hash_list);
plist = plist->next;

for (i = 0; i < 16; i++) {
preorder_ctrl = &psta->recvreorder_ctrl[i];
_cancel_timer_ex(&preorder_ctrl->reordering_ctrl_timer);
}
}
}
spin_unlock_bh(&pstapriv->sta_hash_lock);


vfree(pstapriv->pallocated_stainfo_buf);
}
}