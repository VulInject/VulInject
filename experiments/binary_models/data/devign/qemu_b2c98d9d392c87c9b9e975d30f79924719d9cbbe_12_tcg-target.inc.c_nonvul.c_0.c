static void FUN1(VAR1 *VAR2, TCGReg VAR3, tcg_target_ulong VAR4)
{
    static const S390Opcode VAR5[4] = {VAR6, VAR7, VAR8, VAR9};
    static const S390Opcode VAR10[2] = {VAR11, VAR12};
    int VAR13;
    if (VAR4 == 0)
    {
        return;
    }
    if (VAR14 & VAR15)
    {
        for (VAR13 = 0; VAR13 < 4; VAR13++)
        {
            tcg_target_ulong VAR16 = (0xffffull << VAR13 * 16);
            if ((VAR4 & VAR16) != 0 && (VAR4 & ~VAR16) == 0)
            {
                FUN2(VAR2, VAR5[VAR13], VAR3, VAR4 >> VAR13 * 16);
                return;
            }
        }
        for (VAR13 = 0; VAR13 < 2; VAR13++)
        {
            tcg_target_ulong VAR16 = (0xffffffffull << VAR13 * 32);
            if ((VAR4 & VAR16) != 0 && (VAR4 & ~VAR16) == 0)
            {
                FUN3(VAR2, VAR10[VAR13], VAR3, VAR4 >> VAR13 * 32);
                return;
            }
        }
        FUN1(VAR2, VAR3, VAR4 & 0x00000000ffffffffull);
        FUN1(VAR2, VAR3, VAR4 & 0xffffffff00000000ull);
    }
    else
    {
        for (VAR13 = 0; VAR13 < 4; VAR13++)
        {
            tcg_target_ulong VAR16 = (0xffffull << VAR13 * 16);
            if ((VAR4 & VAR16) != 0)
            {
                FUN2(VAR2, VAR5[VAR13], VAR3, VAR4 >> VAR13 * 16);
            }
        }
    }
}