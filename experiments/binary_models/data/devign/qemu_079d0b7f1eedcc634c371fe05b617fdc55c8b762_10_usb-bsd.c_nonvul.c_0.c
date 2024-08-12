static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = (VAR5 *)VAR2;
    int VAR7, VAR8, VAR9;
    int VAR10 = 1, VAR11 = 0, VAR12 = 50;
    sigset_t VAR13, VAR14;
    uint8_t VAR15 = VAR4->VAR16->VAR17;
    FUN2(&VAR13);
    FUN3(&VAR13, VAR18);
    FUN4(VAR19, &VAR13, &VAR14);
    if (VAR4->VAR20 == VAR21)
    {
        VAR15 |= 0x80;
        VAR9 = VAR22;
        VAR11 = 1;
    }
    else
    {
        VAR9 = VAR23;
    }
    VAR8 = FUN5(VAR6, VAR15, VAR9);
    if (VAR8 < 0)
    {
        FUN4(VAR24, &VAR14, NULL);
        return VAR25;
    }
    if (FUN6(VAR8, VAR26, &VAR12) < 0)
    {
        FUN7("", strerror(VAR27));
    }
    if (VAR11)
    {
        if (FUN6(VAR8, VAR28, &VAR10) < 0)
        {
            FUN7("", strerror(VAR27));
            FUN4(VAR24, &VAR14, NULL);
        }
    }
    if (VAR4->VAR20 == VAR21)
        VAR7 = FUN8(VAR8, VAR4->VAR29.VAR29, VAR4->VAR29.VAR30);
    else
        VAR7 = FUN9(VAR8, VAR4->VAR29.VAR29, VAR4->VAR29.VAR30);
    FUN4(VAR24, &VAR14, NULL);
    if (VAR7 < 0)
    {
        FUN7("", VAR20 == VAR21 ? "" : "", strerror(VAR27));
        switch (VAR27)
        {
        case VAR31:
        case VAR32:
            return VAR33;
        default:
            return VAR34;
        }
    }
    else
    {
        return VAR7;
    }
}