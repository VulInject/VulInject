static void FUN1(VAR1 *VAR2, TCGType VAR3, TCGReg VAR4, TCGReg VAR5, tcg_target_long VAR6)
{
    VAR7 *VAR8 = VAR2->VAR9;
    if (VAR3 == VAR10)
    {
        FUN2(VAR2, VAR11);
        FUN3(VAR2, VAR4);
        FUN3(VAR2, VAR5);
        FUN4(VAR2, VAR6);
    }
    else
    {
        assert(VAR3 == VAR12);
        FUN2(VAR2, VAR13);
        FUN3(VAR2, VAR4);
        FUN3(VAR2, VAR5);
        assert(VAR6 == (VAR14)VAR6);
        FUN4(VAR2, VAR6);
        FUN5();
    }
    VAR8[1] = VAR2->VAR9 - VAR8;
}