static int FUN1(void *VAR1, const VAR2 *VAR3, const char *VAR4, VAR5 *VAR6, int VAR7, int((*VAR8)(const char *)), const char *VAR9)
{
    int VAR10, VAR11, VAR12;
    if (!VAR4 || !strcmp(VAR4, ""))
    {
        VAR10 = -1;
    }
    else
    {
        VAR10 = FUN2(VAR4);
        if (VAR10 == -1)
        {
            char *VAR13;
            VAR10 = FUN3(VAR4, &VAR13, 0);
            if (*VAR13 || (unsigned)VAR10 >= VAR7)
            {
                FUN4(VAR1, VAR14, ""%VAR15\"", VAR4, VAR9);
                return FUN5(VAR16);
            }
        }
    }
    VAR11 = FUN6(VAR3->VAR11, -1);
    VAR12 = FUN7(VAR3->VAR12, VAR7 - 1);
    if (VAR10 < VAR11 || VAR10 > VAR12)
    {
        FUN4(VAR1, VAR14, "", VAR10, VAR3->VAR17, VAR9, VAR11, VAR12);
        return FUN5(VAR18);
    }
    *(int *)VAR6 = VAR10;
    return 0;
}