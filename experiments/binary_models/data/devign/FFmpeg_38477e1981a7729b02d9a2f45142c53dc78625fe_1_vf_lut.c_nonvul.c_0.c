static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    VAR6 *VAR7 = VAR4->VAR8;
    const VAR9 *VAR10 = &VAR11[VAR2->VAR12];
    int VAR13[4], VAR14[4];
    int VAR15, VAR16, VAR17;
    VAR7->VAR18 = VAR10->VAR19;
    VAR7->VAR20 = VAR10->VAR21;
    VAR7->VAR22[VAR23] = VAR2->VAR24;
    VAR7->VAR22[VAR25] = VAR2->VAR26;
    switch (VAR2->VAR12)
    {
    case VAR27:
    case VAR28:
    case VAR29:
    case VAR30:
    case VAR31:
    case VAR32:
    case VAR33:
        VAR13[VAR34] = VAR13[VAR35] = VAR13[VAR36] = 16;
        VAR14[VAR34] = 235;
        VAR14[VAR35] = VAR14[VAR36] = 240;
        VAR13[VAR37] = 0;
        VAR14[VAR37] = 255;
        break;
    default:
        VAR13[0] = VAR13[1] = VAR13[2] = VAR13[3] = 0;
        VAR14[0] = VAR14[1] = VAR14[2] = VAR14[3] = 255;
    }
    VAR7->VAR38 = VAR7->VAR39 = 0;
    if (FUN2(VAR2->VAR12, VAR40))
        VAR7->VAR38 = 1;
    else if (FUN2(VAR2->VAR12, VAR41))
        VAR7->VAR39 = 1;
    if (VAR7->VAR39)
    {
        switch (VAR2->VAR12)
        {
        case VAR42:
            VAR7->VAR43[VAR37] = 0;
            VAR7->VAR43[VAR44] = 1;
            VAR7->VAR43[VAR45] = 2;
            VAR7->VAR43[VAR46] = 3;
            break;
        case VAR47:
            VAR7->VAR43[VAR37] = 0;
            VAR7->VAR43[VAR46] = 1;
            VAR7->VAR43[VAR45] = 2;
            VAR7->VAR43[VAR44] = 3;
            break;
        case VAR48:
        case VAR49:
            VAR7->VAR43[VAR44] = 0;
            VAR7->VAR43[VAR45] = 1;
            VAR7->VAR43[VAR46] = 2;
            VAR7->VAR43[VAR37] = 3;
            break;
        case VAR50:
        case VAR51:
            VAR7->VAR43[VAR46] = 0;
            VAR7->VAR43[VAR45] = 1;
            VAR7->VAR43[VAR44] = 2;
            VAR7->VAR43[VAR37] = 3;
            break;
        }
        VAR7->VAR52 = FUN3(VAR10) >> 3;
    }
    for (VAR16 = 0; VAR16 < VAR10->VAR53; VAR16++)
    {
        double VAR54;
        int VAR55;
        for (VAR55 = 0; VAR7->VAR43[VAR55] != VAR16; VAR55++)
            ;
        VAR17 = FUN4(&VAR7->VAR56[VAR16], VAR7->VAR57[VAR16], VAR58, VAR59, VAR60, NULL, NULL, 0, VAR4);
        if (VAR17 < 0)
        {
            FUN5(VAR4, VAR61, "", VAR7->VAR57[VAR16], VAR16);
            return FUN6(VAR62);
        }
        VAR7->VAR22[VAR63] = VAR14[VAR16];
        VAR7->VAR22[VAR64] = VAR13[VAR16];
        for (VAR15 = 0; VAR15 < 256; VAR15++)
        {
            VAR7->VAR22[VAR65] = VAR15;
            VAR7->VAR22[VAR66] = FUN7(VAR15, VAR13[VAR16], VAR14[VAR16]);
            VAR7->VAR22[VAR67] = FUN7(VAR13[VAR16] + VAR14[VAR16] - VAR7->VAR22[VAR65], VAR13[VAR16], VAR14[VAR16]);
            VAR54 = FUN8(VAR7->VAR56[VAR16], VAR7->VAR22, VAR7);
            if (FUN9(VAR54))
            {
                FUN5(VAR4, VAR61, "", VAR7->VAR57[VAR16], VAR15, VAR16);
                return FUN6(VAR62);
            }
            VAR7->VAR7[VAR55][VAR15] = FUN7((int)VAR54, VAR13[VAR16], VAR14[VAR16]);
            FUN5(VAR4, VAR68, "", VAR16, VAR15, VAR7->VAR7[VAR55][VAR15]);
        }
    }
    return 0;
}