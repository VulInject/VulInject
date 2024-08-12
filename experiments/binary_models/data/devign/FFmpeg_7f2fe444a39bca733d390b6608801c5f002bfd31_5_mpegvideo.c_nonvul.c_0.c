int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    int VAR6;
    VAR2->VAR7 = VAR8;
    VAR4->VAR9 = VAR2->VAR9;
    VAR4->VAR10 = VAR2->VAR10;
    VAR4->VAR11 = VAR2->VAR11;
    VAR4->VAR12 = VAR2->VAR12;
    VAR4->VAR13 = VAR2->VAR13;
    if (VAR2->VAR14 > 600)
    {
        fprintf(VAR15, "");
        VAR2->VAR14 = 600;
    }
    VAR4->VAR14 = VAR2->VAR14;
    VAR4->VAR16 = VAR2->VAR16;
    VAR4->VAR17 = VAR2->VAR17;
    if (VAR2->VAR18)
        VAR4->VAR18 = VAR2->VAR18;
    VAR4->VAR19 = VAR2->VAR19;
    VAR4->VAR20 = VAR2->VAR20;
    VAR4->VAR21 = VAR2->VAR21;
    VAR4->VAR22 = VAR2->VAR22;
    VAR4->VAR23 = VAR2->VAR23;
    VAR4->VAR24 = VAR2->VAR24;
    VAR4->VAR25 = VAR2->VAR25;
    VAR4->VAR2 = VAR2;
    VAR4->VAR26 = VAR2->VAR26;
    VAR4->VAR27 = VAR2->VAR27;
    VAR4->VAR28 = VAR2->VAR28;
    VAR4->VAR29 = VAR2->VAR29;
    VAR4->VAR30 = VAR2->VAR30;
    VAR4->VAR31 = VAR2->VAR32->VAR33;
    VAR4->VAR34 = VAR2->VAR34;
    VAR4->VAR35 = VAR2->VAR35;
    VAR4->VAR36 = VAR2->VAR36;
    VAR4->VAR37 = VAR2->VAR27 & VAR38;
    if (VAR4->VAR14 <= 1)
    {
        VAR4->VAR39 = 1;
        VAR4->VAR14 = 12;
    }
    else
    {
        VAR4->VAR39 = 0;
    }
    if (VAR2->VAR40 == 0)
        VAR4->VAR40 = VAR41;
    else
        VAR4->VAR40 = VAR2->VAR40;
    VAR4->VAR42 = (VAR2->VAR27 & VAR43);
    switch (VAR2->VAR32->VAR33)
    {
    case VAR44:
        VAR4->VAR45 = VAR46;
        VAR2->VAR47 = 0;
        break;
    case VAR48:
        VAR4->VAR45 = VAR49;
        VAR4->VAR39 = 1;
        VAR4->VAR50 = 1;
        VAR4->VAR51 = 0;
        VAR4->VAR52[0] = 2;
        VAR4->VAR52[1] = 1;
        VAR4->VAR52[2] = 1;
        VAR4->VAR53[0] = 2;
        VAR4->VAR53[1] = 1;
        VAR4->VAR53[2] = 1;
        if (FUN2(VAR4) < 0)
            return -1;
        VAR2->VAR47 = 0;
        break;
    case VAR54:
        if (FUN3(VAR4->VAR12, VAR4->VAR13) == 7)
        {
            FUN4("");
            return -1;
        }
        VAR4->VAR45 = VAR55;
        VAR2->VAR47 = 0;
        break;
    case VAR56:
        VAR4->VAR45 = VAR55;
        VAR4->VAR16 = 1;
        VAR4->VAR17 = 1200;
        VAR4->VAR57 = 1;
        VAR4->VAR58 = 1;
        VAR4->VAR59 = 1;
        VAR4->VAR60 = 0;
        VAR4->VAR61 = 0;
        VAR2->VAR47 = 0;
        break;
    case VAR62:
        VAR4->VAR45 = VAR55;
        VAR4->VAR63 = 1;
        VAR2->VAR47 = 0;
        break;
    case VAR64:
        VAR4->VAR45 = VAR55;
        VAR4->VAR65 = 1;
        VAR4->VAR58 = 1;
        VAR4->VAR66 = VAR4->VAR28 ? 1 : 0;
        VAR4->VAR67 = 0;
        VAR2->VAR47 = VAR4->VAR67 ? 0 : (VAR4->VAR28 + 1);
        break;
    case VAR68:
        VAR4->VAR45 = VAR55;
        VAR4->VAR69 = 1;
        VAR4->VAR65 = 1;
        VAR4->VAR58 = 1;
        VAR4->VAR70 = 1;
        VAR2->VAR47 = 0;
        break;
    case VAR71:
        VAR4->VAR45 = VAR55;
        VAR4->VAR69 = 1;
        VAR4->VAR65 = 1;
        VAR4->VAR58 = 1;
        VAR4->VAR70 = 2;
        VAR2->VAR47 = 0;
        break;
    case VAR72:
        VAR4->VAR45 = VAR55;
        VAR4->VAR69 = 1;
        VAR4->VAR65 = 1;
        VAR4->VAR58 = 1;
        VAR4->VAR70 = 3;
        VAR2->VAR47 = 0;
        break;
    default:
        return -1;
    }
    {
        static int VAR73 = 0;
        if (!VAR73)
        {
            int VAR6;
            VAR73 = 1;
            memset(VAR74, 0, sizeof(VAR75) * (VAR76 + 1) * (2 * VAR77 + 1));
            memset(VAR78, 0, sizeof(VAR79) * (2 * VAR77 + 1));
            for (VAR6 = -16; VAR6 < 16; VAR6++)
            {
                VAR78[VAR6 + VAR77] = 1;
            }
        }
    }
    VAR4->VAR80 = VAR74;
    VAR4->VAR81 = VAR78;
    if (VAR4->VAR45 == VAR55)
        FUN5(VAR4);
    else if (VAR4->VAR45 == VAR46)
        FUN6(VAR4);
    if (VAR4->VAR40 < VAR82)
        VAR4->VAR80 = VAR74;
    VAR4->VAR83 = 1;
    if (FUN7(VAR4) < 0)
        return -1;
    for (VAR6 = 0; VAR6 < 64; VAR6++)
    {
        if (VAR4->VAR45 == VAR55)
            VAR4->VAR84[VAR6] = VAR85[VAR6];
        else
            VAR4->VAR84[VAR6] = VAR86[VAR6];
        VAR4->VAR87[VAR6] = VAR85[VAR6];
    }
    if (VAR4->VAR45 != VAR49)
    {
        FUN8(VAR4->VAR88, VAR4->VAR89, VAR4->VAR90, VAR4->VAR84, VAR4->VAR91);
        FUN8(VAR4->VAR92, VAR4->VAR93, VAR4->VAR94, VAR4->VAR87, VAR4->VAR95);
    }
    if (FUN9(VAR4) < 0)
        return -1;
    VAR4->VAR96 = 0;
    VAR4->VAR97 = 0;
    VAR4->VAR98 = 0;
    VAR4->VAR99 = 1;
    VAR4->VAR100 = 1;
    return 0;
}