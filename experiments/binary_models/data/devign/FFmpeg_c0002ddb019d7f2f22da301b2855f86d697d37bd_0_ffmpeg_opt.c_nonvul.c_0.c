static int FUN1(void *VAR1, const char *VAR2, const char *VAR3)
{
    VAR4 *VAR5 = VAR1;
    char VAR6[128];
    int64_t VAR7 = FUN2(VAR2, VAR3, 0) / 1E6;
    struct tm VAR8 = *FUN3((VAR9 *)&VAR7);
    if (!FUN4(VAR6, sizeof(VAR6), "", &VAR8))
        return -1;
    FUN5(VAR5, "", VAR6, VAR10);
    FUN6(NULL, VAR11, ""
                                 "",
           VAR2);
    return 0;
}