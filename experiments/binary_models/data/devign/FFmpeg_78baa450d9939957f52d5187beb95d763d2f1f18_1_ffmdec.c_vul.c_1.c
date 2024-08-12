static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    VAR6 *VAR7;
    VAR8 *VAR9 = VAR2->VAR9;
    VAR10 *VAR11;
    const VAR12 *VAR13;
    int VAR14, VAR15;
    int VAR16 = 0, VAR17 = -1, VAR18 = -1, VAR19 = -1;
    VAR20 *VAR21;
    char *VAR22;
    VAR4->VAR23 = FUN2(VAR9);
    if (VAR4->VAR23 != VAR24)
    {
        FUN3(VAR2, VAR25, "", VAR4->VAR23, VAR24);
        VAR14 = VAR26;
        VAR4->VAR27 = FUN4(VAR9);
        if (VAR9->VAR28)
        {
            VAR4->VAR29 = FUN5(VAR9);
            if (VAR4->VAR27 && 0)
                FUN6(VAR2);
        }
        else
        {
            VAR4->VAR29 = (FUN7(1) << 63) - 1;
            while (!FUN8(VAR9))
            {
                unsigned VAR30 = FUN2(VAR9);
                unsigned VAR31 = FUN2(VAR9);
                int64_t VAR32 = FUN9(VAR9) + VAR31;
                char VAR33[128];
                if (!VAR30)
                    break;
                switch (VAR30)
                {
                case FUN10('', '', '', ''):
                    if (VAR16++)
                    {
                        VAR14 = FUN11(VAR34);
                        FUN2(VAR9);
                        FUN2(VAR9);
                        break;
                    case FUN10('', '', '', ''):
                        VAR17 = VAR18 = VAR19 = 0;
                        VAR7 = FUN12(VAR2, NULL);
                        if (!VAR7)
                        {
                            VAR14 = FUN11(VAR35);
                            FUN13(VAR7, 64, 1, 1000000);
                            VAR11 = VAR7->VAR11;
                            VAR11->VAR36 = FUN2(VAR9);
                            VAR13 = FUN14(VAR11->VAR36);
                            if (!VAR13)
                            {
                                FUN3(VAR2, VAR25, "", VAR11->VAR36);
                                VAR11->VAR36 = VAR37;
                                VAR11->VAR38 = FUN15(VAR9);
                                if (VAR11->VAR38 != VAR13->VAR39)
                                {
                                    FUN3(VAR2, VAR25, "", VAR13->VAR39, VAR11->VAR38);
                                    VAR11->VAR36 = VAR37;
                                    VAR11->VAR38 = VAR40;
                                    VAR11->VAR41 = FUN2(VAR9);
                                    VAR11->VAR42 = FUN2(VAR9);
                                    VAR11->VAR43 = FUN2(VAR9);
                                    VAR11->VAR44 = FUN2(VAR9);
                                    if (VAR11->VAR42 & VAR45)
                                    {
                                        int VAR31 = FUN2(VAR9);
                                        VAR11->VAR46 = FUN16(VAR31 + VAR47);
                                        if (!VAR11->VAR46)
                                            return FUN11(VAR35);
                                        VAR11->VAR48 = VAR31;
                                        FUN17(VAR9, VAR11->VAR46, VAR31);
                                        break;
                                    case FUN10('', '', '', ''):
                                        if (VAR18++)
                                        {
                                            VAR14 = FUN11(VAR34);
                                            VAR11->VAR49.VAR50 = FUN2(VAR9);
                                            VAR11->VAR49.VAR51 = FUN2(VAR9);
                                            if (VAR11->VAR49.VAR50 <= 0 || VAR11->VAR49.VAR51 <= 0)
                                            {
                                                FUN3(VAR2, VAR25, "", VAR11->VAR49.VAR50, VAR11->VAR49.VAR51);
                                                VAR14 = VAR26;
                                                VAR11->VAR52 = FUN18(VAR9);
                                                VAR11->VAR53 = FUN18(VAR9);
                                                VAR11->VAR54 = FUN18(VAR9);
                                                VAR11->VAR55 = FUN2(VAR9);
                                                VAR11->VAR56 = FUN15(VAR9);
                                                VAR11->VAR57 = FUN15(VAR9);
                                                VAR11->VAR58 = FUN15(VAR9);
                                                VAR11->VAR59 = FUN18(VAR9) / 10000.0;
                                                VAR11->VAR60 = FUN18(VAR9) / 10000.0;
                                                VAR11->VAR61 = FUN2(VAR9);
                                                FUN19(VAR9, VAR62, VAR33, sizeof(VAR33));
                                                VAR11->VAR63 = FUN20(VAR33);
                                                VAR11->VAR64 = FUN2(VAR9);
                                                VAR11->VAR65 = FUN2(VAR9);
                                                VAR11->VAR66 = FUN2(VAR9);
                                                VAR11->VAR67 = FUN21(FUN4(VAR9));
                                                VAR11->VAR68 = FUN21(FUN4(VAR9));
                                                VAR11->VAR69 = FUN21(FUN4(VAR9));
                                                VAR11->VAR70 = FUN21(FUN4(VAR9));
                                                VAR11->VAR71 = FUN2(VAR9);
                                                VAR11->VAR72 = FUN2(VAR9);
                                                VAR11->VAR73 = FUN2(VAR9);
                                                VAR11->VAR74 = FUN2(VAR9);
                                                VAR11->VAR75 = FUN2(VAR9);
                                                VAR11->VAR76 = FUN2(VAR9);
                                                VAR11->VAR77 = FUN2(VAR9);
                                                VAR11->VAR78 = FUN2(VAR9);
                                                VAR11->VAR79 = FUN2(VAR9);
                                                VAR11->VAR80 = FUN21(FUN4(VAR9));
                                                VAR11->VAR81 = FUN2(VAR9);
                                                VAR11->VAR82 = FUN15(VAR9);
                                                VAR11->VAR83 = FUN2(VAR9);
                                                VAR11->VAR84 = FUN2(VAR9);
                                                VAR11->VAR85 = FUN2(VAR9);
                                                VAR11->VAR86 = FUN2(VAR9);
                                                VAR11->VAR87 = FUN2(VAR9);
                                                VAR11->VAR88 = FUN2(VAR9);
                                                VAR11->VAR89 = FUN2(VAR9);
                                                VAR11->VAR59 = FUN21(FUN4(VAR9));
                                                VAR11->VAR60 = FUN21(FUN4(VAR9));
                                                VAR11->VAR58 = FUN2(VAR9);
                                                VAR11->VAR90 = FUN2(VAR9);
                                                break;
                                            case FUN10('', '', '', ''):
                                                if (VAR19++)
                                                {
                                                    VAR14 = FUN11(VAR34);
                                                    VAR11->VAR91 = FUN2(VAR9);
                                                    VAR11->VAR92 = FUN22(VAR9);
                                                    VAR11->VAR93 = FUN22(VAR9);
                                                    break;
                                                case FUN10('', '', '', ''):
                                                    if (VAR17++)
                                                    {
                                                        VAR14 = FUN11(VAR34);
                                                        VAR21 = FUN23(VAR11->VAR36);
                                                        if (VAR21 && VAR21->VAR94 && VAR21->VAR95)
                                                        {
                                                            VAR22 = FUN24(VAR31 + 1);
                                                            if (!VAR22)
                                                            {
                                                                VAR14 = FUN11(VAR35);
                                                                FUN19(VAR9, VAR31, VAR22, VAR31 + 1);
                                                                if ((VAR14 = FUN25(VAR7, &VAR22)) < 0)
                                                                    break;
                                                            case FUN10('', '', '', ''):
                                                                if (VAR18++ || !VAR31)
                                                                {
                                                                    VAR14 = FUN11(VAR34);
                                                                    VAR22 = FUN24(VAR31);
                                                                    if (!VAR22)
                                                                    {
                                                                        VAR14 = FUN11(VAR35);
                                                                        FUN19(VAR9, VAR62, VAR22, VAR31);
                                                                        FUN26(VAR11, VAR22, "", "");
                                                                        if ((VAR14 = FUN25(VAR7, &VAR22)) < 0)
                                                                            break;
                                                                    case FUN10('', '', '', ''):
                                                                        if (VAR19++ || !VAR31)
                                                                        {
                                                                            VAR14 = FUN11(VAR34);
                                                                            VAR22 = FUN24(VAR31);
                                                                            if (!VAR22)
                                                                            {
                                                                                VAR14 = FUN11(VAR35);
                                                                                FUN19(VAR9, VAR62, VAR22, VAR31);
                                                                                FUN26(VAR11, VAR22, "", "");
                                                                                if ((VAR14 = FUN25(VAR7, &VAR22)) < 0)
                                                                                    break;
                                                                                FUN27(VAR9, VAR32, VAR96);
                                                                                for (VAR15 = 0; VAR15 < VAR2->VAR97; VAR15++)
                                                                                    FUN28(VAR2->VAR98[VAR15]->VAR99, VAR2->VAR98[VAR15]->VAR11);
                                                                                while ((FUN9(VAR9) % VAR4->VAR23) != 0 && !VAR9->VAR100)
                                                                                    FUN15(VAR9);
                                                                                VAR4->VAR101 = VAR4->VAR102;
                                                                                VAR4->VAR103 = VAR4->VAR102;
                                                                                VAR4->VAR104 = 0;
                                                                                VAR4->VAR105 = 0;
                                                                                VAR4->VAR106 = VAR107;
                                                                                VAR4->VAR108 = 1;
                                                                                return 0;
                                                                            VAR109:
                                                                                FUN29(VAR2);
                                                                                return VAR14;