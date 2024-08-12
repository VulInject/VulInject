static void FUN1(VAR1 *VAR2, TCGCond VAR3, TCGReg VAR4, int32_t VAR5, int VAR6, VAR7 *VAR8)
{
    if (VAR5 == 0 && !FUN2(VAR3))
    {
        int VAR9;
        if (VAR8->VAR10)
        {
            VAR9 = FUN3(FUN4(VAR2, VAR8->VAR11.VAR12));
        }
        else
        {
            VAR9 = *VAR2->VAR13 & FUN3(-1);
            FUN5(VAR2, VAR2->VAR13, VAR14, VAR8, 0);
        }
        FUN6(VAR2, FUN7(0) | FUN8(3) | VAR15 | FUN9(VAR4) | FUN10(VAR16[VAR3]) | VAR9);
    }
    else
    {
        FUN11(VAR2, VAR4, VAR5, VAR6);
        FUN12(VAR2, VAR17[VAR3], VAR18 | VAR19, VAR8);
    }
    FUN13(VAR2);
}