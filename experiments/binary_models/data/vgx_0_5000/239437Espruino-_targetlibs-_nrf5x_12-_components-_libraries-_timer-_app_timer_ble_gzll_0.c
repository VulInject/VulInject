static void timer_list_insert(timer_node_t * p_timer)
{
if (mp_timer_id_head == NULL)
{
mp_timer_id_head = p_timer;
}
else
{
if (p_timer->ticks_to_expire <= mp_timer_id_head->ticks_to_expire)
{
mp_timer_id_head->ticks_to_expire -= p_timer->ticks_to_expire;

p_timer->next   = mp_timer_id_head;
mp_timer_id_head = p_timer;
}
else
{
timer_node_t * p_previous;
timer_node_t * p_current;
uint32_t       ticks_to_expire;

ticks_to_expire   = p_timer->ticks_to_expire;
p_previous        = mp_timer_id_head;
p_current         = mp_timer_id_head;

while ((p_current != NULL) && (ticks_to_expire > p_current->ticks_to_expire))
{
ticks_to_expire   -= p_current->ticks_to_expire;
p_previous         = p_current;
p_current          = p_current->next;
}

if (p_current != NULL)
{
p_current->ticks_to_expire -= ticks_to_expire;
}

p_timer->ticks_to_expire = ticks_to_expire;
p_timer->next            = p_current;
p_previous->next         = p_timer;
}
}
}