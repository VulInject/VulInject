static void FUN1(VAR1 *VAR2, TCGType VAR3, TCGReg VAR4, tcg_target_long VAR5)
{
    AArch64Insn VAR6;
    int VAR7, VAR8, VAR9;
    tcg_target_long VAR10 = VAR5;
    tcg_target_long VAR11 = ~VAR5;
    tcg_target_long VAR12;
    if (VAR3 == VAR13 || (VAR5 & ~0xffffffffull) == 0)
    {
        VAR10 = (VAR14)VAR5;
        VAR5 = (VAR15)VAR5;
        VAR11 = (VAR15)VAR11;
        VAR3 = VAR13;
    }
    for (VAR7 = VAR8 = VAR12 = 0; VAR7 < 64; VAR7 += 16)
    {
        tcg_target_long VAR16 = 0xffffull << VAR7;
        if ((VAR5 & VAR16) == 0)
        {
            VAR8 -= 1;
        }
        if ((VAR11 & VAR16) == 0)
        {
            VAR8 += 1;
            VAR12 |= VAR16;
        }
    }
    VAR6 = VAR17;
    if (VAR8 > 0)
    {
        VAR5 = VAR11;
        VAR6 = VAR18;
    }
    VAR9 = FUN2(VAR5) & (63 & -16);
    FUN3(VAR2, VAR6, VAR3, VAR4, VAR5 >> VAR9, VAR9);
    if (VAR8 > 0)
    {
        VAR5 = ~VAR5;
        VAR5 ^= VAR12;
    }
    VAR5 &= ~(0xffffUL << VAR9);
    while (VAR5)
    {
        VAR9 = FUN2(VAR5) & (63 & -16);
        FUN4(VAR2, 3405, VAR19, VAR3, VAR4, VAR5 >> VAR9, VAR9);
        VAR5 &= ~(0xffffUL << VAR9);
    }
}