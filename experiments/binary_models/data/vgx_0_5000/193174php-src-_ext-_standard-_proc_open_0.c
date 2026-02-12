static zend_result convert_command_to_use_shell(wchar_t **cmdw, size_t cmdw_len)
{
size_t len = sizeof(COMSPEC_NT) + sizeof(" /s /c ") + cmdw_len + 3;
wchar_t *cmdw_shell = (wchar_t *)malloc(len * sizeof(wchar_t));

if (cmdw_shell == NULL) {
php_error_docref(NULL, E_WARNING, "Command conversion failed");
return FAILURE;
}

if (_snwprintf(cmdw_shell, len, L"%hs /s /c \"%s\"", COMSPEC_NT, *cmdw) == -1) {
free(cmdw_shell);
php_error_docref(NULL, E_WARNING, "Command conversion failed");
return FAILURE;
}

free(*cmdw);
*cmdw = cmdw_shell;

return SUCCESS;
}