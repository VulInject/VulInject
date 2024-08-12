static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    const VAR7 *VAR8 = VAR6->VAR3;
    int VAR9 = VAR6->VAR10, VAR11 = 0, VAR12;
    VAR13 *VAR14 = VAR2->VAR15;
    VAR16 *VAR17 = &VAR14->VAR17;
    VAR18 *VAR19 = VAR3;
    VAR7 *VAR20 = NULL;
    const VAR7 *VAR21 = VAR8, *VAR22 = NULL;
    int VAR23, VAR24 = -1;
    struct
    {
        VAR7 *VAR8;
        GetBitContext VAR25;
        int VAR26;
    } *VAR27 = NULL, *VAR28;
    VAR14->VAR29 = 0;
    if (VAR17->VAR30 & VAR31)
        VAR17->VAR32 = 1;
    if (VAR9 == 0 || (VAR9 == 4 && FUN2(VAR8) == VAR33))
    {
        if (VAR17->VAR32 == 0 && VAR17->VAR34)
        {
            *VAR19 = VAR17->VAR34->VAR35;
            VAR17->VAR34 = NULL;
            *VAR4 = sizeof(VAR18);
            return VAR9;
            if (VAR17->VAR2->VAR36->VAR37 & VAR38)
            {
                if (VAR14->VAR39 < VAR40)
                    VAR2->VAR41 = VAR42;
                else
                    VAR2->VAR41 = VAR43;
                if (VAR2->VAR44 == VAR45 || VAR2->VAR44 == VAR46)
                {
                    int VAR47 = 0;
                    VAR20 = FUN3(VAR9 + VAR48);
                    if (FUN4(FUN2(VAR8)))
                    {
                        const VAR7 *VAR49, *VAR50, *VAR51;
                        int VAR10;
                        VAR51 = VAR8;
                        for (VAR49 = VAR8, VAR50 = VAR8 + VAR9; VAR51 < VAR50; VAR49 = VAR51)
                        {
                            VAR51 = FUN5(VAR49 + 4, VAR50);
                            VAR10 = VAR51 - VAR49 - 4;
                            if (VAR10 <= 0)
                                continue;
                            switch (FUN2(VAR49))
                            {
                            case VAR52:
                                if (VAR2->VAR53 || VAR17->VAR2->VAR36->VAR37 & VAR38)
                                    VAR21 = VAR49;
                                VAR47 = FUN6(VAR49 + 4, VAR10, VAR20);
                                break;
                            case VAR54:
                            {
                                int VAR55;
                                if (VAR2->VAR53 || VAR17->VAR2->VAR36->VAR37 & VAR38)
                                    VAR22 = VAR49;
                                VAR28 = FUN7(VAR27, sizeof(*VAR27) * (VAR11 + 1));
                                if (!VAR28)
                                    VAR27 = VAR28;
                                VAR27[VAR11].VAR8 = FUN3(VAR9 + VAR48);
                                if (!VAR27[VAR11].VAR8)
                                    VAR55 = FUN6(VAR49 + 4, VAR10, VAR27[VAR11].VAR8);
                                FUN8(&VAR27[VAR11].VAR25, VAR27[VAR11].VAR8, VAR55 << 3);
                                VAR27[VAR11].VAR26 = VAR17->VAR23 >> 1;
                                VAR24 = VAR11 - 1;
                                VAR11++;
                                break;
                            case VAR56:
                                VAR47 = FUN6(VAR49 + 4, VAR10, VAR20);
                                FUN8(&VAR17->VAR25, VAR20, VAR47 * 8);
                                FUN9(VAR2, VAR14, &VAR17->VAR25);
                                break;
                            case VAR57:
                            {
                                int VAR55;
                                VAR28 = FUN7(VAR27, sizeof(*VAR27) * (VAR11 + 1));
                                if (!VAR28)
                                    VAR27 = VAR28;
                                VAR27[VAR11].VAR8 = FUN3(VAR9 + VAR48);
                                if (!VAR27[VAR11].VAR8)
                                    VAR55 = FUN6(VAR49 + 4, VAR10, VAR27[VAR11].VAR8);
                                FUN8(&VAR27[VAR11].VAR25, VAR27[VAR11].VAR8, VAR55 << 3);
                                VAR27[VAR11].VAR26 = FUN10(&VAR27[VAR11].VAR25, 9);
                                VAR11++;
                                break;
                            }
                                else if (VAR14->VAR58 && ((VAR8[0] & 0xC0) == 0xC0))
                                {
                                    const VAR7 *VAR59;
                                    int VAR55;
                                    VAR59 = FUN5(VAR8, VAR8 + VAR9);
                                    if ((VAR59 == (VAR8 + VAR9)) || FUN2(VAR59) != VAR54)
                                    {
                                        FUN11(VAR2, VAR60, "");
                                    }
                                    else
                                    {
                                        if (VAR2->VAR53 || VAR17->VAR2->VAR36->VAR37 & VAR38)
                                            VAR22 = VAR59;
                                        VAR28 = FUN7(VAR27, sizeof(*VAR27) * (VAR11 + 1));
                                        if (!VAR28)
                                            VAR27 = VAR28;
                                        VAR27[VAR11].VAR8 = FUN3(VAR9 + VAR48);
                                        if (!VAR27[VAR11].VAR8)
                                            VAR55 = FUN6(VAR59 + 4, VAR8 + VAR9 - VAR59 - 4, VAR27[VAR11].VAR8);
                                        FUN8(&VAR27[VAR11].VAR25, VAR27[VAR11].VAR8, VAR55 << 3);
                                        VAR27[VAR11].VAR26 = VAR17->VAR23 >> 1;
                                        VAR24 = VAR11 - 1;
                                        VAR11++;
                                        VAR47 = FUN6(VAR8, VAR59 - VAR8, VAR20);
                                    }
                                    else
                                    {
                                        VAR47 = FUN6(VAR8, VAR9, VAR20);
                                        FUN8(&VAR17->VAR25, VAR20, VAR47 * 8);
                                    }
                                    else FUN8(&VAR17->VAR25, VAR8, VAR9 * 8);
                                    if (VAR14->VAR61)
                                    {
                                        VAR14->VAR62 = !FUN12(&VAR17->VAR25);
                                        VAR14->VAR63 = FUN12(&VAR17->VAR25);
                                        if (VAR2->VAR44 == VAR64 || VAR2->VAR44 == VAR46)
                                        {
                                            if (VAR14->VAR62)
                                            {
                                                VAR2->VAR65 = VAR2->VAR66 = VAR14->VAR67;
                                                VAR2->VAR68 = VAR2->VAR69 = VAR14->VAR70;
                                            }
                                            else
                                            {
                                                goto VAR71;
                                                if (VAR17->VAR72 && (VAR17->VAR65 != VAR2->VAR66 || VAR17->VAR68 != VAR2->VAR69))
                                                {
                                                    FUN13(VAR2);
                                                    if (!VAR17->VAR72)
                                                    {
                                                        if (FUN14(VAR2) < 0 || FUN15(VAR14) < 0)
                                                            VAR17->VAR32 = !VAR2->VAR73 || VAR14->VAR61;
                                                        if (VAR14->VAR39 == VAR40)
                                                        {
                                                            VAR17->VAR74 = VAR2->VAR66;
                                                            VAR17->VAR75 = VAR2->VAR69;
                                                            if (VAR17->VAR76 == NULL || VAR17->VAR76->VAR35.VAR3[0])
                                                            {
                                                                int VAR12 = FUN16(VAR17, 0);
                                                                if (VAR12 < 0)
                                                                    VAR17->VAR76 = &VAR17->VAR77[VAR12];
                                                                VAR14->VAR78 = 0;
                                                                if (VAR14->VAR39 < VAR40)
                                                                {
                                                                    if (FUN17(VAR14, &VAR17->VAR25) < 0)
                                                                    {
                                                                    }
                                                                    else
                                                                    {
                                                                        if (FUN18(VAR14, &VAR17->VAR25) < 0)
                                                                        {
                                                                            if (VAR2->VAR79 & VAR80)
                                                                                FUN11(VAR14->VAR17.VAR2, VAR81, "", FUN19(VAR17->VAR82));
                                                                            if ((VAR2->VAR44 == VAR64 || VAR2->VAR44 == VAR46) && VAR17->VAR82 != VAR83)
                                                                            {
                                                                                FUN11(VAR14->VAR17.VAR2, VAR60, "");
                                                                                VAR17->VAR76->VAR35.VAR84 = 0;
                                                                                if (VAR14->VAR85)
                                                                                {
                                                                                    VAR17->VAR76->VAR35.VAR84 = 1;
                                                                                }
                                                                                else if (VAR14->VAR86)
                                                                                {
                                                                                    VAR17->VAR76->VAR35.VAR84 = VAR14->VAR86 * 2;
                                                                                    VAR17->VAR87.VAR35.VAR82 = VAR17->VAR82;
                                                                                    VAR17->VAR87.VAR35.VAR88 = VAR17->VAR82 == VAR83;
                                                                                    if (VAR17->VAR89 == NULL && (VAR17->VAR82 == VAR90 || VAR17->VAR91))
                                                                                    {
                                                                                        if ((VAR2->VAR92 >= VAR93 && VAR17->VAR82 == VAR90) || (VAR2->VAR92 >= VAR94 && VAR17->VAR82 != VAR83) || VAR2->VAR92 >= VAR95)
                                                                                        {
                                                                                            goto VAR50;
                                                                                            if (VAR17->VAR96)
                                                                                            {
                                                                                                if (VAR17->VAR82 == VAR90)
                                                                                                    goto VAR50;
                                                                                                else
                                                                                                    VAR17->VAR96 = 0;
                                                                                                if (FUN20(VAR17, VAR2) < 0)
                                                                                                {
                                                                                                    VAR14->VAR17.VAR76->VAR35.VAR97 = (VAR14->VAR98 != VAR99);
                                                                                                    VAR14->VAR17.VAR76->VAR35.VAR100 = VAR14->VAR101;
                                                                                                    VAR17->VAR102.VAR103 = VAR17->VAR104.VAR105;
                                                                                                    VAR17->VAR102.VAR106 = VAR17->VAR104.VAR107;
                                                                                                    if ((VAR108) && VAR17->VAR2->VAR36->VAR37 & VAR38)
                                                                                                        FUN21(VAR17, VAR21, (VAR8 + VAR9) - VAR21);
                                                                                                    else if (VAR2->VAR53)
                                                                                                    {
                                                                                                        if (VAR14->VAR109 && VAR22)
                                                                                                        {
                                                                                                            VAR17->VAR110 = VAR111 - VAR14->VAR101;
                                                                                                            if (VAR2->VAR53->FUN22(VAR2, VAR21, VAR22 - VAR21) < 0)
                                                                                                                if (VAR2->VAR53->FUN23(VAR2, VAR21, VAR22 - VAR21) < 0)
                                                                                                                    if (VAR2->VAR53->FUN24(VAR2) < 0)
                                                                                                                        VAR17->VAR25 = VAR27[VAR24 + 1].VAR25;
                                                                                                            VAR17->VAR110 = VAR112 + VAR14->VAR101;
                                                                                                            VAR14->VAR29 = 1;
                                                                                                            VAR14->VAR78 = 0;
                                                                                                            if (FUN18(VAR14, &VAR17->VAR25) < 0)
                                                                                                            {
                                                                                                                FUN11(VAR2, VAR60, "");
                                                                                                                VAR14->VAR17.VAR76->VAR35.VAR82 = VAR14->VAR17.VAR82;
                                                                                                                if (VAR2->VAR53->FUN22(VAR2, VAR22, (VAR8 + VAR9) - VAR22) < 0)
                                                                                                                    if (VAR2->VAR53->FUN23(VAR2, VAR22, (VAR8 + VAR9) - VAR22) < 0)
                                                                                                                        if (VAR2->VAR53->FUN24(VAR2) < 0)
                                                                                                            }
                                                                                                            else
                                                                                                            {
                                                                                                                VAR17->VAR110 = VAR113;
                                                                                                                if (VAR2->VAR53->FUN22(VAR2, VAR21, (VAR8 + VAR9) - VAR21) < 0)
                                                                                                                    if (VAR2->VAR53->FUN23(VAR2, VAR21, (VAR8 + VAR9) - VAR21) < 0)
                                                                                                                        if (VAR2->VAR53->FUN24(VAR2) < 0)
                                                                                                            }
                                                                                                            else
                                                                                                            {
                                                                                                                if (VAR14->VAR98 == VAR114 && VAR17->VAR82 == VAR90)
                                                                                                                    goto VAR115;
                                                                                                                FUN25(VAR17);
                                                                                                                VAR14->VAR116 = VAR9 * 8;
                                                                                                                VAR14->VAR117 = VAR17->VAR118;
                                                                                                                if (VAR14->VAR109)
                                                                                                                {
                                                                                                                    VAR7 *VAR28[2];
                                                                                                                    VAR17->VAR87.VAR35.VAR119[0] <<= 1;
                                                                                                                    VAR17->VAR87.VAR35.VAR119[1] <<= 1;
                                                                                                                    VAR17->VAR87.VAR35.VAR119[2] <<= 1;
                                                                                                                    VAR17->VAR119 <<= 1;
                                                                                                                    VAR17->VAR120 <<= 1;
                                                                                                                    VAR28[0] = VAR14->VAR121[0];
                                                                                                                    VAR28[1] = VAR14->VAR121[1];
                                                                                                                    VAR14->VAR121[0] = VAR14->VAR122[0];
                                                                                                                    VAR14->VAR121[1] = VAR14->VAR122[1];
                                                                                                                    VAR14->VAR122[0] = VAR14->VAR123[0];
                                                                                                                    VAR14->VAR122[1] = VAR14->VAR123[1];
                                                                                                                    VAR14->VAR123[0] = VAR28[0];
                                                                                                                    VAR14->VAR123[1] = VAR28[1];
                                                                                                                    VAR23 = VAR17->VAR23 >> VAR14->VAR109;
                                                                                                                    for (VAR12 = 0; VAR12 <= VAR11; VAR12++)
                                                                                                                    {
                                                                                                                        if (VAR12 > 0 && VAR27[VAR12 - 1].VAR26 >= VAR23)
                                                                                                                        {
                                                                                                                            if (VAR14->VAR109 <= 0)
                                                                                                                            {
                                                                                                                                FUN11(VAR14->VAR17.VAR2, VAR60, ""
                                                                                                                                                                 "",
                                                                                                                                       VAR12, VAR27[VAR12 - 1].VAR26, VAR23);
                                                                                                                                continue;
                                                                                                                                VAR14->VAR29 = 1;
                                                                                                                                VAR14->VAR124 = VAR17->VAR118 * VAR17->VAR23 << 1;
                                                                                                                                VAR14->VAR125 = VAR17->VAR126 * VAR17->VAR23 >> 1;
                                                                                                                            }
                                                                                                                            else
                                                                                                                            {
                                                                                                                                VAR14->VAR29 = 0;
                                                                                                                                VAR14->VAR124 = 0;
                                                                                                                                VAR14->VAR125 = 0;
                                                                                                                                if (VAR12)
                                                                                                                                {
                                                                                                                                    VAR14->VAR78 = 0;
                                                                                                                                    if (VAR14->VAR109 && VAR12 == VAR24 + 2)
                                                                                                                                    {
                                                                                                                                        if (FUN18(VAR14, &VAR17->VAR25) < 0)
                                                                                                                                        {
                                                                                                                                            FUN11(VAR14->VAR17.VAR2, VAR60, "");
                                                                                                                                            continue;
                                                                                                                                        }
                                                                                                                                        else if (FUN12(&VAR17->VAR25))
                                                                                                                                        {
                                                                                                                                            VAR14->VAR78 = 1;
                                                                                                                                            if (FUN18(VAR14, &VAR17->VAR25) < 0)
                                                                                                                                            {
                                                                                                                                                FUN11(VAR14->VAR17.VAR2, VAR60, "");
                                                                                                                                                continue;
                                                                                                                                                VAR17->VAR127 = (VAR12 == 0) ? 0 : FUN26(0, VAR27[VAR12 - 1].VAR26 % VAR23);
                                                                                                                                                if (!VAR14->VAR109 || VAR14->VAR29)
                                                                                                                                                    VAR17->VAR128 = (VAR12 == VAR11) ? VAR23 : FUN27(VAR23, VAR27[VAR12].VAR26 % VAR23);
                                                                                                                                                else
                                                                                                                                                    VAR17->VAR128 = (VAR12 <= VAR24 + 1) ? VAR23 : FUN27(VAR23, VAR27[VAR12].VAR26 % VAR23);
                                                                                                                                                if (VAR17->VAR128 <= VAR17->VAR127)
                                                                                                                                                {
                                                                                                                                                    FUN11(VAR14->VAR17.VAR2, VAR60, "", VAR17->VAR128, VAR17->VAR127);
                                                                                                                                                    continue;
                                                                                                                                                    FUN28(VAR14);
                                                                                                                                                    if (VAR12 != VAR11)
                                                                                                                                                        VAR17->VAR25 = VAR27[VAR12].VAR25;
                                                                                                                                                    if (VAR14->VAR109)
                                                                                                                                                    {
                                                                                                                                                        VAR14->VAR29 = 0;
                                                                                                                                                        if (VAR17->VAR82 == VAR90)
                                                                                                                                                        {
                                                                                                                                                            memcpy(VAR14->VAR129, VAR14->VAR130, 2 * (VAR17->VAR131 * (VAR17->VAR23 * 2 + 1) + VAR17->VAR126 * (VAR17->VAR23 + 1) * 2));
                                                                                                                                                            VAR17->VAR87.VAR35.VAR119[0] >>= 1;
                                                                                                                                                            VAR17->VAR87.VAR35.VAR119[1] >>= 1;
                                                                                                                                                            VAR17->VAR87.VAR35.VAR119[2] >>= 1;
                                                                                                                                                            VAR17->VAR119 >>= 1;
                                                                                                                                                            VAR17->VAR120 >>= 1;
                                                                                                                                                            FUN29(VAR17->VAR2, "", FUN30(&VAR17->VAR25), VAR17->VAR25.VAR132);
                                                                                                                                                            if (VAR17->VAR133 && VAR17->VAR82 == VAR90)
                                                                                                                                                                if (!VAR14->VAR109)
                                                                                                                                                                    FUN31(VAR17);
                                                                                                                                                            FUN32(VAR17);
                                                                                                                                                            if (VAR2->VAR44 == VAR64 || VAR2->VAR44 == VAR46)
                                                                                                                                                            {
                                                                                                                                                            VAR71:
                                                                                                                                                                VAR2->VAR65 = VAR2->VAR66 = VAR14->VAR134;
                                                                                                                                                                VAR2->VAR68 = VAR2->VAR69 = VAR14->VAR135;
                                                                                                                                                                if (VAR2->VAR92 >= VAR93)
                                                                                                                                                                    goto VAR50;
                                                                                                                                                                if (FUN33(VAR14, &VAR17->VAR25))
                                                                                                                                                                    *VAR19 = VAR14->VAR136;
                                                                                                                                                                *VAR4 = sizeof(VAR18);
                                                                                                                                                            }
                                                                                                                                                            else
                                                                                                                                                            {
                                                                                                                                                                if (VAR17->VAR82 == VAR90 || VAR17->VAR32)
                                                                                                                                                                {
                                                                                                                                                                    *VAR19 = VAR17->VAR76->VAR35;
                                                                                                                                                                }
                                                                                                                                                                else if (VAR17->VAR89 != NULL)
                                                                                                                                                                {
                                                                                                                                                                    *VAR19 = VAR17->VAR89->VAR35;
                                                                                                                                                                    if (VAR17->VAR89 || VAR17->VAR32)
                                                                                                                                                                    {
                                                                                                                                                                        *VAR4 = sizeof(VAR18);
                                                                                                                                                                        FUN34(VAR17, VAR19);
                                                                                                                                                                    VAR50:
                                                                                                                                                                        FUN35(VAR20);
                                                                                                                                                                        for (VAR12 = 0; VAR12 < VAR11; VAR12++)
                                                                                                                                                                            FUN35(VAR27[VAR12].VAR8);
                                                                                                                                                                        FUN35(VAR27);
                                                                                                                                                                        return VAR9;
                                                                                                                                                                    VAR115:
                                                                                                                                                                        FUN35(VAR20);
                                                                                                                                                                        for (VAR12 = 0; VAR12 < VAR11; VAR12++)
                                                                                                                                                                            FUN35(VAR27[VAR12].VAR8);
                                                                                                                                                                        FUN35(VAR27);
                                                                                                                                                                        return -1