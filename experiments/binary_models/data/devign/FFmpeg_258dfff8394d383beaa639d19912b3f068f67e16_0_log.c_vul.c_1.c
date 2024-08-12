void FUN1(void *VAR1, int VAR2, const char *VAR3, va_list VAR4, char *VAR5, int VAR6, int *VAR7)
{
    char VAR8[3][512];
    FUN2(VAR1, VAR2, VAR3, VAR4, VAR8, sizeof(VAR8[0]), VAR7, NULL);
    snprintf(VAR5, VAR6, "", VAR8[0], VAR8[1], VAR8[2]);
}