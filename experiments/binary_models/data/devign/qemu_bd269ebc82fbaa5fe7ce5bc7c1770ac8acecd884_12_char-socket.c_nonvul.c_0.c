static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR2);
    VAR5 *VAR6;
    VAR7 *VAR8 = NULL;
    VAR9 *VAR10;
    if (VAR4->VAR11)
    {
        VAR6 = FUN3(VAR4->VAR12, VAR4->VAR13, NULL, &VAR8);
    }
    else
    {
        VAR6 = FUN4(VAR4->VAR12, VAR4->VAR13, VAR4->VAR14->VAR15.VAR16.VAR17, &VAR8);
    }
    if (VAR6 == NULL)
    {
        FUN5(VAR8);
        FUN6(VAR2);
        return;
    }
    VAR10 = FUN7("", VAR4->VAR11 ? "" : "", VAR2->VAR18);
    FUN8(FUN9(VAR6), VAR10);
    FUN10(VAR10);
    FUN11(FUN12(VAR4->VAR12));
    VAR4->VAR12 = FUN9(VAR6);
    FUN13(VAR6, VAR19, VAR2, NULL);
}