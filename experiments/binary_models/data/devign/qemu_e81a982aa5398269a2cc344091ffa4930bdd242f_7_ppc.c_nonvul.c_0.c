static void FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, void (*VAR7)(void *), void (*VAR8)(VAR1 *), uint32_t VAR9, uint32_t VAR10)
{
    VAR11 *VAR12 = &VAR2->VAR12;
    VAR13 *VAR14 = VAR12->VAR14;
    uint64_t VAR15, VAR16;
    FUN2("" VAR17 "" VAR17 "", VAR18, VAR9, VAR10);
    if (FUN3())
    {
        return;
    }
    if ((VAR10 < 3) || ((VAR14->VAR19 & VAR20) && (VAR10 & 0x80000000)) || ((VAR14->VAR19 & VAR21) && (VAR10 & 0x80000000) && !(VAR9 & 0x80000000)))
    {
        (*VAR7)(VAR2);
        return;
    }
    if (!(VAR10 & 0x80000000) && (VAR14->VAR19 & VAR20))
    {
        (*VAR8)(VAR2);
    }
    VAR15 = FUN4(VAR22);
    VAR16 = VAR15 + FUN5(VAR10, FUN6(), VAR14->VAR23);
    *VAR4 = VAR16;
    FUN7(VAR6, VAR16);
}