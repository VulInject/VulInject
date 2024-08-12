static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    VAR6 *VAR7 = VAR2->VAR7;
    unsigned int VAR8, VAR9, VAR10;
    int VAR11, VAR12, VAR13;
    unsigned int VAR14;
    int VAR15;
    VAR16 *VAR17;
    VAR18 *VAR19 = NULL;
    int VAR20 = 0, VAR21 = 0;
    int VAR22 = 0;
    uint64_t VAR23 = 0;
    int64_t VAR24;
    int VAR25;
    VAR26 *VAR27;
    VAR4->VAR12 = -1;
    VAR25 = FUN2(VAR2, VAR7);
    if (VAR25 < 0)
        return VAR25;
    FUN3(VAR4, VAR28, "", VAR4->VAR29);
    VAR4->VAR30 = VAR4->VAR31 = FUN4(VAR7);
    if (VAR4->VAR31 <= 0 || VAR4->VAR31 < VAR4->VAR32)
        VAR4->VAR31 = VAR4->VAR32 == 8 ? VAR33 : VAR4->VAR32;
    VAR12 = -1;
    VAR11 = -1;
    VAR13 = 0;
    for (;;)
    {
        if (FUN5(VAR7))
            goto VAR34;
        VAR8 = FUN6(VAR7);
        VAR14 = FUN6(VAR7);
        FUN7("", VAR8, VAR14);
        switch (VAR8)
        {
        case FUN8('', '', '', ''):
            VAR23 = FUN9(VAR7) + VAR14;
            VAR9 = FUN6(VAR7);
            FUN7("", VAR9, 0);
            if (VAR9 == FUN8('', '', '', ''))
            {
                VAR4->VAR35 = FUN9(VAR7) - 4;
                if (VAR14)
                    VAR4->VAR36 = VAR4->VAR35 + VAR14 + (VAR14 & 1);
                else
                    VAR4->VAR36 = VAR4->VAR31;
                FUN3(NULL, VAR37, "" VAR38 "", VAR4->VAR36);
                goto VAR39;
            }
            else if (VAR9 == FUN8('', '', '', ''))
                FUN10(VAR2, VAR14 - 4);
            else if (VAR9 == FUN8('', '', '', ''))
                FUN11(VAR2, VAR23);
            break;
        case FUN8('', '', '', ''):
        {
            unsigned char VAR40[64] = {0};
            VAR14 += (VAR14 & 1);
            VAR14 -= FUN12(VAR7, VAR40, FUN13(VAR14, sizeof(VAR40) - 1));
            FUN14(VAR7, VAR14);
            FUN15(&VAR2->VAR41, VAR40);
            break;
        case FUN8('', '', '', ''):
            VAR4->VAR42 = 1;
            FUN14(VAR7, VAR14 + (VAR14 & 1));
            break;
        case FUN8('', '', '', ''):
            VAR22 = 1;
        case FUN8('', '', '', ''):
            VAR13 = FUN6(VAR7);
            FUN6(VAR7);
            FUN6(VAR7);
            VAR4->VAR43 |= FUN6(VAR7) & VAR44;
            FUN14(VAR7, 2 * 4);
            FUN6(VAR7);
            FUN6(VAR7);
            VAR20 = FUN6(VAR7);
            VAR21 = FUN6(VAR7);
            FUN14(VAR7, VAR14 - 10 * 4);
            break;
        case FUN8('', '', '', ''):
            VAR9 = FUN6(VAR7);
            VAR10 = FUN6(VAR7);
            if (VAR9 == FUN8('', '', '', ''))
            {
                FUN14(VAR7, VAR14 - 8);
                break;
            }
            else
            {
                VAR12++;
                VAR17 = FUN16(VAR2, NULL);
                if (!VAR17)
                    goto VAR34;
                VAR17->VAR45 = VAR12;
                VAR19 = FUN17(sizeof(VAR18));
                if (!VAR19)
                    goto VAR34;
                VAR17->VAR5 = VAR19;
                if (VAR22)
                    VAR9 = VAR12 ? FUN8('', '', '', '') : FUN8('', '', '', '');
                FUN7("", VAR9, -1);
                if (VAR9 == FUN8('', '', '', '') || VAR9 == FUN8('', '', '', ''))
                {
                    int64_t VAR46;
                    if (VAR2->VAR47 != 1)
                        goto VAR34;
                    if (VAR10 != FUN8('', '', '', '') && VAR10 != FUN8('', '', '', '') && VAR10 != FUN8('', '', '', ''))
                        goto VAR34;
                    VAR19 = VAR2->VAR48[0]->VAR5;
                    FUN18(&VAR2->VAR48[0]->VAR49->VAR50);
                    FUN18(&VAR2->VAR48[0]->VAR49);
                    VAR51 FUN18(&VAR2->VAR48[0]->VAR52);
                    FF_ENABLE_DEPRECATION_WARNINGS if (VAR2->VAR48[0]->VAR53) FUN18(&VAR2->VAR48[0]->VAR53->VAR54);
                    FUN18(&VAR2->VAR48[0]->VAR53);
                    if (VAR2->VAR48[0]->VAR55)
                        FUN18(&VAR2->VAR48[0]->VAR55->VAR56);
                    FUN18(&VAR2->VAR48[0]->VAR55);
                    FUN18(&VAR2->VAR48[0]);
                    VAR2->VAR47 = 0;
                    if (VAR57)
                    {
                        VAR4->VAR58 = FUN19(VAR2);
                        if (!VAR4->VAR58)
                            goto VAR34;
                    }
                    else
                        goto VAR34;
                    VAR2->VAR48[0]->VAR5 = VAR19;
                    FUN14(VAR7, 3 * 4);
                    VAR19->VAR59 = FUN6(VAR7);
                    VAR19->VAR60 = FUN6(VAR7);
                    FUN14(VAR7, 4);
                    VAR46 = FUN6(VAR7);
                    if (VAR19->VAR59 > 0 && VAR19->VAR60 > 0 && VAR46 > 0)
                    {
                        VAR46 *= VAR61;
                        VAR2->VAR62 = FUN20(VAR46, VAR19->VAR59, VAR19->VAR60);
                        VAR12 = VAR2->VAR47 - 1;
                        FUN14(VAR7, VAR14 - 9 * 4);
                        break;
                        FUN21(VAR12 < VAR2->VAR47);
                        VAR19->VAR10 = VAR10;
                        FUN6(VAR7);
                        FUN22(VAR7);
                        FUN22(VAR7);
                        FUN6(VAR7);
                        VAR19->VAR59 = FUN6(VAR7);
                        VAR19->VAR60 = FUN6(VAR7);
                        if (!(VAR19->VAR59 && VAR19->VAR60))
                        {
                            FUN3(VAR2, VAR63, "" VAR64 "" VAR64 ""
                                                      "",
                                   VAR19->VAR59, VAR19->VAR60);
                            if (VAR13)
                            {
                                VAR19->VAR60 = 1000000;
                                VAR19->VAR59 = VAR13;
                            }
                            else
                            {
                                VAR19->VAR60 = 25;
                                VAR19->VAR59 = 1;
                                FUN23(VAR17, 64, VAR19->VAR59, VAR19->VAR60);
                                VAR19->VAR65 = FUN6(VAR7);
                                VAR17->VAR66 = FUN6(VAR7);
                                VAR17->VAR67 = 0;
                                FUN6(VAR7);
                                FUN6(VAR7);
                                if (VAR19->VAR65 * VAR19->VAR59 / VAR19->VAR60 > 3600)
                                {
                                    FUN3(VAR2, VAR68, "");
                                    VAR19->VAR65 = 0;
                                    VAR19->VAR69 = FUN6(VAR7);
                                    VAR19->VAR65 *= FUN24(1, VAR19->VAR69);
                                    FUN3(VAR2, VAR37, "" VAR64 "" VAR64 "", VAR19->VAR60, VAR19->VAR59, VAR19->VAR69);
                                    switch (VAR9)
                                    {
                                    case FUN8('', '', '', ''):
                                        VAR11 = VAR70;
                                        VAR19->VAR69 = 0;
                                        VAR17->VAR71 = FUN25(VAR17->VAR72);
                                        break;
                                    case FUN8('', '', '', ''):
                                        VAR11 = VAR73;
                                        break;
                                    case FUN8('', '', '', ''):
                                        VAR11 = VAR74;
                                        break;
                                    case FUN8('', '', '', ''):
                                        VAR11 = VAR75;
                                        break;
                                    default:
                                        FUN3(VAR2, VAR76, "", VAR9);
                                        if (VAR19->VAR69 < 0)
                                        {
                                            if (VAR2->VAR77 & VAR78)
                                            {
                                                FUN3(VAR2, VAR68, "", VAR19->VAR69, VAR12);
                                                goto VAR34;
                                                FUN3(VAR2, VAR63, ""
                                                                          "",
                                                       VAR19->VAR69, VAR12);
                                                VAR19->VAR69 = 0;
                                                if (VAR19->VAR69 == 0)
                                                {
                                                    VAR17->VAR62 = VAR17->VAR66;
                                                    if (VAR17->VAR62 > 0 && VAR4->VAR30 > 0 && VAR4->VAR32 > VAR4->VAR30)
                                                    {
                                                        FUN3(VAR2, VAR28, "");
                                                        VAR17->VAR62 = FUN20(VAR17->VAR62, VAR4->VAR30, VAR4->VAR32);
                                                        VAR19->VAR79 = VAR19->VAR65;
                                                        FUN14(VAR7, VAR14 - 12 * 4);
                                                        break;
                                                    case FUN8('', '', '', ''):
                                                        if (!VAR14)
                                                            break;
                                                        if (VAR12 >= (unsigned)VAR2->VAR47 || VAR4->VAR58)
                                                        {
                                                            FUN14(VAR7, VAR14);
                                                        }
                                                        else
                                                        {
                                                            uint64_t VAR80 = FUN9(VAR7);
                                                            unsigned VAR81;
                                                            if (VAR80 < VAR23)
                                                                VAR14 = FUN13(VAR14, VAR23 - VAR80);
                                                            VAR17 = VAR2->VAR48[VAR12];
                                                            if (VAR17->VAR49->VAR11 != VAR82)
                                                            {
                                                                FUN14(VAR7, VAR14);
                                                                break;
                                                                switch (VAR11)
                                                                {
                                                                case VAR70:
                                                                    if (VAR22)
                                                                    {
                                                                        VAR17->VAR49->VAR83 = VAR20;
                                                                        VAR17->VAR49->VAR84 = VAR21;
                                                                        VAR17->VAR49->VAR11 = VAR70;
                                                                        VAR17->VAR49->VAR85 = VAR86;
                                                                        FUN14(VAR7, VAR14);
                                                                        break;
                                                                        VAR9 = FUN26(VAR7, VAR17, &VAR81);
                                                                        if (VAR9 == FUN8('', '', '', '') || VAR9 == FUN8('', '', '', ''))
                                                                        {
                                                                            VAR17->VAR49->VAR11 = VAR74;
                                                                            VAR17->VAR49->VAR87 = VAR9;
                                                                            VAR17->VAR49->VAR85 = VAR88;
                                                                            break;
                                                                            if (VAR14 > 10 * 4 && VAR14 < (1 << 30) && VAR14 < VAR4->VAR31)
                                                                            {
                                                                                if (VAR81 == VAR14 - 1 && (VAR81 & 1))
                                                                                {
                                                                                    VAR17->VAR49->VAR89 = VAR81 - 10 * 4;
                                                                                }
                                                                                else
                                                                                    VAR17->VAR49->VAR89 = VAR14 - 10 * 4;
                                                                                if (FUN27(VAR2, VAR17->VAR49, VAR7, VAR17->VAR49->VAR89) < 0)
                                                                                    return FUN28(VAR90);
                                                                                if (VAR17->VAR49->VAR89 & 1)
                                                                                    FUN29(VAR7);
                                                                                if (VAR17->VAR49->VAR89 && (VAR17->VAR49->VAR91 <= 8))
                                                                                {
                                                                                    int VAR92 = (1 << VAR17->VAR49->VAR91) << 2;
                                                                                    const VAR93 *VAR94;
                                                                                    VAR92 = FUN13(VAR92, VAR17->VAR49->VAR89);
                                                                                    VAR94 = VAR17->VAR49->VAR50 + VAR17->VAR49->VAR89 - VAR92;
                                                                                    if (VAR94 - VAR17->VAR49->VAR50 >= 9 && !memcmp(VAR17->VAR49->VAR50 + VAR17->VAR49->VAR89 - 9, "", 9))
                                                                                        VAR94 -= 9;
                                                                                    for (VAR15 = 0; VAR15 < VAR92 / 4; VAR15++)
                                                                                        VAR19->VAR95[VAR15] = 0xFFU << 24 | FUN30(VAR94 + 4 * VAR15);
                                                                                    VAR19->VAR96 = 1;
                                                                                    FUN7("", VAR9, 0);
                                                                                    VAR17->VAR49->VAR11 = VAR70;
                                                                                    VAR17->VAR49->VAR87 = VAR9;
                                                                                    VAR17->VAR49->VAR85 = FUN31(VAR97, VAR9);
                                                                                    if (!VAR17->VAR49->VAR85)
                                                                                    {
                                                                                        char VAR98[32];
                                                                                        FUN32(VAR98, sizeof(VAR98), VAR9);
                                                                                        VAR17->VAR49->VAR85 = FUN31(VAR99, VAR9);
                                                                                        if (VAR17->VAR49->VAR85)
                                                                                            FUN3(VAR2, VAR63, "", VAR98);
                                                                                        VAR17->VAR100 = VAR101;
                                                                                        if (VAR17->VAR49->VAR85 == VAR102 && VAR19->VAR10 == FUN8('', '', '', ''))
                                                                                            VAR17->VAR49->VAR87 = FUN8('', '', '', '');
                                                                                        if (VAR17->VAR49->VAR87 == FUN8('', '', '', ''))
                                                                                            VAR17->VAR100 = VAR103;
                                                                                        if (VAR17->VAR49->VAR85 == VAR104)
                                                                                            VAR17->VAR100 = VAR105;
                                                                                        if (VAR17->VAR49->VAR87 == 0 && VAR17->VAR49->VAR84 > 0 && VAR17->VAR49->VAR89 < 1U << 30)
                                                                                        {
                                                                                            VAR17->VAR49->VAR89 += 9;
                                                                                            if ((VAR25 = FUN33(&VAR17->VAR49->VAR50, VAR17->VAR49->VAR89 + VAR106)) < 0)
                                                                                            {
                                                                                                VAR17->VAR49->VAR89 = 0;
                                                                                                return VAR25;
                                                                                            }
                                                                                            else
                                                                                                memcpy(VAR17->VAR49->VAR50 + VAR17->VAR49->VAR89 - 9, "", 9);
                                                                                            VAR17->VAR49->VAR84 = FUN34(VAR17->VAR49->VAR84);
                                                                                            break;
                                                                                        case VAR73:
                                                                                            VAR25 = FUN35(VAR2, VAR7, VAR17->VAR49, VAR14, 0);
                                                                                            if (VAR25 < 0)
                                                                                                return VAR25;
                                                                                            VAR19->VAR107 = VAR17->VAR49->VAR108;
                                                                                            if (VAR19->VAR69 && VAR17->VAR49->VAR108 && VAR19->VAR69 != VAR17->VAR49->VAR108)
                                                                                            {
                                                                                                FUN3(VAR2, VAR63, "", VAR19->VAR69, VAR17->VAR49->VAR108);
                                                                                                VAR19->VAR69 = VAR17->VAR49->VAR108;
                                                                                                if (VAR14 & 1)
                                                                                                    FUN14(VAR7, 1);
                                                                                                VAR17->VAR100 = VAR109;
                                                                                                if (VAR17->VAR49->VAR85 == VAR110 && VAR17->VAR49->VAR89)
                                                                                                    VAR17->VAR100 = VAR105;
                                                                                                if (VAR17->VAR49->VAR85 == VAR111)
                                                                                                    VAR17->VAR100 = VAR105;
                                                                                                if (VAR19->VAR10 == FUN30(""))
                                                                                                {
                                                                                                    VAR17->VAR49->VAR85 = VAR112;
                                                                                                    VAR17->VAR49->VAR87 = 0;
                                                                                                    VAR19->VAR107 = 0;
                                                                                                    if (VAR22)
                                                                                                    {
                                                                                                        VAR17->VAR49->VAR85 = VAR113;
                                                                                                        VAR19->VAR107 = 0;
                                                                                                        if ((VAR17->VAR49->VAR85 == VAR110 || VAR17->VAR49->VAR85 == VAR111 || VAR17->VAR49->VAR85 == VAR114) && VAR19->VAR107 <= 4 && VAR19->VAR107)
                                                                                                        {
                                                                                                            FUN3(VAR2, VAR28, "", VAR19->VAR107);
                                                                                                            VAR19->VAR107 = 0;
                                                                                                            if (VAR17->VAR49->VAR85 == VAR110 && VAR19->VAR107 == 1024 && VAR19->VAR69 == 1024 || VAR17->VAR49->VAR85 == VAR110 && VAR19->VAR107 == 4096 && VAR19->VAR69 == 4096 || VAR17->VAR49->VAR85 == VAR115 && VAR19->VAR107 == 1152 && VAR19->VAR69 == 1152)
                                                                                                            {
                                                                                                                FUN3(VAR2, VAR28, "");
                                                                                                                VAR19->VAR69 = 0;
                                                                                                                break;
                                                                                                            case VAR74:
                                                                                                                VAR17->VAR49->VAR11 = VAR74;
                                                                                                                VAR17->VAR116 = 1;
                                                                                                                FUN14(VAR7, VAR14);
                                                                                                                break;
                                                                                                            default:
                                                                                                                VAR17->VAR49->VAR11 = VAR75;
                                                                                                                VAR17->VAR49->VAR85 = VAR117;
                                                                                                                VAR17->VAR49->VAR87 = 0;
                                                                                                                FUN14(VAR7, VAR14);
                                                                                                                break;
                                                                                                                break;
                                                                                                            case FUN8('', '', '', ''):
                                                                                                                if (VAR12 >= (unsigned)VAR2->VAR47 || VAR2->VAR48[VAR12]->VAR49->VAR89 || VAR2->VAR48[VAR12]->VAR49->VAR87 == FUN8('', '', '', ''))
                                                                                                                {
                                                                                                                    FUN14(VAR7, VAR14);
                                                                                                                }
                                                                                                                else
                                                                                                                {
                                                                                                                    uint64_t VAR80 = FUN9(VAR7);
                                                                                                                    if (VAR80 < VAR23)
                                                                                                                        VAR14 = FUN13(VAR14, VAR23 - VAR80);
                                                                                                                    VAR17 = VAR2->VAR48[VAR12];
                                                                                                                    if (VAR14 < (1 << 30))
                                                                                                                    {
                                                                                                                        FUN3(VAR2, VAR63, "");
                                                                                                                        if (FUN27(VAR2, VAR17->VAR49, VAR7, VAR14) < 0)
                                                                                                                            return FUN28(VAR90);
                                                                                                                        if (VAR17->VAR49->VAR89 & 1)
                                                                                                                            FUN29(VAR7);
                                                                                                                        VAR25 = FUN36(VAR2, VAR17);
                                                                                                                        if (VAR25 < 0)
                                                                                                                        {
                                                                                                                            FUN3(VAR2, VAR63, "");
                                                                                                                            break;
                                                                                                                        case FUN8('', '', '', ''):
                                                                                                                            VAR24 = FUN9(VAR7);
                                                                                                                            if (VAR7->VAR118 && !(VAR2->VAR119 & VAR120) && VAR4->VAR29 && FUN37(VAR2, 0) < 0 && (VAR2->VAR77 & VAR78))
                                                                                                                                goto VAR34;
                                                                                                                            FUN38(VAR7, VAR24 + VAR14, VAR121);
                                                                                                                            break;
                                                                                                                        case FUN8('', '', '', ''):
                                                                                                                            if (VAR12 < (unsigned)VAR2->VAR47 && VAR14 > 9 * 4)
                                                                                                                            {
                                                                                                                                AVRational VAR122, VAR123;
                                                                                                                                VAR17 = VAR2->VAR48[VAR12];
                                                                                                                                FUN6(VAR7);
                                                                                                                                FUN6(VAR7);
                                                                                                                                FUN6(VAR7);
                                                                                                                                FUN6(VAR7);
                                                                                                                                FUN6(VAR7);
                                                                                                                                VAR123.VAR124 = FUN22(VAR7);
                                                                                                                                VAR123.VAR125 = FUN22(VAR7);
                                                                                                                                VAR122.VAR125 = FUN6(VAR7);
                                                                                                                                VAR122.VAR124 = FUN6(VAR7);
                                                                                                                                FUN6(VAR7);
                                                                                                                                if (VAR123.VAR125 && VAR123.VAR124 && VAR122.VAR125 && VAR122.VAR124)
                                                                                                                                {
                                                                                                                                    VAR17->VAR126 = FUN39(VAR123, VAR122);
                                                                                                                                    FUN3(VAR2, VAR37, "", VAR123.VAR125, VAR123.VAR124, VAR122.VAR125, VAR122.VAR124);
                                                                                                                                    VAR14 -= 9 * 4;
                                                                                                                                    FUN14(VAR7, VAR14);
                                                                                                                                    break;
                                                                                                                                case FUN8('', '', '', ''):
                                                                                                                                    if (VAR2->VAR47)
                                                                                                                                    {
                                                                                                                                        VAR25 = FUN40(VAR2, VAR2->VAR48[VAR2->VAR47 - 1], VAR8, VAR14);
                                                                                                                                        if (VAR25 < 0)
                                                                                                                                            return VAR25;
                                                                                                                                        break;
                                                                                                                                    default:
                                                                                                                                        if (VAR14 > 1000000)
                                                                                                                                        {
                                                                                                                                            char VAR98[32];
                                                                                                                                            FUN32(VAR98, sizeof(VAR98), VAR8);
                                                                                                                                            FUN3(VAR2, VAR68, ""
                                                                                                                                                                    ""
                                                                                                                                                                    "",
                                                                                                                                                   VAR98, VAR14);
                                                                                                                                            if (VAR2->VAR77 & VAR78)
                                                                                                                                                goto VAR34;
                                                                                                                                            VAR4->VAR35 = FUN9(VAR7) - 4;
                                                                                                                                            VAR4->VAR36 = VAR4->VAR31;
                                                                                                                                            goto VAR39;
                                                                                                                                        case FUN8('', '', '', ''):
                                                                                                                                            VAR14 += (VAR14 & 1);
                                                                                                                                            FUN14(VAR7, VAR14);
                                                                                                                                            break;
                                                                                                                                        VAR39:
                                                                                                                                            if (VAR12 != VAR2->VAR47 - 1)
                                                                                                                                            {
                                                                                                                                            VAR34:
                                                                                                                                                return VAR127;
                                                                                                                                                if (!VAR4->VAR128 && VAR7->VAR118)
                                                                                                                                                    FUN41(VAR2);
                                                                                                                                                FUN42(VAR2);
                                                                                                                                                VAR4->VAR128 |= 1;
                                                                                                                                                if ((VAR25 = FUN43(VAR2)) < 0)
                                                                                                                                                    return VAR25;
                                                                                                                                                VAR4->VAR43 |= VAR25 | (VAR2->VAR119 & VAR129);
                                                                                                                                                VAR27 = FUN44(VAR2->VAR41, "", NULL, 0);
                                                                                                                                                if (VAR27 && !strcmp(VAR27->VAR130, ""))
                                                                                                                                                    for (VAR15 = 0; VAR15 < VAR2->VAR47; VAR15++)
                                                                                                                                                    {
                                                                                                                                                        VAR16 *VAR17 = VAR2->VAR48[VAR15];
                                                                                                                                                        if (VAR17->VAR49->VAR85 == VAR131 || VAR17->VAR49->VAR85 == VAR132)
                                                                                                                                                            VAR17->VAR100 = VAR103;
                                                                                                                                                        for (VAR15 = 0; VAR15 < VAR2->VAR47; VAR15++)
                                                                                                                                                        {
                                                                                                                                                            VAR16 *VAR17 = VAR2->VAR48[VAR15];
                                                                                                                                                            if (VAR17->VAR133)
                                                                                                                                                                break;
                                                                                                                                                            if (VAR4->VAR58)
                                                                                                                                                                VAR4->VAR43 = 0;
                                                                                                                                                            if (VAR15 == VAR2->VAR47 && VAR4->VAR43)
                                                                                                                                                            {
                                                                                                                                                                FUN3(VAR2, VAR63, "");
                                                                                                                                                                VAR4->VAR43 = 0;
                                                                                                                                                                if (VAR4->VAR43)
                                                                                                                                                                {
                                                                                                                                                                    FUN3(VAR2, VAR76, "");
                                                                                                                                                                    FUN45(VAR2);
                                                                                                                                                                    FUN46(VAR2, NULL, VAR134);
                                                                                                                                                                    FUN46(VAR2, NULL, VAR135);
                                                                                                                                                                    return 0;