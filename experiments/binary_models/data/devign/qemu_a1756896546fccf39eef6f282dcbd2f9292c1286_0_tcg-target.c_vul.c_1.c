static void FUN1(VAR1 *VAR2, TCGType VAR3, TCGReg VAR4, uint64_t VAR5)
{
    static const S390Opcode VAR6[4] = {VAR7, VAR8, VAR9, VAR10};
    static const S390Opcode VAR11[2] = {VAR12, VAR13};
    uint64_t VAR14 = (VAR3 == VAR15 ? 0xffffffffull : -1ull);
    int VAR16;
    if ((VAR5 & VAR14) == 0xffffffff)
    {
        FUN2(VAR2, VAR4, VAR4);
        return;
    }
    if (VAR17 & VAR18)
    {
        if ((VAR5 & VAR14) == 0xff)
        {
            FUN3(VAR2, VAR19, VAR4, VAR4);
            return;
        }
        if ((VAR5 & VAR14) == 0xffff)
        {
            FUN4(VAR2, VAR19, VAR4, VAR4);
            return;
        }
    }
    for (VAR16 = 0; VAR16 < 4; VAR16++)
    {
        tcg_target_ulong VAR20 = ~(0xffffull << VAR16 * 16);
        if (((VAR5 | ~VAR14) & VAR20) == VAR20)
        {
            FUN5(VAR2, VAR6[VAR16], VAR4, VAR5 >> VAR16 * 16);
            return;
        }
    }
    if (VAR17 & VAR18)
    {
        for (VAR16 = 0; VAR16 < 2; VAR16++)
        {
            tcg_target_ulong VAR20 = ~(0xffffffffull << VAR16 * 32);
            if (((VAR5 | ~VAR14) & VAR20) == VAR20)
            {
                FUN6(VAR2, VAR11[VAR16], VAR4, VAR5 >> VAR16 * 32);
                return;
            }
        }
    }
    if ((VAR17 & VAR21) && FUN7(VAR5))
    {
        int VAR22, VAR23;
        if ((VAR5 & 0x8000000000000001ull) == 0x8000000000000001ull)
        {
            VAR22 = 63 - FUN8(~VAR5);
            VAR23 = FUN9(~VAR5) + 1;
        }
        else
        {
            VAR22 = FUN9(VAR5);
            VAR23 = 63 - FUN8(VAR5);
        }
        FUN10(VAR2, VAR4, VAR4, VAR22, VAR23, 0, 1);
        return;
    }
    FUN11(VAR2, VAR3, VAR24, VAR5);
    if (VAR3 == VAR15)
    {
        FUN12(VAR2, VAR25, VAR26, VAR4, VAR24);
    }
    else
    {
        FUN12(VAR2, VAR27, VAR28, VAR4, VAR24);
    }
}