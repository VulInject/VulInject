static void
thread_timerfd_handler(thread_ref_t thread)
{
thread_master_t *m = thread->master;
uint64_t expired;
ssize_t len;

len = read(m->timer_fd, &expired, sizeof(expired));
if (len < 0)
log_message(LOG_ERR, "scheduler: Error reading on timerfd fd:%d (%m)", m->timer_fd);


thread_rb_move_ready(m, &m->read, THREAD_READ_TIMEOUT);
thread_rb_move_ready(m, &m->write, THREAD_WRITE_TIMEOUT);
thread_rb_move_ready(m, &m->timer, THREAD_READY_TIMER);
thread_rb_move_ready(m, &m->child, THREAD_CHILD_TIMEOUT);


m->timer_thread = thread_add_read(m, thread_timerfd_handler, NULL, m->timer_fd, TIMER_NEVER, 0);
}