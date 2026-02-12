void ft_sess_close(struct se_session *se_sess)
{
struct ft_sess *sess = se_sess->fabric_sess_ptr;
u32 port_id;

mutex_lock(&ft_lport_lock);
port_id = sess->port_id;
if (port_id == -1) {
mutex_unlock(&ft_lport_lock);
return;
}
TFC_SESS_DBG(sess->tport->lport, "port_id %x close session\n", port_id);
ft_sess_unhash(sess);
mutex_unlock(&ft_lport_lock);
ft_close_sess(sess);

synchronize_rcu();		
}