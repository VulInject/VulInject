static int FUN1(VAR1 **VAR2, int *VAR3, VAR4 *VAR5)
{
    VAR6 *VAR7 = VAR5->VAR7.VAR8;
    VAR1 *VAR9 = *VAR2;
    int VAR10 = *VAR3;
    VAR1 *VAR11 = NULL;
    int VAR12 = VAR10;
    int VAR13 = 0;
    int VAR14;
    if (VAR12 >= 10000000)
        return -1;
    switch (VAR7[0].VAR15.VAR16)
    {
    case VAR17:
        return VAR7[0].VAR15.VAR18.VAR19;
    case VAR20:
        do
        {
            VAR14 = VAR12 *= 3;
            VAR11 = FUN2(VAR11, VAR12 + VAR21);
            VAR13 = FUN3(VAR11, &VAR14, VAR9, &VAR10);
        } while (VAR13 == VAR22 && VAR12 < 10000000);
        if (VAR13)
            goto VAR23;
        VAR12 -= VAR14;
        break;
    case VAR24:
    {
        z_stream VAR25 = {0};
        if (FUN4(&VAR25) != VAR26)
            return -1;
        VAR25.VAR27 = VAR9;
        VAR25.VAR28 = VAR10;
        do
        {
            VAR12 *= 3;
            VAR11 = FUN2(VAR11, VAR12);
            VAR25.VAR29 = VAR12 - VAR25.VAR30;
            VAR25.VAR31 = VAR11 + VAR25.VAR30;
            VAR13 = FUN5(&VAR25, VAR32);
        } while (VAR13 == VAR26 && VAR12 < 10000000);
        VAR12 = VAR25.VAR30;
        FUN6(&VAR25);
        if (VAR13 != VAR33)
            goto VAR23;
        break;
    }
    case VAR34:
    {
        bz_stream VAR35 = {0};
        if (FUN7(&VAR35, 0, 0) != VAR36)
            return -1;
        VAR35.VAR27 = VAR9;
        VAR35.VAR28 = VAR10;
        do
        {
            VAR12 *= 3;
            VAR11 = FUN2(VAR11, VAR12);
            VAR35.VAR29 = VAR12 - VAR35.VAR37;
            VAR35.VAR31 = VAR11 + VAR35.VAR37;
            VAR13 = FUN8(&VAR35);
        } while (VAR13 == VAR36 && VAR12 < 10000000);
        VAR12 = VAR35.VAR37;
        FUN9(&VAR35);
        if (VAR13 != VAR38)
            goto VAR23;
        break;
    }
    default:
        return -1;
    }
    *VAR2 = VAR11;
    *VAR3 = VAR12;
    return 0;
VAR23:
    FUN10(VAR11);
    return -1;
}