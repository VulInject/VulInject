static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, int *VAR6, char *VAR7, VAR8 *VAR9)
{
    VAR10 *VAR11 = VAR2->VAR12;
    VAR13 *VAR14 = VAR11->VAR12;
    VAR15 *VAR16 = VAR11->VAR17;
    VAR18 *VAR19 = &VAR14->VAR20;
    int VAR21, VAR22;
    if (VAR14->VAR23)
    {
        if (VAR14->VAR24)
        {
            VAR21 = FUN2(VAR2, VAR19, &VAR14->VAR25);
            if (VAR21 < 0)
                goto VAR26;
            VAR14->VAR24 = 0;
        }
        memset(&VAR14->VAR27, 0, sizeof(VAR14->VAR27));
        VAR14->VAR27.VAR28.VAR29 = VAR30;
        VAR22 = 0;
        if (VAR4->VAR31 == 0 && VAR16->VAR27 & VAR32)
        {
            VAR14->VAR27.VAR33[VAR22].VAR34 = VAR35;
            VAR14->VAR27.VAR33[VAR22].VAR33.VAR36 = VAR14->VAR37;
            ++VAR22;
        }
        if (VAR16->VAR27 & VAR38)
        {
            if (VAR4->VAR6 == VAR39)
            {
                VAR14->VAR27.VAR33[VAR22].VAR34 = VAR40;
                VAR14->VAR27.VAR33[VAR22].VAR33.VAR41 = VAR14->VAR41;
                ++VAR22;
            }
            VAR14->VAR27.VAR33[VAR22].VAR34 = VAR42;
            VAR14->VAR27.VAR33[VAR22].VAR33.VAR43 = VAR14->VAR43;
            ++VAR22;
        }
        if (VAR16->VAR27 & VAR44 && VAR4->VAR6 == VAR45)
        {
            VAR14->VAR27.VAR33[VAR22].VAR34 = VAR46;
            VAR14->VAR27.VAR33[VAR22].VAR33.VAR47 = VAR14->VAR47;
            ++VAR22;
        }
        VAR14->VAR27.VAR48 = VAR22;
        FUN3(VAR14->VAR27.VAR48 > 0);
        VAR21 = FUN2(VAR2, VAR19, &VAR14->VAR27);
        if (VAR21 < 0)
            goto VAR26;
        VAR14->VAR23 = 0;
        VAR21 = FUN4(VAR2, VAR7, VAR9, VAR19);
        if (VAR21 < 0)
            goto VAR26;
        FUN5(&VAR14->VAR49, VAR19);
        *VAR6 = VAR50;
        return 0;
    }
    else if (VAR14->VAR51)
    {
        *VAR9 = 0;
        *VAR6 = VAR52;
        VAR14->VAR51 = 0;
        return 0;
    }
    else
    {
        return VAR53;
    }
VAR26:
    FUN5(&VAR14->VAR49, VAR19);
    return VAR21;
}