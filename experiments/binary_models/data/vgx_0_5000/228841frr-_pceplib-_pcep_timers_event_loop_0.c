void walk_and_process_timers(pcep_timers_context *timers_context)
{
pthread_mutex_lock(&timers_context->timer_list_lock);

bool keep_walking = true;
ordered_list_node *timer_node = timers_context->timer_list->head;
time_t now = time(NULL);
pcep_timer *timer_data;


while (timer_node != NULL && keep_walking) {
timer_data = (pcep_timer *)timer_node->data;
if (timer_data->expire_time <= now) {
timer_node = timer_node->next_node;
ordered_list_remove_first_node(
timers_context->timer_list);

timers_context->expire_handler(timer_data->data,
timer_data->timer_id);
pceplib_free(PCEPLIB_INFRA, timer_data);
} else {
keep_walking = false;
}
}

pthread_mutex_unlock(&timers_context->timer_list_lock);
}