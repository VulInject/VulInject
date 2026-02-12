static int
keysock_param_set(queue_t *q, mblk_t *mp, char *value, caddr_t cp, cred_t *cr)
{
ulong_t	new_value;
keysockparam_t	*keysockpa = (keysockparam_t *)cp;
keysock_t *ks = (keysock_t *)q->q_ptr;
keysock_stack_t	*keystack = ks->keysock_keystack;


if (ddi_strtoul(value, NULL, 10, &new_value) != 0)
return (EINVAL);

mutex_enter(&keystack->keystack_param_lock);

if (new_value < keysockpa->keysock_param_min ||
new_value > keysockpa->keysock_param_max) {
mutex_exit(&keystack->keystack_param_lock);
return (EINVAL);
}


keysockpa->keysock_param_value = new_value;
mutex_exit(&keystack->keystack_param_lock);

return (0);
}