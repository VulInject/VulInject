static int apm_suspend_notifier(struct notifier_block *nb,
unsigned long event,
void *dummy)
{
struct apm_user *as;
int err;
unsigned long apm_event;


if (atomic_read(&userspace_notification_inhibit))
return NOTIFY_DONE;

switch (event) {
case PM_SUSPEND_PREPARE:
case PM_HIBERNATION_PREPARE:
apm_event = (event == PM_SUSPEND_PREPARE) ?
APM_USER_SUSPEND : APM_USER_HIBERNATION;

mutex_lock(&state_lock);
down_read(&user_list_lock);

list_for_each_entry(as, &apm_user_list, list) {
if (as->suspend_state != SUSPEND_WAIT && as->reader &&
as->writer && as->suser) {
as->suspend_state = SUSPEND_PENDING;
atomic_inc(&suspend_acks_pending);
queue_add_event(&as->queue, apm_event);
}
}

up_read(&user_list_lock);
mutex_unlock(&state_lock);
wake_up_interruptible(&apm_waitqueue);


err = wait_event_interruptible_timeout(
apm_suspend_waitqueue,
atomic_read(&suspend_acks_pending) == 0,
5*HZ);


if (err == 0) {

mutex_lock(&state_lock);
down_read(&user_list_lock);
list_for_each_entry(as, &apm_user_list, list) {
if (as->suspend_state == SUSPEND_PENDING ||
as->suspend_state == SUSPEND_READ) {
as->suspend_state = SUSPEND_ACKTO;
atomic_dec(&suspend_acks_pending);
}
}
up_read(&user_list_lock);
mutex_unlock(&state_lock);
}


if (err >= 0)
return NOTIFY_OK;


return notifier_from_errno(err);

case PM_POST_SUSPEND:
case PM_POST_HIBERNATION:
apm_event = (event == PM_POST_SUSPEND) ?
APM_NORMAL_RESUME : APM_HIBERNATION_RESUME;

queue_event(apm_event);


mutex_lock(&state_lock);
down_read(&user_list_lock);
list_for_each_entry(as, &apm_user_list, list) {
if (as->suspend_state == SUSPEND_ACKED) {

as->suspend_result = 0;
as->suspend_state = SUSPEND_DONE;
}
}
up_read(&user_list_lock);
mutex_unlock(&state_lock);

wake_up(&apm_suspend_waitqueue);
return NOTIFY_OK;

default:
return NOTIFY_DONE;
}
}