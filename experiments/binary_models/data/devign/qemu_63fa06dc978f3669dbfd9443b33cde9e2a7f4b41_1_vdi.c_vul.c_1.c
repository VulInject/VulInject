static int FUN1(const char *VAR1, VAR2 *VAR3, VAR4 **VAR5)
{
    int VAR6;
    int VAR7 = 0;
    uint64_t VAR8 = 0;
    uint32_t VAR9;
    size_t VAR10 = VAR11;
    uint32_t VAR12 = VAR13;
    VdiHeader VAR14;
    size_t VAR15;
    size_t VAR16;
    FUN2("");
    while (VAR3 && VAR3->VAR17)
    {
        if (!strcmp(VAR3->VAR17, VAR18))
        {
            VAR8 = VAR3->VAR19.VAR20;
        }
        else if (!strcmp(VAR3->VAR17, VAR21))
        {
            if (VAR3->VAR19.VAR20)
            {
                VAR10 = VAR3->VAR19.VAR20;
            }
        }
        else if (!strcmp(VAR3->VAR17, VAR22))
        {
            if (VAR3->VAR19.VAR20)
            {
                VAR12 = VAR23;
            }
        }
        VAR3++;
    }
    VAR6 = FUN3(VAR1, VAR24 | VAR25 | VAR26 | VAR27 | VAR28, 0644);
    if (VAR6 < 0)
    {
        return -VAR29;
    }
    VAR9 = (VAR8 + VAR10 - 1) / VAR10;
    VAR16 = VAR9 * sizeof(VAR30);
    VAR16 = ((VAR16 + VAR31 - 1) & ~(VAR31 - 1));
    memset(&VAR14, 0, sizeof(VAR14));
    FUN4(VAR14.VAR32, sizeof(VAR14.VAR32), VAR33);
    VAR14.VAR34 = VAR35;
    VAR14.VAR36 = VAR37;
    VAR14.VAR38 = 0x180;
    VAR14.VAR12 = VAR12;
    VAR14.VAR39 = 0x200;
    VAR14.VAR40 = 0x200 + VAR16;
    VAR14.VAR41 = VAR31;
    VAR14.VAR42 = VAR8;
    VAR14.VAR10 = VAR10;
    VAR14.VAR43 = VAR9;
    if (VAR12 == VAR23)
    {
        VAR14.VAR44 = VAR9;
    }
    FUN5(VAR14.VAR45);
    FUN5(VAR14.VAR46);
    FUN6(&VAR14);
    FUN7(&VAR14);
    if (write(VAR6, &VAR14, sizeof(VAR14)) < 0)
    {
        VAR7 = -VAR29;
    }
    if (VAR16 > 0)
    {
        VAR30 *VAR47 = FUN8(VAR16);
        for (VAR15 = 0; VAR15 < VAR9; VAR15++)
        {
            if (VAR12 == VAR23)
            {
                VAR47[VAR15] = VAR15;
            }
            else
            {
                VAR47[VAR15] = VAR48;
            }
        }
        if (write(VAR6, VAR47, VAR16) < 0)
        {
            VAR7 = -VAR29;
        }
        FUN9(VAR47);
    }
    if (VAR12 == VAR23)
    {
        if (FUN10(VAR6, sizeof(VAR14) + VAR16 + VAR9 * VAR10))
        {
            VAR7 = -VAR29;
        }
    }
    if (close(VAR6) < 0)
    {
        VAR7 = -VAR29;
    }
    return VAR7;
}