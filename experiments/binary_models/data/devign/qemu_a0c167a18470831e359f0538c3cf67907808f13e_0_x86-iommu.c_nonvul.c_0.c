static void FUN1(VAR1 *VAR2, VAR3 **VAR4)
{
    VAR5 *VAR6 = FUN2(VAR2);
    VAR7 *VAR8 = FUN3(VAR2);
    VAR9 *VAR10 = FUN4(FUN5());
    VAR11 *VAR12 = FUN6(VAR10);
    VAR13 *VAR14 = FUN7(FUN8(FUN9(VAR10), VAR15));
    FUN10(&VAR6->VAR16);
    if (!VAR14 || !VAR14->VAR17)
    {
        FUN11(VAR4, "", VAR12->VAR18);
        return;
    }
    if (VAR8->VAR19)
    {
        VAR8->FUN12(VAR2, VAR4);
    }
    FUN13(FUN2(VAR2));
}