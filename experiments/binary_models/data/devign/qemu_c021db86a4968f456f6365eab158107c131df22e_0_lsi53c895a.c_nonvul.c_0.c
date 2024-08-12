static void FUN1(VAR1 *VAR2)
{
    uint32_t VAR3;
    uint32_t VAR4, VAR5;
    int VAR6;
    int VAR7 = 0;
    VAR2->VAR8 |= VAR9;
VAR10:
    VAR7++;
    VAR3 = FUN2(VAR2, VAR2->VAR11);
    VAR4 = FUN2(VAR2, VAR2->VAR11 + 4);
    VAR5 = 0;
    FUN3("", VAR2->VAR11, VAR3, VAR4);
    VAR2->VAR12 = VAR4;
    VAR2->VAR13 = VAR3 >> 24;
    VAR2->VAR11 += 8;
    switch (VAR3 >> 30)
    {
    case 0:
        if (VAR2->VAR14 & VAR15)
        {
            FUN3("");
            FUN4(VAR2);
            break;
        }
        VAR2->VAR16 = VAR3 & 0xffffff;
        VAR2->VAR17 = VAR2->VAR16;
        if (VAR3 & (1 << 29))
        {
            VAR4 = FUN2(VAR2, VAR4);
        }
        else if (VAR3 & (1 << 28))
        {
            uint32_t VAR18[2];
            int32_t VAR19;
            VAR19 = FUN5(VAR4);
            FUN6(VAR2->VAR20 + VAR19, (VAR21 *)VAR18, 8);
            VAR2->VAR16 = FUN7(VAR18[0]) & 0xffffff;
            VAR2->VAR17 = VAR2->VAR16;
            VAR4 = FUN7(VAR18[1]);
            if (FUN8(VAR2))
                VAR5 = FUN7(VAR18[0]) >> 24;
        }
        if ((VAR2->VAR22 & VAR23) != ((VAR3 >> 24) & 7))
        {
            FUN3("", VAR2->VAR22 & VAR23, (VAR3 >> 24) & 7);
            FUN9(VAR2, VAR24, 0);
            break;
        }
        VAR2->VAR25 = VAR4;
        VAR2->VAR26 = VAR5;
        VAR2->VAR27 = VAR2->VAR11 - 8;
        switch (VAR2->VAR22 & 0x7)
        {
        case VAR28:
            VAR2->VAR29 = 2;
            FUN10(VAR2, 1);
            if (VAR2->VAR29)
                VAR2->VAR29 = 3;
            break;
        case VAR30:
            VAR2->VAR29 = 2;
            FUN10(VAR2, 0);
            if (VAR2->VAR29)
                VAR2->VAR29 = 3;
            break;
        case VAR31:
            FUN11(VAR2);
            break;
        case VAR32:
            FUN12(VAR2);
            break;
        case VAR33:
            FUN13(VAR2);
            break;
        case VAR34:
            FUN14(VAR2);
            break;
        default:
            FUN15("", VAR2->VAR22 & VAR23);
            FUN16(1);
        }
        VAR2->VAR35 = VAR2->VAR16 & 0xff;
        VAR2->VAR36 = (VAR2->VAR36 & 0xfc) | ((VAR2->VAR16 >> 8) & 3);
        VAR2->VAR37 = VAR2->VAR16;
        VAR2->VAR17 -= VAR2->VAR16;
        VAR2->VAR38 = VAR4 + VAR2->VAR16;
        break;
    case 1:
        VAR6 = (VAR3 >> 27) & 7;
        if (VAR6 < 5)
        {
            uint32_t VAR39;
            if (VAR3 & (1 << 25))
            {
                VAR39 = FUN2(VAR2, VAR2->VAR20 + FUN5(VAR3));
            }
            else
            {
                VAR39 = VAR4;
            }
            VAR39 = (VAR39 >> 16) & 0xf;
            if (VAR3 & (1 << 26))
            {
                VAR4 = VAR2->VAR11 + FUN5(VAR4);
            }
            VAR2->VAR25 = VAR4;
            switch (VAR6)
            {
            case 0:
                VAR2->VAR40 = VAR39;
                if (VAR2->VAR41 && (VAR2->VAR42 & 0xf) == VAR39)
                {
                    FUN3("", VAR39);
                    break;
                }
                VAR2->VAR43 |= VAR44;
                VAR2->VAR45 &= ~VAR46;
                if (VAR39 >= VAR47 || !VAR2->VAR48[VAR39])
                {
                    FUN3("", VAR39);
                    FUN9(VAR2, 0, VAR15);
                    FUN17(VAR2);
                    break;
                }
                FUN3("", VAR39, VAR3 & (1 << 3) ? "" : "");
                VAR2->VAR49 = VAR2->VAR48[VAR39];
                VAR2->VAR50 = VAR39 << 8;
                VAR2->VAR45 |= VAR51;
                if (VAR3 & (1 << 3))
                {
                    VAR2->VAR52 |= VAR53;
                }
                FUN18(VAR2, VAR33);
                break;
            case 1:
                FUN3("");
                VAR2->VAR45 &= ~VAR51;
                break;
            case 2:
                FUN19(VAR2);
                break;
            case 3:
                FUN3("", VAR3 & (1 << 3) ? "" : "", VAR3 & (1 << 6) ? "" : "", VAR3 & (1 << 9) ? "" : "", VAR3 & (1 << 10) ? "" : "");
                if (VAR3 & (1 << 3))
                {
                    VAR2->VAR52 |= VAR53;
                    FUN18(VAR2, VAR33);
                }
                if (VAR3 & (1 << 9))
                {
                    FUN15("");
                    FUN16(1);
                }
                if (VAR3 & (1 << 10))
                    VAR2->VAR54 = 1;
                break;
            case 4:
                FUN3("", VAR3 & (1 << 3) ? "" : "", VAR3 & (1 << 6) ? "" : "", VAR3 & (1 << 9) ? "" : "", VAR3 & (1 << 10) ? "" : "");
                if (VAR3 & (1 << 3))
                {
                    VAR2->VAR52 &= ~VAR53;
                }
                if (VAR3 & (1 << 10))
                    VAR2->VAR54 = 0;
                break;
            }
        }
        else
        {
            uint8_t VAR55;
            uint8_t VAR56;
            uint8_t VAR57;
            int VAR58;
            int operator;
            static const char *VAR59[3] = {"", "", ""};
            static const char *VAR60[8] = {"", "", "", "", "", "", "", ""};
            VAR58 = ((VAR3 >> 16) & 0x7f) | (VAR3 & 0x80);
            VAR57 = (VAR3 >> 8) & 0xff;
            VAR6 = (VAR3 >> 27) & 7;
            operator=(VAR3 >> 24) & 7; FUN3 ( "" , VAR59 [ VAR6 - 5 ] , VAR58 , VAR60 [ operator ] , VAR57 , VAR2 -> VAR61 , ( VAR3 & ( 1 << 23 ) ) ? "" : "" ) ;
            VAR55 = VAR56 = 0;
            switch (VAR6)
            {
            case 5:
                VAR55 = VAR2->VAR61;
                VAR56 = VAR57;
                break;
            case 6:
                if (operator)
                    VAR55 = FUN20(VAR2, VAR58);
                VAR56 = VAR57;
                break;
            case 7:
                if (operator)
                    VAR55 = FUN20(VAR2, VAR58);
                if (VAR3 & (1 << 23))
                {
                    VAR56 = VAR2->VAR61;
                }
                else
                {
                    VAR56 = VAR57;
                }
                break;
            }
            switch (operator)
            {
            case 0:
                VAR55 = VAR56;
                break;
            case 1:
                VAR56 = VAR55 >> 7;
                VAR55 = (VAR55 << 1) | VAR2->VAR54;
                VAR2->VAR54 = VAR56;
                break;
            case 2:
                VAR55 |= VAR56;
                break;
            case 3:
                VAR55 ^= VAR56;
                break;
            case 4:
                VAR55 &= VAR56;
                break;
            case 5:
                VAR56 = VAR55 & 1;
                VAR55 = (VAR55 >> 1) | (VAR2->VAR54 << 7);
                VAR2->VAR54 = VAR56;
                break;
            case 6:
                VAR55 += VAR56;
                VAR2->VAR54 = VAR55 < VAR56;
                break;
            case 7:
                VAR55 += VAR56 + VAR2->VAR54;
                if (VAR2->VAR54)
                    VAR2->VAR54 = VAR55 <= VAR56;
                else
                    VAR2->VAR54 = VAR55 < VAR56;
                break;
            }
            switch (VAR6)
            {
            case 5:
            case 7:
                FUN21(VAR2, VAR58, VAR55);
                break;
            case 6:
                VAR2->VAR61 = VAR55;
                break;
            }
        }
        break;
    case 2:
    {
        int VAR62;
        int VAR63;
        if ((VAR3 & 0x002e0000) == 0)
        {
            FUN3("");
            break;
        }
        if (VAR2->VAR14 & VAR15)
        {
            FUN3("");
            FUN4(VAR2);
            break;
        }
        VAR62 = VAR63 = (VAR3 & (1 << 19)) != 0;
        if (VAR62 == VAR63 && (VAR3 & (1 << 21)))
        {
            FUN3("", VAR2->VAR54 == VAR63);
            VAR62 = VAR2->VAR54 != 0;
        }
        if (VAR62 == VAR63 && (VAR3 & (1 << 17)))
        {
            FUN3("", (VAR2->VAR22 & VAR23), VAR63 ? '' : '', ((VAR3 >> 24) & 7));
            VAR62 = (VAR2->VAR22 & VAR23) == ((VAR3 >> 24) & 7);
        }
        if (VAR62 == VAR63 && (VAR3 & (1 << 18)))
        {
            uint8_t VAR64;
            VAR64 = (~VAR3 >> 8) & 0xff;
            FUN3("", VAR2->VAR61, VAR64, VAR63 ? '' : '', VAR3 & VAR64);
            VAR62 = (VAR2->VAR61 & VAR64) == (VAR3 & VAR64);
        }
        if (VAR62 == VAR63)
        {
            if (VAR3 & (1 << 23))
            {
                VAR4 = VAR2->VAR11 + FUN5(VAR4);
            }
            switch ((VAR3 >> 27) & 7)
            {
            case 0:
                FUN3("", VAR4);
                VAR2->VAR11 = VAR4;
                break;
            case 1:
                FUN3("", VAR4);
                VAR2->VAR65 = VAR2->VAR11;
                VAR2->VAR11 = VAR4;
                break;
            case 2:
                FUN3("", VAR2->VAR65);
                VAR2->VAR11 = VAR2->VAR65;
                break;
            case 3:
                FUN3("", VAR2->VAR12);
                if ((VAR3 & (1 << 20)) != 0)
                {
                    VAR2->VAR66 |= VAR67;
                    FUN22(VAR2);
                }
                else
                {
                    FUN23(VAR2, VAR68);
                }
                break;
            default:
                FUN3("");
                FUN23(VAR2, VAR69);
                break;
            }
        }
        else
        {
            FUN3("");
        }
    }
    break;
    case 3:
        if ((VAR3 & (1 << 29)) == 0)
        {
            uint32_t VAR70;
            VAR70 = FUN2(VAR2, VAR2->VAR11);
            VAR2->VAR11 += 4;
            FUN24(VAR2, VAR70, VAR4, VAR3 & 0xffffff);
        }
        else
        {
            uint8_t VAR71[7];
            int VAR58;
            int VAR72;
            int VAR73;
            if (VAR3 & (1 << 28))
            {
                VAR4 = VAR2->VAR20 + FUN5(VAR4);
            }
            VAR72 = (VAR3 & 7);
            VAR58 = (VAR3 >> 16) & 0xff;
            if (VAR3 & (1 << 24))
            {
                FUN6(VAR4, VAR71, VAR72);
                FUN3("", VAR58, VAR72, VAR4, *(int *)VAR71);
                for (VAR73 = 0; VAR73 < VAR72; VAR73++)
                {
                    FUN21(VAR2, VAR58 + VAR73, VAR71[VAR73]);
                }
            }
            else
            {
                FUN3("", VAR58, VAR72, VAR4);
                for (VAR73 = 0; VAR73 < VAR72; VAR73++)
                {
                    VAR71[VAR73] = FUN20(VAR2, VAR58 + VAR73);
                }
                FUN25(VAR4, VAR71, VAR72);
            }
        }
    }
    if (VAR7 > 10000 && !VAR2->VAR29)
    {
        if (!(VAR2->VAR74 & VAR75))
            fprintf(VAR76, "");
        FUN9(VAR2, VAR75, 0);
        FUN17(VAR2);
    }
    else if (VAR2->VAR8 & VAR9 && !VAR2->VAR29)
    {
        if (VAR2->VAR77 & VAR78)
        {
            FUN23(VAR2, VAR79);
        }
        else
        {
            goto VAR10;
        }
    }
    FUN3("");
}