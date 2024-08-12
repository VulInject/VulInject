static void FUN1(VAR1 *VAR2, TCGType VAR3, TCGReg VAR4, tcg_target_long VAR5)
{
    VAR6 *VAR7 = VAR2->VAR8;
    uint32_t VAR9 = VAR5;
    if (VAR3 == VAR10 || VAR5 == VAR9)
    {
        FUN2(VAR2, VAR11);
        FUN3(VAR2, VAR4);
        FUN4(VAR2, VAR9);
    }
    else
    {
        FUN5(VAR3 == VAR12);
        FUN2(VAR2, VAR13);
        FUN3(VAR2, VAR4);
        FUN6(VAR2, VAR5);
        FUN7();
    }
    VAR7[1] = VAR2->VAR8 - VAR7;
}