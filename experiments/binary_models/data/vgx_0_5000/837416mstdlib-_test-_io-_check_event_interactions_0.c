static void el_many_remove_cb(M_event_t *el, M_event_type_t etype, M_io_t *io, void *thunk)
{
cb_data_t       *data = thunk;
M_event_timer_t *timer;

(void)el;
(void)etype;
(void)io;

M_thread_mutex_lock(data->mutex);

data->count++;

M_list_remove_at(data->timers, (size_t)M_rand_range(NULL, 0, M_list_len(data->timers)));
M_list_remove_at(data->timers, (size_t)M_rand_range(NULL, 0, M_list_len(data->timers)));
M_list_remove_at(data->timers, (size_t)M_rand_range(NULL, 0, M_list_len(data->timers)));
M_list_remove_at(data->timers, (size_t)M_rand_range(NULL, 0, M_list_len(data->timers)));
M_list_remove_at(data->timers, (size_t)M_rand_range(NULL, 0, M_list_len(data->timers)));

if (M_list_len(data->timers) == 0) {
M_event_done(data->el1);
} else {
timer = M_event_timer_oneshot(el, M_rand_range(NULL, 0, 500), M_FALSE, el_many_remove_cb, data);
M_list_insert(data->timers, timer);
}
M_thread_mutex_unlock(data->mutex);
}