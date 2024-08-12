int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4;
    FUN2(VAR2, VAR5);
    FUN2(VAR2, VAR6);
    FUN3(VAR4, &VAR7, VAR8)
    {
        int VAR9;
        if (VAR4->VAR10 == NULL)
            continue;
        FUN4(VAR2, VAR11);
        FUN2(VAR2, VAR4->VAR12);
        VAR9 = strlen(VAR4->VAR13);
        FUN4(VAR2, VAR9);
        FUN5(VAR2, (VAR14 *)VAR4->VAR13, VAR9);
        FUN2(VAR2, VAR4->VAR15);
        FUN2(VAR2, VAR4->VAR16);
        VAR4->FUN6(VAR2, VAR11, VAR4->VAR17);
    }
    if (FUN7(VAR2))
        return -VAR18;
    return 0;
}