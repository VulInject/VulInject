int FUN1(VAR1 *VAR2)
{
    int VAR3, VAR4, VAR5, VAR6, VAR7, VAR8, VAR9, VAR10;
    int VAR11[VAR12];
    int VAR13[VAR12];
    VAR2->VAR14 = 0;
    VAR2->VAR15 = VAR2->VAR16 = 0;
    VAR3 = FUN2(&VAR2->VAR17, 16);
    VAR2->VAR18->VAR19 = VAR8 = FUN2(&VAR2->VAR17, 8);
    if (VAR2->VAR20)
        VAR8 = 9;
    if (VAR8 == 9 && !VAR2->VAR20)
        VAR2->VAR21 = 1;
    if (VAR2->VAR22 && VAR2->VAR18->VAR23)
    {
        FUN3(VAR2->VAR18, VAR24, "");
        return -1;
        VAR7 = FUN2(&VAR2->VAR17, 16);
        VAR6 = FUN2(&VAR2->VAR17, 16);
        if (VAR2->VAR18->VAR25 == VAR26 && (VAR7 & 15))
            FUN4(VAR2->VAR18, "");
        if (VAR2->VAR27 && VAR2->VAR6 == VAR6 && VAR2->VAR7 == VAR7 + 1)
            VAR7 = VAR2->VAR7;
        FUN3(VAR2->VAR18, VAR28, "", VAR6, VAR7);
        if (FUN5(VAR6, VAR7, 0, VAR2->VAR18))
            VAR4 = FUN2(&VAR2->VAR17, 8);
        if (VAR4 <= 0 || VAR4 > VAR12)
            return -1;
        if (VAR2->VAR27 && (VAR2->VAR29 == !VAR2->VAR30))
        {
            if (VAR4 != VAR2->VAR4)
            {
                FUN3(VAR2->VAR18, VAR24, "");
                if (VAR2->VAR31 && !(VAR8 <= 8 || VAR4 == 1))
                {
                    FUN6(VAR2->VAR18, ""
                                                            "");
                    return VAR32;
                    VAR2->VAR4 = VAR4;
                    VAR2->VAR33 = 1;
                    VAR2->VAR34 = 1;
                    memset(VAR11, 0, sizeof(VAR11));
                    memset(VAR13, 0, sizeof(VAR13));
                    for (VAR5 = 0; VAR5 < VAR4; VAR5++)
                    {
                        VAR2->VAR35[VAR5] = FUN2(&VAR2->VAR17, 8) - 1;
                        VAR11[VAR5] = FUN2(&VAR2->VAR17, 4);
                        VAR13[VAR5] = FUN2(&VAR2->VAR17, 4);
                        if (VAR11[VAR5] > VAR2->VAR33)
                            VAR2->VAR33 = VAR11[VAR5];
                        if (VAR13[VAR5] > VAR2->VAR34)
                            VAR2->VAR34 = VAR13[VAR5];
                        VAR2->VAR36[VAR5] = FUN2(&VAR2->VAR17, 8);
                        if (VAR2->VAR36[VAR5] >= 4)
                        {
                            FUN3(VAR2->VAR18, VAR24, "");
                            if (!VAR11[VAR5] || !VAR13[VAR5])
                            {
                                FUN3(VAR2->VAR18, VAR24, "", VAR5, VAR11[VAR5], VAR13[VAR5]);
                                FUN3(VAR2->VAR18, VAR28, "", VAR5, VAR11[VAR5], VAR13[VAR5], VAR2->VAR35[VAR5], VAR2->VAR36[VAR5]);
                                if (VAR2->VAR31 && (VAR2->VAR33 > 1 || VAR2->VAR34 > 1))
                                {
                                    FUN6(VAR2->VAR18, "");
                                    return VAR32;
                                    if (VAR6 != VAR2->VAR6 || VAR7 != VAR2->VAR7 || VAR8 != VAR2->VAR8 || memcmp(VAR2->VAR11, VAR11, sizeof(VAR11)) || memcmp(VAR2->VAR13, VAR13, sizeof(VAR13)))
                                    {
                                        VAR2->VAR6 = VAR6;
                                        VAR2->VAR7 = VAR7;
                                        VAR2->VAR8 = VAR8;
                                        memcpy(VAR2->VAR11, VAR11, sizeof(VAR11));
                                        memcpy(VAR2->VAR13, VAR13, sizeof(VAR13));
                                        VAR2->VAR27 = 0;
                                        VAR2->VAR37 = 0;
                                        if (VAR2->VAR38 && VAR2->VAR39 != 0 && VAR2->VAR7 < ((VAR2->VAR39 * 3) / 4))
                                        {
                                            VAR2->VAR27 = 1;
                                            VAR2->VAR29 = VAR2->VAR30;
                                            VAR2->VAR40->VAR41 = 1;
                                            VAR2->VAR40->VAR42 = !VAR2->VAR30;
                                            VAR7 *= 2;
                                            VAR10 = FUN7(VAR2->VAR18, VAR6, VAR7);
                                            if (VAR10 < 0)
                                                return VAR10;
                                            VAR2->VAR38 = 0;
                                            if (VAR2->VAR37 && VAR2->VAR27 && (VAR2->VAR29 == !VAR2->VAR30))
                                            {
                                                if (VAR2->VAR43)
                                                {
                                                    FUN4(VAR2->VAR18, "");
                                                }
                                                else
                                                {
                                                    if (VAR2->VAR34 == 1 && VAR2->VAR33 == 1 && VAR2->VAR22 == 1 && (VAR4 == 3 || VAR4 == 4))
                                                        VAR2->VAR44 = 1;
                                                    else if (!VAR2->VAR22)
                                                        VAR2->VAR44 = 0;
                                                    VAR9 = (VAR2->VAR11[0] << 28) | (VAR2->VAR13[0] << 24) | (VAR2->VAR11[1] << 20) | (VAR2->VAR13[1] << 16) | (VAR2->VAR11[2] << 12) | (VAR2->VAR13[2] << 8) | (VAR2->VAR11[3] << 4) | VAR2->VAR13[3];
                                                    FUN3(VAR2->VAR18, VAR28, "", VAR9);
                                                    if (!(VAR9 & 0xD0D0D0D0))
                                                        VAR9 -= (VAR9 & 0xF0F0F0F0) >> 1;
                                                    if (!(VAR9 & 0x0D0D0D0D))
                                                        VAR9 -= (VAR9 & 0x0F0F0F0F) >> 1;
                                                    for (VAR5 = 0; VAR5 < 8; VAR5++)
                                                    {
                                                        int VAR45 = 6 + (VAR5 & 1) - (VAR5 & 6);
                                                        int VAR46 = (VAR9 >> (4 * VAR5)) & 0xF;
                                                        int VAR47 = (VAR9 >> (4 * VAR45)) & 0xF;
                                                        if (VAR46 == 1 && VAR47 != 2 && (VAR5 < 2 || VAR5 > 5))
                                                            VAR47 = (VAR9 >> (8 + 4 * (VAR5 & 1))) & 0xF;
                                                        if (VAR46 == 1 && VAR47 != 2 && (VAR5 < 2 || VAR5 > 5))
                                                            VAR47 = (VAR9 >> (16 + 4 * (VAR5 & 1))) & 0xF;
                                                        if (VAR46 == 1 && VAR47 == 2)
                                                        {
                                                            if (VAR5 & 1)
                                                                VAR2->VAR15 |= 1 << (VAR45 / 2);
                                                            else
                                                                VAR2->VAR16 |= 1 << (VAR45 / 2);
                                                            switch (VAR9)
                                                            {
                                                            case 0x11111100:
                                                                if (VAR2->VAR44)
                                                                    VAR2->VAR18->VAR48 = VAR2->VAR8 <= 9 ? VAR49 : VAR50;
                                                                else
                                                                {
                                                                    if (VAR2->VAR35[0] == '' && VAR2->VAR35[1] == '' && VAR2->VAR35[2] == '')
                                                                    {
                                                                        VAR2->VAR18->VAR48 = VAR2->VAR8 <= 8 ? VAR51 : VAR52;
                                                                    }
                                                                    else
                                                                    {
                                                                        if (VAR2->VAR8 <= 8)
                                                                            VAR2->VAR18->VAR48 = VAR2->VAR53 ? VAR54 : VAR55;
                                                                        else
                                                                            VAR2->VAR18->VAR48 = VAR56;
                                                                        VAR2->VAR18->VAR57 = VAR2->VAR53 ? VAR58 : VAR59;
                                                                        FUN8(VAR2->VAR4 == 3);
                                                                        break;
                                                                    case 0x11111111:
                                                                        if (VAR2->VAR44)
                                                                            VAR2->VAR18->VAR48 = VAR2->VAR8 <= 9 ? VAR60 : VAR61;
                                                                        else
                                                                        {
                                                                            if (VAR2->VAR62 == 0 && VAR2->VAR8 <= 8)
                                                                            {
                                                                                VAR2->VAR18->VAR48 = VAR63;
                                                                            }
                                                                            else
                                                                            {
                                                                                VAR2->VAR18->VAR48 = VAR2->VAR8 <= 8 ? VAR64 : VAR65;
                                                                                VAR2->VAR18->VAR57 = VAR2->VAR53 ? VAR58 : VAR59;
                                                                                FUN8(VAR2->VAR4 == 4);
                                                                                break;
                                                                            case 0x22111122:
                                                                                if (VAR2->VAR62 == 0 && VAR2->VAR8 <= 8)
                                                                                {
                                                                                    VAR2->VAR18->VAR48 = VAR63;
                                                                                    VAR2->VAR16 = 6;
                                                                                    VAR2->VAR15 = 6;
                                                                                    VAR2->VAR66 = VAR2->VAR7;
                                                                                }
                                                                                else if (VAR2->VAR62 == 2 && VAR2->VAR8 <= 8)
                                                                                {
                                                                                    VAR2->VAR18->VAR48 = VAR64;
                                                                                    VAR2->VAR16 = 6;
                                                                                    VAR2->VAR15 = 6;
                                                                                    VAR2->VAR66 = VAR2->VAR7;
                                                                                    VAR2->VAR18->VAR57 = VAR2->VAR53 ? VAR58 : VAR59;
                                                                                }
                                                                                else
                                                                                {
                                                                                    if (VAR2->VAR8 <= 8)
                                                                                        VAR2->VAR18->VAR48 = VAR67;
                                                                                    else
                                                                                        VAR2->VAR18->VAR48 = VAR68;
                                                                                    VAR2->VAR18->VAR57 = VAR2->VAR53 ? VAR58 : VAR59;
                                                                                    FUN8(VAR2->VAR4 == 4);
                                                                                    break;
                                                                                case 0x12121100:
                                                                                case 0x22122100:
                                                                                case 0x21211100:
                                                                                case 0x22211200:
                                                                                    if (VAR2->VAR8 <= 8)
                                                                                        VAR2->VAR18->VAR48 = VAR2->VAR53 ? VAR54 : VAR55;
                                                                                    else
                                                                                        goto VAR69;
                                                                                    VAR2->VAR18->VAR57 = VAR2->VAR53 ? VAR58 : VAR59;
                                                                                    VAR2->VAR66 = VAR2->VAR7;
                                                                                    break;
                                                                                case 0x22221100:
                                                                                case 0x22112200:
                                                                                case 0x11222200:
                                                                                    if (VAR2->VAR8 <= 8)
                                                                                        VAR2->VAR18->VAR48 = VAR2->VAR53 ? VAR54 : VAR55;
                                                                                    else
                                                                                        goto VAR69;
                                                                                    VAR2->VAR18->VAR57 = VAR2->VAR53 ? VAR58 : VAR59;
                                                                                    VAR2->VAR66 = (VAR2->VAR7 + 1) / 2;
                                                                                    break;
                                                                                case 0x11000000:
                                                                                case 0x13000000:
                                                                                case 0x14000000:
                                                                                case 0x31000000:
                                                                                case 0x33000000:
                                                                                case 0x34000000:
                                                                                case 0x41000000:
                                                                                case 0x43000000:
                                                                                case 0x44000000:
                                                                                    if (VAR2->VAR8 <= 8)
                                                                                        VAR2->VAR18->VAR48 = VAR70;
                                                                                    else
                                                                                        VAR2->VAR18->VAR48 = VAR71;
                                                                                    break;
                                                                                case 0x12111100:
                                                                                case 0x14121200:
                                                                                case 0x22211100:
                                                                                case 0x22112100:
                                                                                    if (VAR2->VAR8 <= 8)
                                                                                        VAR2->VAR18->VAR48 = VAR2->VAR53 ? VAR72 : VAR73;
                                                                                    else
                                                                                        goto VAR69;
                                                                                    VAR2->VAR18->VAR57 = VAR2->VAR53 ? VAR58 : VAR59;
                                                                                    VAR2->VAR66 = (VAR2->VAR7 + 1) / 2;
                                                                                    break;
                                                                                case 0x21111100:
                                                                                    if (VAR2->VAR8 <= 8)
                                                                                        VAR2->VAR18->VAR48 = VAR2->VAR53 ? VAR74 : VAR75;
                                                                                    else
                                                                                        VAR2->VAR18->VAR48 = VAR76;
                                                                                    VAR2->VAR18->VAR57 = VAR2->VAR53 ? VAR58 : VAR59;
                                                                                    break;
                                                                                case 0x22121100:
                                                                                case 0x22111200:
                                                                                    if (VAR2->VAR8 <= 8)
                                                                                        VAR2->VAR18->VAR48 = VAR2->VAR53 ? VAR74 : VAR75;
                                                                                    else
                                                                                        goto VAR69;
                                                                                    VAR2->VAR18->VAR57 = VAR2->VAR53 ? VAR58 : VAR59;
                                                                                    break;
                                                                                case 0x22111100:
                                                                                case 0x42111100:
                                                                                    if (VAR2->VAR8 <= 8)
                                                                                        VAR2->VAR18->VAR48 = VAR2->VAR53 ? VAR77 : VAR78;
                                                                                    else
                                                                                        VAR2->VAR18->VAR48 = VAR79;
                                                                                    VAR2->VAR18->VAR57 = VAR2->VAR53 ? VAR58 : VAR59;
                                                                                    if (VAR9 == 0x42111100)
                                                                                    {
                                                                                        VAR2->VAR15 = 6;
                                                                                        VAR2->VAR66 = (VAR2->VAR7 + 1) / 2;
                                                                                        break;
                                                                                    case 0x41111100:
                                                                                        if (VAR2->VAR8 <= 8)
                                                                                            VAR2->VAR18->VAR48 = VAR2->VAR53 ? VAR80 : VAR81;
                                                                                        else
                                                                                            goto VAR69;
                                                                                        VAR2->VAR18->VAR57 = VAR2->VAR53 ? VAR58 : VAR59;
                                                                                        break;
                                                                                    default:
                                                                                    VAR69:
                                                                                        FUN3(VAR2->VAR18, VAR24, "", VAR9);
                                                                                        VAR2->VAR15 = VAR2->VAR16 = 0;
                                                                                        return VAR32;
                                                                                        if ((VAR2->VAR15 || VAR2->VAR16) && VAR2->VAR18->VAR23)
                                                                                        {
                                                                                            FUN3(VAR2->VAR18, VAR24, "");
                                                                                            return VAR32;
                                                                                            if (VAR2->VAR31)
                                                                                            {
                                                                                                VAR2->VAR15 = VAR2->VAR16 = 0;
                                                                                                if (VAR2->VAR4 > 1)
                                                                                                    VAR2->VAR18->VAR48 = VAR82;
                                                                                                else if (VAR2->VAR83 && VAR2->VAR8 <= 8)
                                                                                                    VAR2->VAR18->VAR48 = VAR84;
                                                                                                else if (VAR2->VAR8 <= 8)
                                                                                                    VAR2->VAR18->VAR48 = VAR70;
                                                                                                else
                                                                                                    VAR2->VAR18->VAR48 = VAR71;
                                                                                                VAR2->VAR85 = FUN9(VAR2->VAR18->VAR48);
                                                                                                if (!VAR2->VAR85)
                                                                                                {
                                                                                                    FUN3(VAR2->VAR18, VAR24, "");
                                                                                                    return VAR86;
                                                                                                    FUN10(VAR2->VAR40);
                                                                                                    if (FUN11(VAR2->VAR18, VAR2->VAR40, VAR87) < 0)
                                                                                                        return -1;
                                                                                                    VAR2->VAR40->VAR88 = VAR89;
                                                                                                    VAR2->VAR40->VAR90 = 1;
                                                                                                    VAR2->VAR37 = 1;
                                                                                                    for (VAR5 = 0; VAR5 < 4; VAR5++)
                                                                                                        VAR2->VAR91[VAR5] = VAR2->VAR40->VAR91[VAR5] << VAR2->VAR27;
                                                                                                    FUN12(VAR2->VAR18, "", VAR2->VAR6, VAR2->VAR7, VAR2->VAR91[0], VAR2->VAR91[1], VAR2->VAR27, VAR2->VAR18->VAR7);
                                                                                                    if (VAR3 != (8 + (3 * VAR4)))
                                                                                                        FUN3(VAR2->VAR18, VAR28, "", VAR3);
                                                                                                    if (VAR2->VAR44 && !VAR2->VAR22 && !VAR2->VAR31)
                                                                                                    {
                                                                                                        FUN3(VAR2->VAR18, VAR24, "");
                                                                                                        return VAR32;
                                                                                                        if (VAR2->VAR43)
                                                                                                        {
                                                                                                            int VAR92 = (VAR6 + VAR2->VAR33 * 8 - 1) / (VAR2->VAR33 * 8);
                                                                                                            int VAR93 = (VAR7 + VAR2->VAR34 * 8 - 1) / (VAR2->VAR34 * 8);
                                                                                                            for (VAR5 = 0; VAR5 < VAR2->VAR4; VAR5++)
                                                                                                            {
                                                                                                                int VAR94 = VAR92 * VAR93 * VAR2->VAR11[VAR5] * VAR2->VAR13[VAR5];
                                                                                                                FUN13(&VAR2->VAR95[VAR5]);
                                                                                                                FUN13(&VAR2->VAR96[VAR5]);
                                                                                                                VAR2->VAR95[VAR5] = FUN14(VAR94, sizeof(**VAR2->VAR95));
                                                                                                                VAR2->VAR96[VAR5] = FUN14(VAR94, sizeof(**VAR2->VAR96));
                                                                                                                if (!VAR2->VAR95[VAR5] || !VAR2->VAR96[VAR5])
                                                                                                                    return FUN15(VAR97);
                                                                                                                VAR2->VAR98[VAR5] = VAR92 * VAR2->VAR11[VAR5];
                                                                                                                memset(VAR2->VAR99, 0, sizeof(VAR2->VAR99));
                                                                                                                return 0