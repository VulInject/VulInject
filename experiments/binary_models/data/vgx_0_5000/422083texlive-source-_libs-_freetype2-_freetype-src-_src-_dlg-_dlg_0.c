int dlg_vfprintf(FILE* stream, const char* format, va_list args) {
void* handle = NULL;
if(stream == stdout) {
handle = GetStdHandle(STD_OUTPUT_HANDLE);
} else if(stream == stderr) {
handle = GetStdHandle(STD_ERROR_HANDLE);
}

if(handle) {
va_list args_copy;
va_copy(args_copy, args);
int needed = vsnprintf(NULL, 0, format, args_copy);
va_end(args_copy);

if(needed < 0) {
return needed;
}




if(needed >= DLG_MAX_STACK_BUF_SIZE) {
if(win_write_heap(handle, needed, format, args)) {
return needed;
}
} else {
if(win_write_stack(handle, needed, format, args)) {
return needed;
}
}
}

return vfprintf(stream, format, args);
}