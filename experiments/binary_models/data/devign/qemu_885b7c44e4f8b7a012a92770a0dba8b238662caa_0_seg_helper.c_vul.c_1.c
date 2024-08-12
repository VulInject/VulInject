static void FUN1(VAR1 *VAR2, int VAR3, int VAR4, int VAR5, target_ulong VAR6)
{
    VAR7 *VAR8;
    target_ulong VAR9;
    int VAR10, VAR11, VAR12;
    uint32_t VAR13;
    VAR8 = &VAR2->VAR14;
    if (VAR2->VAR15 & VAR16)
    {
        VAR12 = 4;
    }
    else
    {
        VAR12 = 3;
    }
    VAR9 = VAR8->VAR17 + (VAR3 << VAR12);
    VAR13 = FUN2(VAR2, VAR9 + 4);
    VAR10 = (VAR13 >> VAR18) & 3;
    VAR11 = VAR2->VAR15 & VAR19;
    if (VAR4 && VAR10 < VAR11)
    {
        FUN3(VAR2, VAR20, (VAR3 << VAR12) + 2);
    }
    if (VAR4 || VAR3 == VAR21)
    {
        VAR2->VAR22 = VAR6;
    }
}