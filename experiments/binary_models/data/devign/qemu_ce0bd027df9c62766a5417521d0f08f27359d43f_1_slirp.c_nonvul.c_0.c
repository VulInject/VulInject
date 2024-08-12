static int FUN1(struct VAR1 *VAR2)
{
    VAR3 *VAR4 = NULL;
    ULONG VAR5;
    DWORD VAR6;
    VAR7 *VAR8;
    struct in_addr VAR9;
    VAR4 = (VAR3 *)FUN2(VAR10, sizeof(VAR3));
    VAR5 = sizeof(VAR3);
    if (VAR11 == FUN3(VAR4, &VAR5))
    {
        if (VAR4)
        {
            FUN4(VAR4);
            VAR4 = NULL;
        }
        VAR4 = FUN2(VAR10, VAR5);
    }
    if ((VAR6 = FUN3(VAR4, &VAR5)) != VAR12)
    {
        FUN5("", (VAR13)VAR6);
        if (VAR4)
        {
            FUN4(VAR4);
            VAR4 = NULL;
        }
        return -1;
    }
    VAR8 = &(VAR4->VAR14);
    FUN6(VAR8->VAR15.VAR16, &VAR9);
    *VAR2 = VAR9;
    if (VAR4)
    {
        FUN4(VAR4);
        VAR4 = NULL;
    }
    return 0;
}