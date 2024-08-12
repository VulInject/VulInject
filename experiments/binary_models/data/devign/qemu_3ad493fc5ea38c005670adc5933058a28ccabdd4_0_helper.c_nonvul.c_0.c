int FUN1(VAR1 *VAR2, target_ulong VAR3, int VAR4, int VAR5, int VAR6)
{
    uint32_t VAR7;
    target_ulong VAR8;
    int VAR9;
    int VAR10, VAR11;
    VAR11 = VAR5 == VAR12;
    VAR10 = FUN2(VAR2, VAR3, VAR4, VAR11, &VAR7, &VAR9, &VAR8);
    if (VAR10 == 0)
    {
        VAR7 &= ~(VAR13)0x3ff;
        VAR3 &= ~(VAR13)0x3ff;
        FUN3(VAR2, VAR3, VAR7, VAR9, VAR5, VAR8);
        return 0;
    }
    if (VAR4 == 2)
    {
        VAR2->VAR14.VAR15 = VAR10;
        VAR2->VAR14.VAR16 = VAR3;
        VAR2->VAR17 = VAR18;
    }
    else
    {
        VAR2->VAR14.VAR19 = VAR10;
        if (VAR4 == 1 && FUN4(VAR2, VAR20))
            VAR2->VAR14.VAR19 |= (1 << 11);
        VAR2->VAR14.VAR21 = VAR3;
        VAR2->VAR17 = VAR22;
    }
    return 1;
}