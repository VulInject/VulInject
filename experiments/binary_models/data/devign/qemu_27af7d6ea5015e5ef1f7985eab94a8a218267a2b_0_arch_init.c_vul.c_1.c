static int FUN1(VAR1 *VAR2, VAR3 **VAR4, ram_addr_t VAR5, VAR6 *VAR7, ram_addr_t VAR8, int VAR9, bool VAR10)
{
    int VAR11 = 0, VAR12 = -1;
    VAR3 *VAR13;
    if (!FUN2(VAR14.VAR15, VAR5))
    {
        VAR16.VAR17++;
        if (!VAR10)
        {
            if (FUN3(VAR14.VAR15, VAR5, *VAR4) == -1)
            {
                return -1;
            }
            else
            {
                *VAR4 = FUN4(VAR14.VAR15, VAR5);
            }
        }
        return -1;
    }
    VAR13 = FUN4(VAR14.VAR15, VAR5);
    memcpy(VAR14.VAR18, *VAR4, VAR19);
    VAR11 = FUN5(VAR13, VAR14.VAR18, VAR19, VAR14.VAR20, VAR19);
    if (VAR11 == 0)
    {
        FUN6("");
        return 0;
    }
    else if (VAR11 == -1)
    {
        FUN6("");
        VAR16.VAR21++;
        if (!VAR10)
        {
            memcpy(VAR13, *VAR4, VAR19);
            *VAR4 = VAR13;
        }
        return -1;
    }
    if (!VAR10)
    {
        memcpy(VAR13, VAR14.VAR18, VAR19);
    }
    VAR12 = FUN7(VAR2, VAR7, VAR8, VAR9, VAR22);
    FUN8(VAR2, VAR23);
    FUN9(VAR2, VAR11);
    FUN10(VAR2, VAR14.VAR20, VAR11);
    VAR12 += VAR11 + 1 + 2;
    VAR16.VAR24++;
    VAR16.VAR25 += VAR12;
    return VAR12;
}