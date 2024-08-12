static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7[VAR4->VAR8];
    VAR9 *VAR10 = VAR2->VAR10;
    VAR11 *VAR12;
    int *VAR13 = VAR2->VAR14;
    int VAR15, VAR16, VAR17, VAR18;
    int VAR19;
    char VAR20[VAR21 + 1];
    VAR22 *VAR23, *VAR24, *VAR25;
    VAR12 = (VAR11 *)VAR4->VAR26;
    if (*VAR13)
    {
        *VAR13 = 0;
        if (FUN2(VAR2, VAR20) < 0)
        {
            FUN3(VAR2, VAR27, "");
            return FUN4(VAR28);
        }
        else
        {
            FUN5(VAR10, VAR20, strlen(VAR20));
        }
    }
    FUN6(VAR2->VAR10, "", VAR29);
    VAR15 = VAR6->VAR30->VAR15;
    VAR16 = VAR6->VAR30->VAR16;
    VAR23 = VAR12->VAR26[0];
    switch (VAR6->VAR30->VAR31)
    {
    case VAR32:
    case VAR33:
    case VAR34:
    case VAR35:
    case VAR36:
        break;
    case VAR37:
    case VAR38:
    case VAR39:
    case VAR40:
    case VAR41:
    case VAR42:
    case VAR43:
    case VAR44:
    case VAR45:
    case VAR46:
    case VAR47:
    case VAR48:
    case VAR49:
    case VAR50:
    case VAR51:
    case VAR52:
    case VAR53:
    case VAR54:
    case VAR55:
        VAR15 *= 2;
        break;
    default:
        FUN3(VAR2, VAR27, "", FUN7(VAR6->VAR30->VAR31));
        return FUN4(VAR56);
    }
    for (VAR19 = 0; VAR19 < VAR16; VAR19++)
    {
        FUN5(VAR10, VAR23, VAR15);
        VAR23 += VAR12->VAR57[0];
    }
    if (VAR6->VAR30->VAR31 != VAR32 && VAR6->VAR30->VAR31 != VAR37 && VAR6->VAR30->VAR31 != VAR38 && VAR6->VAR30->VAR31 != VAR39 && VAR6->VAR30->VAR31 != VAR40)
    {
        FUN8(VAR6->VAR30->VAR31, &VAR17, &VAR18);
        VAR15 = FUN9(VAR15, VAR17);
        VAR16 = FUN9(VAR16, VAR18);
        VAR24 = VAR12->VAR26[1];
        VAR25 = VAR12->VAR26[2];
        for (VAR19 = 0; VAR19 < VAR16; VAR19++)
        {
            FUN5(VAR10, VAR24, VAR15);
            VAR24 += VAR12->VAR57[1];
        }
        for (VAR19 = 0; VAR19 < VAR16; VAR19++)
        {
            FUN5(VAR10, VAR25, VAR15);
            VAR25 += VAR12->VAR57[2];
        }
    }
    return 0;
}