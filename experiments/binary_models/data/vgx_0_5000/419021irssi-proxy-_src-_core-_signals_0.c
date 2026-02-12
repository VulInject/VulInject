int signal_emit(const char *signal, int params, ...)
{
Signal *rec;
va_list va;
int signal_id;

g_return_val_if_fail(params >= 0 && params <= SIGNAL_MAX_ARGUMENTS, FALSE);

signal_id = signal_get_uniq_id(signal);

rec = g_hash_table_lookup(signals, GINT_TO_POINTER(signal_id));
if (rec != NULL) {
va_start(va, params);
signal_emit_real(rec, params, va, rec->hooks);
va_end(va);
}

return rec != NULL;
}