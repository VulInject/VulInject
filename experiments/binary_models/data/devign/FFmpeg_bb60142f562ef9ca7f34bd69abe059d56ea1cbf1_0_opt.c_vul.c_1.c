static int FUN1(void *VAR1, const VAR2 *VAR3, const char *VAR4, VAR5 **VAR6)
{
    int *VAR7 = (int *)(VAR6 + 1);
    VAR5 *VAR8, *VAR9;
    int VAR10 = strlen(VAR4);
    FUN2(VAR6);
    *VAR7 = 0;
    if (VAR10 & 1)
        return FUN3(VAR11);
    VAR10 /= 2;
    VAR9 = VAR8 = FUN4(VAR10);
    while (*VAR4)
    {
        int VAR12 = FUN5(*VAR4++);
        int VAR13 = FUN5(*VAR4++);
        if (VAR12 < 0 || VAR13 < 0)
        {
            FUN6(VAR8);
            return FUN3(VAR11);
        }
        *VAR9++ = (VAR12 << 4) | VAR13;
    }
    *VAR6 = VAR8;
    *VAR7 = VAR10;
    return 0;
}