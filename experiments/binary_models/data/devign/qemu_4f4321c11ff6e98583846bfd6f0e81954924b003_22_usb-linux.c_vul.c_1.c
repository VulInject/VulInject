static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = (VAR5 *)VAR2;
    int VAR7, VAR8, VAR9;
    int VAR10 = 1, VAR11 = 0, VAR12 = 50;
    sigset_t VAR13, VAR14;
    uint8_t VAR15 = VAR4->VAR15;
    FUN2(&VAR13);
    FUN3(&VAR13, VAR16);
    FUN4(VAR17, &VAR13, &VAR14);
    if (VAR4->VAR18 == VAR19)
    {
        VAR15 |= 0x80;
        VAR9 = VAR20;
        VAR11 = 1;
    }
    else
    {
        VAR9 = VAR21;
    }
    VAR8 = FUN5(VAR6, VAR15, VAR9);
    if (VAR8 < 0)
    {
        FUN4(VAR22, &VAR14, NULL);
        return VAR23;
    }
    if (FUN6(VAR8, VAR24, &VAR12) < 0)
    {
        FUN7("", strerror(VAR25));
    }
    if (VAR11)
    {
        if (FUN6(VAR8, VAR26, &VAR10) < 0)
        {
            FUN7("", strerror(VAR25));
            FUN4(VAR22, &VAR14, NULL);
        }
    }
    if (VAR4->VAR18 == VAR19)
        VAR7 = read(VAR8, VAR4->VAR27, VAR4->VAR28);
    else
        VAR7 = write(VAR8, VAR4->VAR27, VAR4->VAR28);
    FUN4(VAR22, &VAR14, NULL);
    if (VAR7 < 0)
    {
        FUN7("", VAR18 == VAR19 ? "" : "", strerror(VAR25));
        switch (VAR25)
        {
        case VAR29:
        case VAR30:
            return VAR31;
        default:
            return VAR32;
        }
    }
    else
    {
        return VAR7;
    }
}