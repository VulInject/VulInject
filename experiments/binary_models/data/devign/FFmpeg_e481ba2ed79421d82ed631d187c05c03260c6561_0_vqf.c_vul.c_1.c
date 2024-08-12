static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    VAR6 *VAR7 = FUN2(VAR2, NULL);
    int VAR8;
    int VAR9 = -1;
    int VAR10;
    int VAR11 = 0;
    int VAR12;
    uint8_t VAR13[12];
    if (!VAR7)
        return FUN3(VAR14);
    FUN4(VAR2->VAR15, 12);
    VAR10 = FUN5(VAR2->VAR15);
    VAR7->VAR16->VAR17 = VAR18;
    VAR7->VAR16->VAR19 = VAR20;
    VAR7->VAR21 = 0;
    do
    {
        int VAR22;
        VAR8 = FUN6(VAR2->VAR15);
        if (VAR8 == FUN7('', '', '', ''))
            break;
        VAR22 = FUN5(VAR2->VAR15);
        if ((unsigned)VAR22 > VAR23 / 2)
        {
            FUN8(VAR2, VAR24, "");
            VAR10 -= 8;
            switch (VAR8)
            {
            case FUN7('', '', '', ''):
                FUN9(VAR2->VAR15, VAR13, 12);
                VAR7->VAR16->VAR25 = FUN10(VAR13) + 1;
                VAR11 = FUN10(VAR13 + 4);
                VAR9 = FUN10(VAR13 + 8);
                FUN4(VAR2->VAR15, VAR22 - 12);
                VAR7->VAR16->VAR26 = VAR11 * 1000;
                break;
            case FUN7('', '', '', ''):
            {
                char VAR27[8] = {0};
                int VAR12 = FUN5(VAR2->VAR15);
                snprintf(VAR27, sizeof(VAR27), "", VAR12);
                FUN11(&VAR2->VAR28, "", VAR27, 0);
                break;
            case FUN7('', '', '', ''):
            case FUN7('', '', '', ''):
            case FUN7('', '', '', ''):
            case FUN7('', '', '', ''):
            case FUN7('', '', '', ''):
            case FUN7('', '', '', ''):
                FUN4(VAR2->VAR15, FUN12(VAR22, VAR10));
                break;
            default:
                FUN13(VAR2, VAR8, VAR22, VAR10);
                break;
                VAR10 -= VAR22;
            }
                while (VAR10 >= 0)
                    ;
                switch (VAR9)
                {
                case -1:
                    FUN8(VAR2, VAR24, "");
                case 44:
                    VAR7->VAR16->VAR29 = 44100;
                    break;
                case 22:
                    VAR7->VAR16->VAR29 = 22050;
                    break;
                case 11:
                    VAR7->VAR16->VAR29 = 11025;
                    break;
                default:
                    VAR7->VAR16->VAR29 = VAR9 * 1000;
                    break;
                    switch (((VAR7->VAR16->VAR29 / 1000) << 8) + VAR11 / VAR7->VAR16->VAR25)
                    {
                    case (11 << 8) + 8:
                    case (8 << 8) + 8:
                    case (11 << 8) + 10:
                    case (22 << 8) + 32:
                        VAR12 = 512;
                        break;
                    case (16 << 8) + 16:
                    case (22 << 8) + 20:
                    case (22 << 8) + 24:
                        VAR12 = 1024;
                        break;
                    case (44 << 8) + 40:
                    case (44 << 8) + 48:
                        VAR12 = 2048;
                        break;
                    default:
                        FUN8(VAR2, VAR24, "", VAR7->VAR16->VAR29, VAR7->VAR16->VAR26);
                        VAR4->VAR30 = VAR7->VAR16->VAR26 * VAR12 / VAR7->VAR16->VAR29;
                        FUN14(VAR7, 64, VAR12, VAR7->VAR16->VAR29);
                        if (!(VAR7->VAR16->VAR31 = FUN15(12 + VAR32)))
                            return FUN3(VAR14);
                        VAR7->VAR16->VAR33 = 12;
                        memcpy(VAR7->VAR16->VAR31, VAR13, 12);
                        FUN16(VAR2, NULL, VAR34);
                        return 0;