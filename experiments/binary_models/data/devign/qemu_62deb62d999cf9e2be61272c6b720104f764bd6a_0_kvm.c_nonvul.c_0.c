static void FUN1(VAR1 *VAR2, run_on_cpu_data VAR3)
{
    VAR4 *VAR5 = FUN2(VAR2);
    VAR6 *VAR7 = VAR3.VAR8;
    uint8_t VAR9 = VAR7->VAR10 & VAR11;
    hwaddr VAR12 = VAR7->VAR10 & ~VAR11;
    hwaddr VAR13 = 1UL << (VAR9 ? VAR9 : 10);
    if (!FUN3(VAR14) && !FUN3(VAR15))
    {
        FUN4(VAR7, VAR16);
        return;
    }
    if (FUN5(VAR5) != VAR17)
    {
        FUN4(VAR7, VAR18);
        return;
    }
    if (VAR12 & (VAR13 - 1))
    {
        FUN4(VAR7, VAR19);
        return;
    }
    if (!FUN3(VAR15) && VAR9 != 0)
    {
        FUN4(VAR7, VAR19);
        return;
    }
    if (FUN3(VAR15) && VAR9 != 0 && VAR9 != 10 && VAR9 != 11 && VAR9 != 12)
    {
        FUN4(VAR7, VAR19);
        return;
    }
    FUN6(VAR2);
    if (FUN7(VAR5, VAR12, VAR13))
    {
        FUN4(VAR7, VAR19);
        return;
    }
    VAR7->VAR20 = VAR21;
}