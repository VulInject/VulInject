static void FUN1(const char *VAR1)
{
    char VAR2[16];
    if (!VAR1)
        return;
    VAR2[sizeof(VAR2) - 1] = 0;
    strncpy(VAR2, VAR1, sizeof(VAR2));
    FUN2(VAR3, VAR2);
}