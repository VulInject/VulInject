int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    int VAR6, VAR7;
    int VAR8, VAR9;
    VAR2->VAR10 = VAR11;
    VAR4->VAR12 = VAR2->VAR12;
    VAR4->VAR13 = VAR2->VAR13;
    VAR4->VAR14 = VAR2->VAR14;
    if (VAR2->VAR15 > 600)
    {
        FUN2(VAR2, VAR16, "");
        VAR2->VAR15 = 600;
    }
    VAR4->VAR15 = VAR2->VAR15;
    VAR4->VAR2 = VAR2;
    VAR4->VAR17 = VAR2->VAR17;
    VAR4->VAR18 = VAR2->VAR18;
    VAR4->VAR19 = VAR2->VAR19;
    VAR4->VAR20 = VAR2->VAR21->VAR22;
    VAR4->VAR23 = VAR2->VAR23;
    VAR4->VAR24 = VAR2->VAR24;
    VAR4->VAR25 = VAR2->VAR25;
    VAR4->VAR26 = VAR2->VAR17 & VAR27;
    VAR4->VAR28 = (VAR2->VAR17 & VAR29) != 0;
    VAR4->VAR30 = VAR2->VAR30;
    VAR4->VAR31 = !!VAR2->VAR32;
    if (VAR4->VAR15 <= 1)
    {
        VAR4->VAR33 = 1;
        VAR4->VAR15 = 12;
    }
    else
    {
        VAR4->VAR33 = 0;
    }
    VAR4->VAR34 = VAR2->VAR34;
    VAR4->VAR35 = !!(VAR2->VAR17 & VAR36);
    VAR4->VAR37 = (VAR4->VAR2->VAR38 || VAR4->VAR2->VAR39 || VAR4->VAR2->VAR40 || VAR4->VAR2->VAR41 || VAR4->VAR2->VAR42 || (VAR4->VAR17 & VAR43)) && !VAR4->VAR35;
    VAR4->VAR44 = !!(VAR4->VAR17 & VAR45);
    VAR4->VAR46 = !!(VAR4->VAR17 & VAR47);
    VAR4->VAR48 = !!(VAR4->VAR17 & VAR49);
    if (VAR2->VAR50 && !VAR2->VAR51)
    {
        FUN2(VAR2, VAR16, "");
        return -1;
    }
    if (VAR2->VAR52 && VAR2->VAR50 != VAR2->VAR52)
    {
        FUN2(VAR2, VAR53, "");
    }
    if ((VAR4->VAR17 & VAR54) && VAR4->VAR20 != VAR55 && VAR4->VAR20 != VAR56 && VAR4->VAR20 != VAR57)
    {
        FUN2(VAR2, VAR16, "");
        return -1;
    }
    if (VAR4->VAR44 && VAR4->VAR2->VAR58 != VAR59)
    {
        FUN2(VAR2, VAR16, "");
        return -1;
    }
    if (VAR4->VAR44 && VAR4->VAR20 != VAR56 && VAR4->VAR20 != VAR57)
    {
        FUN2(VAR2, VAR16, "");
        return -1;
    }
    if (VAR4->VAR28 && VAR4->VAR20 != VAR55)
    {
        FUN2(VAR2, VAR16, "");
        return -1;
    }
    if (VAR4->VAR26 && VAR4->VAR20 != VAR55)
    {
        FUN2(VAR2, VAR16, "");
        return -1;
    }
    if (VAR4->VAR19 && VAR4->VAR20 != VAR55 && VAR4->VAR20 != VAR60 && VAR4->VAR20 != VAR61)
    {
        FUN2(VAR2, VAR16, "");
        return -1;
    }
    if (VAR4->VAR30 && VAR4->VAR20 != VAR55)
    {
        FUN2(VAR2, VAR16, "");
        return -1;
    }
    if ((VAR4->VAR17 & VAR62) && !(VAR4->VAR17 & VAR63))
    {
        FUN2(VAR2, VAR16, "");
        return -1;
    }
    if ((VAR4->VAR17 & VAR43) && VAR4->VAR2->VAR58 != VAR64)
    {
        FUN2(VAR2, VAR16, "");
        return -1;
    }
    if (VAR4->VAR2->VAR65 < 1000000000 && (VAR4->VAR17 & VAR66))
    {
        FUN2(VAR2, VAR16, "");
        return -1;
    }
    VAR6 = FUN3(VAR2->VAR67, VAR2->VAR68);
    if (VAR6 > 1)
    {
        FUN2(VAR2, VAR53, "");
        VAR2->VAR67 /= VAR6;
        VAR2->VAR68 /= VAR6;
    }
    if (VAR4->VAR20 == VAR69)
    {
        VAR4->VAR70 = 1 << (VAR71 - 1);
        VAR4->VAR72 = 0;
    }
    else if (VAR4->VAR30 || VAR4->VAR20 == VAR60 || VAR4->VAR20 == VAR61)
    {
        VAR4->VAR70 = 3 << (VAR71 - 3);
        VAR4->VAR72 = 0;
    }
    else
    {
        VAR4->VAR70 = 0;
        VAR4->VAR72 = -(1 << (VAR71 - 2));
    }
    if (VAR2->VAR70 != VAR73)
        VAR4->VAR70 = VAR2->VAR70;
    if (VAR2->VAR72 != VAR73)
        VAR4->VAR72 = VAR2->VAR72;
    FUN4(VAR2->VAR10, &VAR8, &VAR9);
    FUN5(&VAR4->VAR74, &VAR7, VAR4->VAR2->VAR67, VAR4->VAR2->VAR68, (1 << 16) - 1);
    VAR4->VAR75 = FUN6(VAR4->VAR74 - 1) + 1;
    switch (VAR2->VAR21->VAR22)
    {
    case VAR60:
        VAR4->VAR76 = VAR77;
        VAR4->VAR78 = 0;
        VAR2->VAR79 = VAR4->VAR78 ? 0 : (VAR4->VAR19 + 1);
        break;
    case VAR61:
        VAR4->VAR76 = VAR77;
        VAR4->VAR78 = 0;
        VAR2->VAR79 = VAR4->VAR78 ? 0 : (VAR4->VAR19 + 1);
        VAR4->VAR31 = 1;
        break;
    case VAR80:
    case VAR69:
        VAR4->VAR76 = VAR81;
        VAR4->VAR33 = 1;
        VAR4->VAR82 = 1;
        VAR4->VAR83 = 0;
        VAR4->VAR84[0] = 1 << VAR9;
        VAR4->VAR84[1] = 1;
        VAR4->VAR84[2] = 1;
        VAR4->VAR85[0] = 1 << VAR8;
        VAR4->VAR85[1] = 1;
        VAR4->VAR85[2] = 1;
        if (FUN7(VAR4) < 0)
            return -1;
        VAR2->VAR79 = 0;
        VAR4->VAR78 = 1;
        break;
    case VAR56:
        if (FUN8(VAR4->VAR13, VAR4->VAR14) == 7)
        {
            FUN2(VAR2, VAR53, "");
            return -1;
        }
        VAR4->VAR76 = VAR86;
        VAR4->VAR44 = (VAR2->VAR17 & VAR45) ? 1 : 0;
        VAR2->VAR79 = 0;
        VAR4->VAR78 = 1;
        break;
    case VAR57:
        VAR4->VAR76 = VAR86;
        VAR4->VAR87 = 1;
        VAR4->VAR88 = (VAR2->VAR17 & VAR89) ? 1 : 0;
        VAR4->VAR90 = (VAR2->VAR17 & VAR91) ? 1 : 0;
        VAR4->VAR92 = VAR4->VAR90;
        VAR4->VAR93 = (VAR2->VAR17 & VAR94) ? 1 : 0;
        VAR4->VAR44 = (VAR2->VAR17 & VAR45) ? 1 : 0;
        VAR4->VAR46 = (VAR2->VAR17 & VAR47) ? 1 : 0;
        VAR4->VAR95 = VAR4->VAR44 || VAR4->VAR46 || VAR4->VAR88;
        VAR4->VAR96 = (VAR4->VAR17 & VAR97) ? 1 : 0;
        VAR2->VAR79 = 0;
        VAR4->VAR78 = 1;
        break;
    case VAR98:
        VAR4->VAR76 = VAR86;
        VAR4->VAR99 = 2;
        VAR4->VAR95 = 1;
        VAR4->VAR31 = 0;
        VAR2->VAR79 = 0;
        VAR4->VAR78 = 1;
        break;
    case VAR100:
        VAR4->VAR76 = VAR86;
        VAR2->VAR79 = 0;
        VAR4->VAR78 = 1;
        break;
    case VAR55:
        VAR4->VAR76 = VAR86;
        VAR4->VAR101 = 1;
        VAR4->VAR95 = 1;
        VAR4->VAR78 = VAR4->VAR19 ? 0 : 1;
        VAR2->VAR79 = VAR4->VAR78 ? 0 : (VAR4->VAR19 + 1);
        break;
    case VAR102:
        VAR4->VAR76 = VAR86;
        VAR4->VAR103 = 1;
        VAR4->VAR101 = 1;
        VAR4->VAR95 = 1;
        VAR4->VAR104 = 1;
        VAR2->VAR79 = 0;
        VAR4->VAR78 = 1;
        break;
    case VAR105:
        VAR4->VAR76 = VAR86;
        VAR4->VAR103 = 1;
        VAR4->VAR101 = 1;
        VAR4->VAR95 = 1;
        VAR4->VAR104 = 2;
        VAR2->VAR79 = 0;
        VAR4->VAR78 = 1;
        break;
    case VAR106:
        VAR4->VAR76 = VAR86;
        VAR4->VAR103 = 1;
        VAR4->VAR101 = 1;
        VAR4->VAR95 = 1;
        VAR4->VAR104 = 3;
        VAR4->VAR107 = 1;
        VAR2->VAR79 = 0;
        VAR4->VAR78 = 1;
        break;
    case VAR108:
        VAR4->VAR76 = VAR86;
        VAR4->VAR103 = 1;
        VAR4->VAR101 = 1;
        VAR4->VAR95 = 1;
        VAR4->VAR104 = 4;
        VAR4->VAR107 = 1;
        VAR2->VAR79 = 0;
        VAR4->VAR78 = 1;
        break;
    case VAR109:
        VAR4->VAR76 = VAR86;
        VAR4->VAR103 = 1;
        VAR4->VAR101 = 1;
        VAR4->VAR95 = 1;
        VAR4->VAR104 = 5;
        VAR4->VAR107 = 1;
        VAR2->VAR79 = 0;
        VAR4->VAR78 = 1;
        break;
    default:
        return -1;
    }
    {
        static int VAR110 = 0;
        if (!VAR110)
        {
            int VAR6;
            VAR110 = 1;
            VAR111 = FUN9(sizeof(VAR112) * (VAR113 + 1) * (2 * VAR114 + 1));
            memset(VAR111, 0, sizeof(VAR112) * (VAR113 + 1) * (2 * VAR114 + 1));
            memset(VAR115, 0, sizeof(VAR112) * (2 * VAR114 + 1));
            for (VAR6 = -16; VAR6 < 16; VAR6++)
            {
                VAR115[VAR6 + VAR114] = 1;
            }
        }
    }
    VAR4->VAR116.VAR117 = VAR111;
    VAR4->VAR118 = VAR115;
    if (VAR4->VAR34 < VAR119)
        VAR4->VAR116.VAR117 = VAR111;
    VAR4->VAR120 = 1;
    if (FUN10(VAR4) < 0)
        return -1;
    if (VAR4->VAR92)
        VAR4->VAR121 = VAR122;
    VAR4->VAR123 = VAR4->VAR124 = !(VAR2->VAR17 & (VAR125 | VAR126));
    FUN11(&VAR4->VAR127, VAR4->VAR127.VAR128, VAR4->VAR2->VAR128);
    FUN12(VAR4);
    if (VAR4->VAR76 == VAR86)
        FUN13(VAR4);
    if (VAR4->VAR104)
        FUN14(VAR4);
    if (VAR4->VAR76 == VAR77)
        FUN15(VAR4);
    for (VAR6 = 0; VAR6 < 64; VAR6++)
    {
        int VAR129 = VAR4->VAR127.VAR130[VAR6];
        if (VAR4->VAR20 == VAR55 && VAR4->VAR30)
        {
            VAR4->VAR131[VAR129] = VAR132[VAR6];
            VAR4->VAR133[VAR129] = VAR134[VAR6];
        }
        else if (VAR4->VAR76 == VAR86)
        {
            VAR4->VAR131[VAR129] = VAR4->VAR133[VAR129] = VAR135[VAR6];
        }
        else
        {
            VAR4->VAR131[VAR129] = VAR136[VAR6];
            VAR4->VAR133[VAR129] = VAR135[VAR6];
        }
        if (VAR4->VAR2->VAR131)
            VAR4->VAR131[VAR129] = VAR4->VAR2->VAR131[VAR6];
        if (VAR4->VAR2->VAR133)
            VAR4->VAR133[VAR129] = VAR4->VAR2->VAR133[VAR6];
    }
    if (VAR4->VAR76 != VAR81)
    {
        FUN16(&VAR4->VAR127, VAR4->VAR137, VAR4->VAR138, VAR4->VAR131, VAR4->VAR70, 1, 31);
        FUN16(&VAR4->VAR127, VAR4->VAR139, VAR4->VAR140, VAR4->VAR133, VAR4->VAR72, 1, 31);
    }
    if (FUN17(VAR4) < 0)
        return -1;
    VAR4->VAR141 = 0;
    VAR4->VAR142 = 0;
    VAR4->VAR143 = 0;
    VAR4->VAR144 = 1;
    VAR4->VAR145 = 1;
    return 0;
}