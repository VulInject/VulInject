static void FUN1(VAR1 *VAR2, VAR3 *VAR4, uint32_t VAR5, uint32_t VAR6, target_ulong VAR7, uint32_t VAR8, target_ulong VAR9)
{
    VAR10 *VAR11 = VAR4->VAR11;
    hwaddr VAR12, VAR13, VAR14;
    int VAR15;
    void *VAR16;
    if ((VAR6 != 3) || (VAR8 != 2))
    {
        FUN2(VAR9, 0, VAR17);
        return;
    }
    if (!VAR11)
    {
        FUN2(VAR9, 0, VAR18);
        return;
    }
    VAR12 = FUN3(VAR7, 0);
    VAR13 = FUN3(VAR7, 1);
    VAR14 = FUN3(VAR7, 2);
    if (((VAR12 + VAR14) < VAR12) || ((VAR12 + VAR14) > VAR11->VAR19))
    {
        FUN2(VAR9, 0, VAR17);
        return;
    }
    VAR16 = FUN4(VAR13, &VAR14, 0);
    if (VAR11->VAR20)
    {
        VAR15 = FUN5(VAR11->VAR20, VAR12, VAR16, VAR14);
    }
    else
    {
        assert(VAR11->VAR21);
        memcpy(VAR11->VAR21 + VAR12, VAR16, VAR14);
        VAR15 = VAR14;
    }
    FUN6(VAR16, VAR14, 0, VAR14);
    FUN2(VAR9, 0, (VAR15 < VAR14) ? VAR18 : VAR22);
    FUN2(VAR9, 1, (VAR15 < 0) ? 0 : VAR15);
}