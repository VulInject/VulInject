static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, void *VAR6)
{
    VAR7 *VAR8 = VAR2->VAR9;
    VAR10 *VAR11 = VAR6;
    VAR12 *VAR13;
    int VAR14, VAR15;
    x264_picture_t VAR16;
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
        VAR8->VAR17.VAR27 = VAR28;
    }
    if (FUN2(VAR8->VAR29, &VAR13, &VAR14, VAR11 ? &VAR8->VAR17 : NULL, &VAR16) < 0)
        return -1;
    VAR5 = FUN3(VAR2, VAR4, VAR5, VAR13, VAR14, 0);
    if (VAR5 < 0)
        return -1;
    VAR8->VAR30.VAR26 = VAR16.VAR25;
    switch (VAR16.VAR27)
    {
    case VAR31:
    case VAR32:
        VAR8->VAR30.VAR33 = VAR34;
        break;
    case VAR35:
        VAR8->VAR30.VAR33 = VAR36;
        break;
    case VAR37:
    case VAR38:
        VAR8->VAR30.VAR33 = VAR39;
        break;
    }
    VAR8->VAR30.VAR40 = VAR16.VAR41;
    VAR8->VAR30.VAR42 = (VAR16.VAR43 - 1) * VAR44;
    return VAR5;
}