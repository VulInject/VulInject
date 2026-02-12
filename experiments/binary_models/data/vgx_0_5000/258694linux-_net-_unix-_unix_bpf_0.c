


({	!skb_queue_empty(&__sk->sk_receive_queue) ||	\
!skb_queue_empty(&__psock->ingress_skb) ||	\
!list_empty(&__psock->ingress_msg);		\
})

static int unix_msg_wait_data(struct sock *sk, struct sk_psock *psock,
long timeo)
{
DEFINE_WAIT_FUNC(wait, woken_wake_function);
struct unix_sock *u = unix_sk(sk);
int ret = 0;

if (sk->sk_shutdown & RCV_SHUTDOWN)
return 1;

if (!timeo)
return ret;

add_wait_queue(sk_sleep(sk), &wait);
sk_set_bit(SOCKWQ_ASYNC_WAITDATA, sk);
if (!unix_sk_has_data(sk, psock)) {
mutex_unlock(&u->iolock);
wait_woken(&wait, TASK_INTERRUPTIBLE, timeo);
mutex_lock(&u->iolock);
ret = unix_sk_has_data(sk, psock);
}
sk_clear_bit(SOCKWQ_ASYNC_WAITDATA, sk);
remove_wait_queue(sk_sleep(sk), &wait);
return ret;
}