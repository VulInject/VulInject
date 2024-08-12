static void FUN1(VAR1 *VAR2, TCGType VAR3, TCGReg VAR4, tcg_target_long VAR5)
{
    tcg_target_long VAR6;
    if (VAR5 == 0)
    {
        FUN2(VAR2, VAR7, VAR4, VAR4);
        return;
    }
    if (VAR5 == (VAR8)VAR5 || VAR3 == VAR9)
    {
        FUN3(VAR2, VAR10 + FUN4(VAR4), 0, VAR4, 0);
        FUN5(VAR2, VAR5);
        return;
    }
    if (VAR5 == (VAR11)VAR5)
    {
        FUN6(VAR2, VAR12 + VAR13, 0, VAR4);
        FUN5(VAR2, VAR5);
        return;
    }
    VAR6 = VAR5 - ((VAR14)VAR2->VAR15 + 7);
    if (VAR6 == (VAR11)VAR6)
    {
        FUN3(VAR2, VAR16 | VAR13, VAR4, 0, 0);
        FUN7(VAR2, (FUN4(VAR4) << 3) | 5);
        FUN5(VAR2, VAR6);
        return;
    }
    FUN3(VAR2, VAR10 + VAR13 + FUN4(VAR4), 0, VAR4, 0);
    FUN8(VAR2, VAR5);
}