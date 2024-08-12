static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR2->VAR5);
    VAR6 *VAR7 = FUN3(VAR4);
    VAR8 *VAR9 = FUN4(VAR7, VAR10);
    VAR8 *VAR11 = VAR9;
    while (VAR11)
    {
        VAR12 *VAR13 = VAR11->VAR14;
        if (FUN5(VAR13) == VAR15)
        {
            FUN6(VAR13, VAR16);
        }
        VAR11 = VAR11->VAR17;
    }
    FUN7(VAR9);
    FUN8(FUN9(VAR7), FUN10(VAR2->VAR5), VAR2->VAR18, VAR2->VAR19);
    FUN11(VAR16);
    FUN12(VAR4, FUN10(VAR2->VAR5), VAR2->VAR18, VAR2->VAR19);
}