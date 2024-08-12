static void FUN1(VAR1 *VAR2)
{
    uint32_t VAR3;
    uint32_t VAR4;
    int VAR5;
    VAR2->VAR6 |= VAR7;
VAR8:
    VAR3 = FUN2(VAR2, VAR2->VAR9);
    VAR4 = FUN2(VAR2, VAR2->VAR9 + 4);
    FUN3("", VAR2->VAR9, VAR3, VAR4);
    VAR2->VAR10 = VAR4;
    VAR2->VAR11 = VAR3 >> 24;
    VAR2->VAR9 += 8;
    switch (VAR3 >> 30)
    {
    case 0:
        if (VAR2->VAR12 & VAR13)
        {
            FUN3("");
            FUN4(VAR2);
            break;
        }
        VAR2->VAR14 = VAR3 & 0xffffff;
        VAR2->VAR15 = VAR2->VAR14;
        if (VAR3 & (1 << 29))
        {
            VAR4 = FUN2(VAR2, VAR4);
        }
        else if (VAR3 & (1 << 28))
        {
            uint32_t VAR16[2];
            int32_t VAR17;
            VAR17 = FUN5(VAR4);
            FUN6(VAR2->VAR18 + VAR17, (VAR19 *)VAR16, 8);
            VAR2->VAR14 = FUN7(VAR16[0]);
            VAR2->VAR15 = VAR2->VAR14;
            VAR4 = FUN7(VAR16[1]);
        }
        if ((VAR2->VAR20 & VAR21) != ((VAR3 >> 24) & 7))
        {
            FUN3("", VAR2->VAR20 & VAR21, (VAR3 >> 24) & 7);
            FUN8(VAR2, VAR22, 0);
            break;
        }
        VAR2->VAR23 = VAR4;
        VAR2->VAR24 = VAR2->VAR9 - 8;
        switch (VAR2->VAR20 & 0x7)
        {
        case VAR25:
            VAR2->VAR26 = 2;
            FUN9(VAR2, 1);
            if (VAR2->VAR26)
                VAR2->VAR26 = 3;
            break;
        case VAR27:
            VAR2->VAR26 = 2;
            FUN9(VAR2, 0);
            if (VAR2->VAR26)
                VAR2->VAR26 = 3;
            break;
        case VAR28:
            FUN10(VAR2);
            break;
        case VAR29:
            FUN11(VAR2);
            break;
        case VAR30:
            FUN12(VAR2);
            break;
        case VAR31:
            FUN13(VAR2);
            break;
        default:
            FUN14("", VAR2->VAR20 & VAR21);
            FUN15(1);
        }
        VAR2->VAR32 = VAR2->VAR14 & 0xff;
        VAR2->VAR33 = (VAR2->VAR33 & 0xfc) | ((VAR2->VAR14 >> 8) & 3);
        VAR2->VAR34 = VAR2->VAR14;
        VAR2->VAR15 -= VAR2->VAR14;
        VAR2->VAR35 = VAR4 + VAR2->VAR14;
        break;
    case 1:
        VAR5 = (VAR3 >> 27) & 7;
        if (VAR5 < 5)
        {
            uint32_t VAR36;
            if (VAR3 & (1 << 25))
            {
                VAR36 = FUN2(VAR2, VAR2->VAR18 + FUN5(VAR3));
            }
            else
            {
                VAR36 = VAR4;
            }
            VAR36 = (VAR36 >> 16) & 0xf;
            if (VAR3 & (1 << 26))
            {
                VAR4 = VAR2->VAR9 + FUN5(VAR4);
            }
            VAR2->VAR23 = VAR4;
            switch (VAR5)
            {
            case 0:
                VAR2->VAR37 = VAR36;
                if (VAR2->VAR38 && (VAR2->VAR39 & 0xf) == VAR36)
                {
                    FUN3("", VAR36);
                    break;
                }
                VAR2->VAR40 |= VAR41;
                VAR2->VAR42 &= ~VAR43;
                if (VAR36 >= VAR44 || !VAR2->VAR45[VAR36])
                {
                    FUN3("", VAR36);
                    FUN8(VAR2, 0, VAR13);
                    FUN16(VAR2);
                    break;
                }
                FUN3("", VAR36, VAR3 & (1 << 3) ? "" : "");
                VAR2->VAR46 = VAR2->VAR45[VAR36];
                VAR2->VAR47 = VAR36 << 8;
                VAR2->VAR42 |= VAR48;
                if (VAR3 & (1 << 3))
                {
                    VAR2->VAR49 |= VAR50;
                }
                FUN17(VAR2, VAR30);
                break;
            case 1:
                FUN3("");
                VAR2->VAR42 &= ~VAR48;
                break;
            case 2:
                FUN18(VAR2);
                break;
            case 3:
                FUN3("", VAR3 & (1 << 3) ? "" : "", VAR3 & (1 << 6) ? "" : "", VAR3 & (1 << 9) ? "" : "", VAR3 & (1 << 10) ? "" : "");
                if (VAR3 & (1 << 3))
                {
                    VAR2->VAR49 |= VAR50;
                    FUN17(VAR2, VAR30);
                }
                if (VAR3 & (1 << 9))
                {
                    FUN14("");
                    FUN15(1);
                }
                if (VAR3 & (1 << 10))
                    VAR2->VAR51 = 1;
                break;
            case 4:
                FUN3("", VAR3 & (1 << 3) ? "" : "", VAR3 & (1 << 6) ? "" : "", VAR3 & (1 << 9) ? "" : "", VAR3 & (1 << 10) ? "" : "");
                if (VAR3 & (1 << 3))
                {
                    VAR2->VAR49 &= ~VAR50;
                }
                if (VAR3 & (1 << 10))
                    VAR2->VAR51 = 0;
                break;
            }
        }
        else
        {
            uint8_t VAR52;
            uint8_t VAR53;
            uint8_t VAR54;
            int VAR55;
            int operator;
            static const char *VAR56[3] = {"", "", ""};
            static const char *VAR57[8] = {"", "", "", "", "", "", "", ""};
            VAR55 = ((VAR3 >> 16) & 0x7f) | (VAR3 & 0x80);
            VAR54 = (VAR3 >> 8) & 0xff;
            VAR5 = (VAR3 >> 27) & 7;
            operator=(VAR3 >> 24) & 7; FUN3 ( "" , VAR56 [ VAR5 - 5 ] , VAR55 , VAR57 [ operator ] , VAR54 , VAR2 -> VAR58 , ( VAR3 & ( 1 << 23 ) ) ? "" : "" ) ;
            VAR52 = VAR53 = 0;
            switch (VAR5)
            {
            case 5:
                VAR52 = VAR2->VAR58;
                VAR53 = VAR54;
                break;
            case 6:
                if (operator)
                    VAR52 = FUN19(VAR2, VAR55);
                VAR53 = VAR54;
                break;
            case 7:
                if (operator)
                    VAR52 = FUN19(VAR2, VAR55);
                if (VAR3 & (1 << 23))
                {
                    VAR53 = VAR2->VAR58;
                }
                else
                {
                    VAR53 = VAR54;
                }
                break;
            }
            switch (operator)
            {
            case 0:
                VAR52 = VAR53;
                break;
            case 1:
                VAR53 = VAR52 >> 7;
                VAR52 = (VAR52 << 1) | VAR2->VAR51;
                VAR2->VAR51 = VAR53;
                break;
            case 2:
                VAR52 |= VAR53;
                break;
            case 3:
                VAR52 ^= VAR53;
                break;
            case 4:
                VAR52 &= VAR53;
                break;
            case 5:
                VAR53 = VAR52 & 1;
                VAR52 = (VAR52 >> 1) | (VAR2->VAR51 << 7);
                VAR2->VAR51 = VAR53;
                break;
            case 6:
                VAR52 += VAR53;
                VAR2->VAR51 = VAR52 < VAR53;
                break;
            case 7:
                VAR52 += VAR53 + VAR2->VAR51;
                if (VAR2->VAR51)
                    VAR2->VAR51 = VAR52 <= VAR53;
                else
                    VAR2->VAR51 = VAR52 < VAR53;
                break;
            }
            switch (VAR5)
            {
            case 5:
            case 7:
                FUN20(VAR2, VAR55, VAR52);
                break;
            case 6:
                VAR2->VAR58 = VAR52;
                break;
            }
        }
        break;
    case 2:
    {
        int VAR59;
        int VAR60;
        if ((VAR3 & 0x002e0000) == 0)
        {
            FUN3("");
            break;
        }
        if (VAR2->VAR12 & VAR13)
        {
            FUN3("");
            FUN4(VAR2);
            break;
        }
        VAR59 = VAR60 = (VAR3 & (1 << 19)) != 0;
        if (VAR59 == VAR60 && (VAR3 & (1 << 21)))
        {
            FUN3("", VAR2->VAR51 == VAR60);
            VAR59 = VAR2->VAR51 != 0;
        }
        if (VAR59 == VAR60 && (VAR3 & (1 << 17)))
        {
            FUN3("", (VAR2->VAR20 & VAR21), VAR60 ? '' : '', ((VAR3 >> 24) & 7));
            VAR59 = (VAR2->VAR20 & VAR21) == ((VAR3 >> 24) & 7);
        }
        if (VAR59 == VAR60 && (VAR3 & (1 << 18)))
        {
            uint8_t VAR61;
            VAR61 = (~VAR3 >> 8) & 0xff;
            FUN3("", VAR2->VAR58, VAR61, VAR60 ? '' : '', VAR3 & VAR61);
            VAR59 = (VAR2->VAR58 & VAR61) == (VAR3 & VAR61);
        }
        if (VAR59 == VAR60)
        {
            if (VAR3 & (1 << 23))
            {
                VAR4 = VAR2->VAR9 + FUN5(VAR4);
            }
            switch ((VAR3 >> 27) & 7)
            {
            case 0:
                FUN3("", VAR4);
                VAR2->VAR9 = VAR4;
                break;
            case 1:
                FUN3("", VAR4);
                VAR2->VAR62 = VAR2->VAR9;
                VAR2->VAR9 = VAR4;
                break;
            case 2:
                FUN3("", VAR2->VAR62);
                VAR2->VAR9 = VAR2->VAR62;
                break;
            case 3:
                FUN3("", VAR2->VAR10);
                if ((VAR3 & (1 << 20)) != 0)
                {
                    VAR2->VAR63 |= VAR64;
                    FUN21(VAR2);
                }
                else
                {
                    FUN22(VAR2, VAR65);
                }
                break;
            default:
                FUN3("");
                FUN22(VAR2, VAR66);
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
            uint32_t VAR67;
            VAR67 = FUN2(VAR2, VAR2->VAR9);
            VAR2->VAR9 += 4;
            FUN23(VAR2, VAR67, VAR4, VAR3 & 0xffffff);
        }
        else
        {
            uint8_t VAR68[7];
            int VAR55;
            int VAR69;
            int VAR70;
            if (VAR3 & (1 << 28))
            {
                VAR4 = VAR2->VAR18 + FUN5(VAR4);
            }
            VAR69 = (VAR3 & 7);
            VAR55 = (VAR3 >> 16) & 0xff;
            if (VAR3 & (1 << 24))
            {
                FUN6(VAR4, VAR68, VAR69);
                FUN3("", VAR55, VAR69, VAR4, *(int *)VAR68);
                for (VAR70 = 0; VAR70 < VAR69; VAR70++)
                {
                    FUN20(VAR2, VAR55 + VAR70, VAR68[VAR70]);
                }
            }
            else
            {
                FUN3("", VAR55, VAR69, VAR4);
                for (VAR70 = 0; VAR70 < VAR69; VAR70++)
                {
                    VAR68[VAR70] = FUN19(VAR2, VAR55 + VAR70);
                }
                FUN24(VAR4, VAR68, VAR69);
            }
        }
    }
    if (VAR2->VAR6 & VAR7 && !VAR2->VAR26)
    {
        if (VAR2->VAR71 & VAR72)
        {
            FUN22(VAR2, VAR73);
        }
        else
        {
            goto VAR8;
        }
    }
    FUN3("");
}