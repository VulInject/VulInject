static int FUN1(VAR1 *VAR2, VAR3 **VAR4, ram_addr_t VAR5, VAR6 *VAR7, ram_addr_t VAR8, bool VAR9)
{
    int VAR10 = 0, VAR11;
    VAR3 *VAR12;
    if (!FUN2(VAR13.VAR14, VAR5, VAR2->VAR15))
    {
        VAR2->VAR16++;
        if (!VAR9)
        {
            if (FUN3(VAR13.VAR14, VAR5, *VAR4, VAR2->VAR15) == -1)
            {
                return -1;
            }
            else
            {
                *VAR4 = FUN4(VAR13.VAR14, VAR5);
            }
        }
        return -1;
    }
    VAR12 = FUN4(VAR13.VAR14, VAR5);
    memcpy(VAR13.VAR17, *VAR4, VAR18);
    VAR10 = FUN5(VAR12, VAR13.VAR17, VAR18, VAR13.VAR19, VAR18);
    if (VAR10 == 0)
    {
        FUN6();
        return 0;
    }
    else if (VAR10 == -1)
    {
        FUN7();
        VAR2->VAR20++;
        if (!VAR9)
        {
            memcpy(VAR12, *VAR4, VAR18);
            *VAR4 = VAR12;
        }
        return -1;
    }
    if (!VAR9)
    {
        memcpy(VAR12, VAR13.VAR17, VAR18);
    }
    VAR11 = FUN8(VAR2, VAR7, VAR8 | VAR21);
    FUN9(VAR2->VAR22, VAR23);
    FUN10(VAR2->VAR22, VAR10);
    FUN11(VAR2->VAR22, VAR13.VAR19, VAR10);
    VAR11 += VAR10 + 1 + 2;
    VAR2->VAR24++;
    VAR2->VAR25 += VAR11;
    VAR2->VAR26 += VAR11;
    return 1;
}