void resettable_change_parent(Object *obj, Object *newp, Object *oldp)
{
ResettableClass *rc = RESETTABLE_GET_CLASS(obj);
ResettableState *s = rc->get_state(obj);
unsigned newp_count = resettable_get_count(newp);
unsigned oldp_count = resettable_get_count(oldp);


assert(!enter_phase_in_progress && !exit_phase_in_progress);
trace_resettable_change_parent(obj, oldp, oldp_count, newp, newp_count);



for (unsigned i = oldp_count; i < newp_count; i++) {
resettable_assert_reset(obj, RESET_TYPE_COLD);
}

if (oldp_count && s->hold_phase_pending) {
resettable_phase_hold(obj, NULL, RESET_TYPE_COLD);
}

for (unsigned i = newp_count; i < oldp_count; i++) {
resettable_release_reset(obj, RESET_TYPE_COLD);
}
}