static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, void *VAR6)
{
    VAR7 *VAR8 = VAR2->VAR9;
    VAR10 *VAR11 = VAR6;
    VAR12 *VAR13;
    int VAR14, VAR15;
    x264_picture_t VAR16;
    FUN2(&VAR8->VAR17);
    VAR8->VAR17.VAR18.VAR19 = VAR20;
    VAR8->VAR17.VAR18.VAR21 = 3;
    if (VAR11)
    {
        for (VAR15 = 0; VAR15 < 3; VAR15++)
        {
            VAR8->VAR17.VAR18.VAR22[VAR15] = VAR11->VAR6[VAR15];
            VAR8->VAR17.VAR18.VAR23[VAR15] = VAR11->VAR24[VAR15];
        }
        VAR8->VAR17.VAR25 = VAR11->VAR26;
        VAR8->VAR17.VAR27 = VAR11->VAR28 == VAR29 ? VAR30 : VAR11->VAR28 == VAR31 ? VAR32
                                                                                  : VAR11->VAR28 == VAR33   ? VAR34
                                                                                                                            : VAR35;
        if (VAR8->VAR36.VAR37 != VAR11->VAR38)
        {
            VAR8->VAR36.VAR37 = VAR11->VAR38;
            FUN3(VAR8->VAR39, &VAR8->VAR36);
        }
    }
    do
    {
        if (FUN4(VAR8->VAR39, &VAR13, &VAR14, VAR11 ? &VAR8->VAR17 : NULL, &VAR16) < 0)
            return -1;
        VAR5 = FUN5(VAR2, VAR4, VAR5, VAR13, VAR14, 0);
        if (VAR5 < 0)
            return -1;
    } while (!VAR5 && !VAR11 && FUN6(VAR8->VAR39));
    VAR8->VAR40.VAR26 = VAR16.VAR25;
    switch (VAR16.VAR27)
    {
    case VAR41:
    case VAR42:
        VAR8->VAR40.VAR28 = VAR29;
        break;
    case VAR32:
        VAR8->VAR40.VAR28 = VAR31;
        break;
    case VAR34:
    case VAR43:
        VAR8->VAR40.VAR28 = VAR33;
        break;
    }
    VAR8->VAR40.VAR44 = VAR16.VAR45;
    VAR8->VAR40.VAR46 = (VAR16.VAR47 - 1) * VAR48;
    return VAR5;
}