static int FUN1(VAR1 *VAR2, const VAR3 *VAR4, VAR5 **VAR6)
{
    const char *VAR7 = FUN2(VAR4, "");
    const char *VAR8 = FUN2(VAR4, "");
    const char *VAR9 = FUN3(VAR4, "");
    int VAR10 = FUN4(VAR4, "", -1);
    int VAR11 = FUN4(VAR4, "", -1);
    VAR12 *VAR13 = NULL;
    int VAR14;
    if (strcmp(VAR7, "") == 0)
    {
        if (!FUN5(&VAR13))
        {
            FUN6(VAR13);
            FUN7(VAR13);
            return -1;
        }
        if (VAR10 == -1 && VAR11 == -1)
        {
            FUN8(VAR15, "");
            return -1;
        }
        VAR14 = FUN9(VAR8, VAR10, VAR11, VAR9);
        if (VAR14 != 0)
        {
            FUN8(VAR16);
            return -1;
        }
        return 0;
    }
    FUN8(VAR17, "", "");
    return -1;
}