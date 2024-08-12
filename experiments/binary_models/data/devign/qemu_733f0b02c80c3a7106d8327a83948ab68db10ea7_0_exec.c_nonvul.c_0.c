void FUN1(target_phys_addr_t VAR1, uint32_t VAR2)
{
    int VAR3;
    VAR4 *VAR5;
    unsigned long VAR6;
    VAR7 *VAR8;
    VAR8 = FUN2(VAR1 >> VAR9);
    if (!VAR8)
    {
        VAR6 = VAR10;
    }
    else
    {
        VAR6 = VAR8->VAR11;
    }
    if ((VAR6 & ~VAR12) != VAR13)
    {
        VAR3 = (VAR6 >> VAR14) & (VAR15 - 1);
        if (VAR8)
            VAR1 = (VAR1 & ~VAR12) + VAR8->VAR16;
        VAR17[VAR3][1](VAR18[VAR3], VAR1, VAR2);
    }
    else
    {
        unsigned long VAR19;
        VAR19 = (VAR6 & VAR12) + (VAR1 & ~VAR12);
        VAR5 = FUN3(VAR19);
        FUN4(VAR5, VAR2);
        if (!FUN5(VAR19))
        {
            FUN6(VAR19, VAR19 + 2, 0);
            FUN7(VAR19, (0xff & ~VAR20));
        }
    }
}