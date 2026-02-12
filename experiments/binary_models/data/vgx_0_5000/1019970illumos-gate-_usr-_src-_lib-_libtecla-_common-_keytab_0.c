int _kt_set_action(KeyTab *kt, const char *action, KtKeyFn *fn, void *data)
{
Symbol *sym;   

if(!kt || !action) {
errno = EINVAL;
if(kt)
_err_record_msg(kt->err, "NULL argument(s)", END_ERR_MSG);
return 1;
};

if(!fn) {
sym = _del_HashSymbol(kt->actions, action);
return 0;
};

sym = _find_HashSymbol(kt->actions, action);
if(sym) {
sym->fn = (void (*)(void))fn;
sym->data = data;
return 0;
};

if(!_new_HashSymbol(kt->actions, action, 0, (void (*)(void))fn, data, 0)) {
_err_record_msg(kt->err, "Insufficient memory to record key-binding action",
END_ERR_MSG);
return 1;
};
return 0;
}