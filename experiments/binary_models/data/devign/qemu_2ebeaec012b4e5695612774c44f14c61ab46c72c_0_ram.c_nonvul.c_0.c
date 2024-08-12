static int FUN1(VAR1 *VAR2, VAR3 *VAR4, bool VAR5, VAR6 *VAR7)
{
    int VAR8 = -1;
    uint64_t VAR9;
    ram_addr_t VAR10;
    VAR11 *VAR12;
    int VAR13;
    bool VAR14 = true;
    VAR15 *VAR16 = VAR4->VAR16;
    ram_addr_t VAR17 = VAR4->VAR17;
    VAR12 = VAR16->VAR18 + VAR17;
    VAR9 = 0;
    VAR13 = FUN2(VAR2, VAR16->VAR17, VAR17, VAR19, &VAR9);
    if (VAR9)
    {
        *VAR7 += VAR9;
        VAR8 = 1;
    }
    FUN3();
    VAR10 = VAR16->VAR17 + VAR17;
    if (VAR16 == VAR20)
    {
        VAR17 |= VAR21;
    }
    if (VAR13 != VAR22)
    {
        if (VAR13 != VAR23)
        {
            if (VAR9 > 0)
            {
                VAR24.VAR25++;
            }
            else if (VAR9 == 0)
            {
                VAR24.VAR26++;
            }
        }
    }
    else
    {
        VAR8 = FUN4(VAR2, VAR16, VAR17, VAR12, VAR7);
        if (VAR8 > 0)
        {
            FUN5(VAR10);
        }
        else if (!VAR27 && !FUN6(FUN7()) && FUN8())
        {
            VAR8 = FUN9(VAR2, &VAR12, VAR10, VAR16, VAR17, VAR5, VAR7);
            if (!VAR5)
            {
                VAR14 = false;
            }
        }
    }
    if (VAR8 == -1)
    {
        *VAR7 += FUN10(VAR2, VAR16, VAR17 | VAR28);
        if (VAR14)
        {
            FUN11(VAR2, VAR12, VAR19);
        }
        else
        {
            FUN12(VAR2, VAR12, VAR19);
        }
        *VAR7 += VAR19;
        VAR8 = 1;
        VAR24.VAR25++;
    }
    FUN13();
    return VAR8;
}