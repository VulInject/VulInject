void FUN1(VAR1 *VAR2, target_ulong VAR3)
{
    uint32_t VAR4 = VAR2->VAR5;
    target_ulong VAR6 = VAR2->VAR7;
    if (VAR2->VAR8 & VAR9)
    {
        bool VAR10 = FUN2(VAR4, VAR11, 2) == 0x3;
        uint32_t VAR12 = (1 << VAR13) & VAR3;
        VAR12 |= (VAR12 >> 1) & VAR3;
        VAR12 |= (VAR12 >> 1) & VAR3;
        VAR3 = (VAR3 & ~(7 << VAR14)) | VAR12;
        if (VAR10 && FUN2(VAR3, VAR11, 2) == 0x3)
        {
            VAR4 &= ~(3 << VAR11);
        }
        VAR4 &= ~(((1 << VAR15) | (1 << VAR16)) & VAR3);
    }
    VAR2->VAR7 = (VAR6 & ~VAR4) | (VAR3 & VAR4);
    if ((VAR2->VAR7 ^ VAR6) & (VAR6 & (7 << VAR14)))
    {
        FUN3(FUN4(FUN5(VAR2)));
    }
    if (VAR2->VAR17 & (1 << VAR18))
    {
        FUN6(VAR2, VAR2, VAR2->VAR19);
    }
    else
    {
        FUN7(VAR2);
    }
}