int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6;
    FUN2(VAR6, &VAR7, VAR8)
    {
        if (VAR6->VAR9 == NULL)
            continue;
        FUN3(VAR4, VAR10);
        FUN4(VAR4, VAR6->VAR11);
        VAR6->FUN5(VAR2, VAR4, VAR10, VAR6->VAR12);
    }
    FUN2(VAR6, &VAR7, VAR8)
    {
        int VAR13;
        if (VAR6->VAR14 == NULL && VAR6->VAR15 == NULL)
            continue;
        FUN3(VAR4, VAR16);
        FUN4(VAR4, VAR6->VAR11);
        VAR13 = strlen(VAR6->VAR17);
        FUN3(VAR4, VAR13);
        FUN6(VAR4, (VAR18 *)VAR6->VAR17, VAR13);
        FUN4(VAR4, VAR6->VAR19);
        FUN4(VAR4, VAR6->VAR20);
        FUN7(VAR4, VAR6);
    }
    FUN3(VAR4, VAR21);
    if (FUN8(VAR4))
        return -VAR22;
    return 0;