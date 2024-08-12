int FUN1(VAR1 **VAR2, VAR3 **VAR4, const char *VAR5)
{
    FUN2(VAR2, strlen(VAR5));
    FUN3(VAR2, VAR5, strlen(VAR5));
    if (*VAR4)
    {
        int VAR6 = FUN4(*VAR4);
        VAR7 *VAR8 = NULL;
        FUN2(VAR2, VAR6);
        while ((VAR8 = FUN5(*VAR4, "", VAR8, VAR9)))
        {
            int64_t VAR10 = strlen(VAR8->VAR11);
            int64_t VAR12 = strlen(VAR8->VAR13);
            if (VAR10 + 1 + VAR12 > VAR14)
                return FUN6(VAR15);
            FUN2(VAR2, VAR10 + 1 + VAR12);
            FUN3(VAR2, VAR8->VAR11, VAR10);
            FUN7(VAR2, '');
            FUN3(VAR2, VAR8->VAR13, VAR12);
        }
    }
    else
        FUN2(VAR2, 0);
    return 0;
}