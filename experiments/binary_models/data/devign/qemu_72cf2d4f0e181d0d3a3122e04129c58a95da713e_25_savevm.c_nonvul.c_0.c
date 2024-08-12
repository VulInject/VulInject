int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4;
    FUN2(VAR4, &VAR5, VAR6)
    {
        if (VAR4->VAR7 == NULL)
            continue;
        FUN3(VAR2, VAR8);
        FUN4(VAR2, VAR4->VAR9);
        VAR4->FUN5(VAR2, VAR8, VAR4->VAR10);
    }
    FUN2(VAR4, &VAR5, VAR6)
    {
        int VAR11;
        if (VAR4->VAR12 == NULL && VAR4->VAR13 == NULL)
            continue;
        FUN3(VAR2, VAR14);
        FUN4(VAR2, VAR4->VAR9);
        VAR11 = strlen(VAR4->VAR15);
        FUN3(VAR2, VAR11);
        FUN6(VAR2, (VAR16 *)VAR4->VAR15, VAR11);
        FUN4(VAR2, VAR4->VAR17);
        FUN4(VAR2, VAR4->VAR18);
        FUN7(VAR2, VAR4);
    }
    FUN3(VAR2, VAR19);
    if (FUN8(VAR2))
        return -VAR20;
    return 0;
}