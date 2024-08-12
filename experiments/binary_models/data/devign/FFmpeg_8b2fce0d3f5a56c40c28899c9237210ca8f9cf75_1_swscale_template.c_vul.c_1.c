static inline void FUN1(VAR1)(VAR2 *VAR3, VAR4 *VAR5, VAR4 *VAR6, VAR4 *VAR7, VAR4 *VAR8, VAR9 *VAR10, int VAR11, int VAR12, int VAR13, int VAR14)
{
    int VAR15 = VAR12 ^ 4095;
    int VAR16 = VAR13 ^ 4095;
    int VAR17;
    if (VAR18 & VAR19)
    {
        switch (VAR20)
        {
        case VAR21:
            asm volatile(VAR22 ""
                                            ""
                                            ""
                                            ""
                                            "" FUN2(% % VAR23, (% 4, % % VAR24, 4)) FUN2(% % VAR25, 8(% 4, % % VAR24, 4)) "" VAR26 ""
                                                                                                                                                      "" VAR26 ""
                                                                                                                                                      ""
                         :
                         : ""(VAR5), ""(VAR6), ""(VAR7), ""(VAR8), ""(VAR10), ""((long)VAR11), ""(VAR15), ""(VAR16)
                         : "" VAR26);
            break;
        case VAR27:
            asm volatile(VAR22 ""
                                            ""
                                            ""
                                            ""
                                            ""
                                            ""
                                            ""
                                            "" FUN3(VAR28) ""
                                                                       "" FUN3(VAR29) ""
                                                                                                  ""
                                                                                                  ""
                                                                                                  ""
                                                                                                  ""
                                                                                                  ""
                                                                                                  ""
                                                                                                  ""
                                                                                                  ""
                                                                                                  "" VAR30 ""
                                                                                                  "" VAR26 "" VAR30 ""
                                                                                                  "" VAR30 "" VAR26 ""
                                                                                                  "" VAR30 "" VAR26 ""
                                                                                                  "" VAR30 "" VAR26 ""
                                                                                                  ""
                                                                                                  "" VAR30 "" VAR26 ""
                                                                                                  "" VAR30 "" VAR26 ""
                                                                                                  "" VAR26 ""
                                                                                                  "" VAR26 ""
                                                                                                  ""
                         :
                         : ""(VAR5), ""(VAR6), ""(VAR7), ""(VAR8), ""(VAR10), ""(VAR11), ""(VAR15), ""(VAR16)
                         : "" VAR26, "" VAR30);
            break;
        case VAR31:
            asm volatile(VAR22 "" FUN3(VAR32) ""
                                                                        "" FUN3(VAR33) ""
                                                                                                    "" FUN3(VAR34) ""
                                                                                                                                ""
                                                                                                                                ""
                                                                                                                                ""
                                                                                                                                ""
                                                                                                                                ""
                                                                                                                                ""
                                                                                                                                "" FUN3(VAR35) ""
                                                                                                                                                            "" FUN3(VAR36) ""
                                                                                                                                                                                        ""
                                                                                                                                                                                        "" FUN2(% % VAR37, (% 4, % % VAR24, 2)) "" VAR26 ""
                                                                                                                                                                                                                                                                      "" VAR26 ""
                                                                                                                                                                                                                                                                      ""
                         :
                         : ""(VAR5), ""(VAR6), ""(VAR7), ""(VAR8), ""(VAR10), ""(VAR11), ""(VAR15), ""(VAR16)
                         : "" VAR26);
            break;
        case VAR38:
            asm volatile(VAR22 "" FUN3(VAR39) ""
                                                                        "" FUN3(VAR33) ""
                                                                                                    "" FUN3(VAR34) ""
                                                                                                                                ""
                                                                                                                                ""
                                                                                                                                ""
                                                                                                                                ""
                                                                                                                                ""
                                                                                                                                ""
                                                                                                                                "" FUN3(VAR40) ""
                                                                                                                                                            "" FUN3(VAR41) ""
                                                                                                                                                                                        ""
                                                                                                                                                                                        "" FUN2(% % VAR37, (% 4, % % VAR24, 2)) "" VAR26 ""
                                                                                                                                                                                                                                                                      "" VAR26 ""
                                                                                                                                                                                                                                                                      ""
                         :
                         : ""(VAR5), ""(VAR6), ""(VAR7), ""(VAR8), ""(VAR10), ""(VAR11), ""(VAR15), ""(VAR16)
                         : "" VAR26);
            break;
        case VAR42:
        case VAR21:
            if (VAR20 == VAR21)
            {
                int VAR17;
                VAR10++;
                for (VAR17 = 0; VAR17 < VAR11; VAR17++)
                {
                    int VAR43 = VAR44[((VAR5[VAR17] * VAR15 + VAR6[VAR17] * VAR12) >> 19)];
                    int VAR45 = ((VAR7[VAR17] * VAR16 + VAR8[VAR17] * VAR13) >> 19);
                    int VAR46 = ((VAR7[VAR17 + 2048] * VAR16 + VAR8[VAR17 + 2048] * VAR13) >> 19);
                    VAR10[0] = VAR47[((VAR43 + VAR48[VAR45]) >> 13)];
                    VAR10[1] = VAR47[((VAR43 + VAR49[VAR46] + VAR50[VAR45]) >> 13)];
                    VAR10[2] = VAR47[((VAR43 + VAR51[VAR46]) >> 13)];
                    VAR10 += 4;
                }
            }
            else if (VAR20 == VAR27)
            {
                int VAR17;
                for (VAR17 = 0; VAR17 < VAR11; VAR17++)
                {
                    int VAR43 = VAR44[((VAR5[VAR17] * VAR15 + VAR6[VAR17] * VAR12) >> 19)];
                    int VAR45 = ((VAR7[VAR17] * VAR16 + VAR8[VAR17] * VAR13) >> 19);
                    int VAR46 = ((VAR7[VAR17 + 2048] * VAR16 + VAR8[VAR17 + 2048] * VAR13) >> 19);
                    VAR10[0] = VAR47[((VAR43 + VAR48[VAR45]) >> 13)];
                    VAR10[1] = VAR47[((VAR43 + VAR49[VAR46] + VAR50[VAR45]) >> 13)];
                    VAR10[2] = VAR47[((VAR43 + VAR51[VAR46]) >> 13)];
                    VAR10 += 3;
                }
            }
            else if (VAR20 == VAR38)
            {
                int VAR17;
                for (VAR17 = 0; VAR17 < VAR11; VAR17++)
                {
                    int VAR43 = VAR44[((VAR5[VAR17] * VAR15 + VAR6[VAR17] * VAR12) >> 19)];
                    int VAR45 = ((VAR7[VAR17] * VAR16 + VAR8[VAR17] * VAR13) >> 19);
                    int VAR46 = ((VAR7[VAR17 + 2048] * VAR16 + VAR8[VAR17 + 2048] * VAR13) >> 19);
                    ((VAR4 *)VAR10)[VAR17] = VAR52[(VAR43 + VAR48[VAR45]) >> 13] | VAR53[(VAR43 + VAR49[VAR46] + VAR50[VAR45]) >> 13] | VAR54[(VAR43 + VAR51[VAR46]) >> 13];
                }
            }
            else if (VAR20 == VAR31)
            {
                int VAR17;
                for (VAR17 = 0; VAR17 < VAR11; VAR17++)
                {
                    int VAR43 = VAR44[((VAR5[VAR17] * VAR15 + VAR6[VAR17] * VAR12) >> 19)];
                    int VAR45 = ((VAR7[VAR17] * VAR16 + VAR8[VAR17] * VAR13) >> 19);
                    int VAR46 = ((VAR7[VAR17 + 2048] * VAR16 + VAR8[VAR17 + 2048] * VAR13) >> 19);
                    ((VAR4 *)VAR10)[VAR17] = VAR55[(VAR43 + VAR48[VAR45]) >> 13] | VAR56[(VAR43 + VAR49[VAR46] + VAR50[VAR45]) >> 13] | VAR57[(VAR43 + VAR51[VAR46]) >> 13];
                }
            }
        }
        else
        {
            switch (VAR3->VAR20)
            {
            case VAR21:
                asm volatile("" VAR30 "" VAR58 ""
                             "" VAR30 ""
                             "" VAR59 "" FUN4(% % VAR60, % 5) FUN5(% % VAR61, 8280(% 5), % % VAR60) "" VAR59 ""
                                                                                                                                                      "" VAR58 "" VAR30 ""
                             :
                             : ""(VAR5), ""(VAR6), ""(VAR7), ""(VAR8), ""(VAR10), ""(&VAR3->VAR62));
                return;
            case VAR27:
                asm volatile("" VAR30 "" VAR58 ""
                             "" VAR30 ""
                             "" VAR59 "" FUN4(% % VAR60, % 5) FUN6(% % VAR61, 8280(% 5), % % VAR60) "" VAR59 ""
                                                                                                                                                      "" VAR58 "" VAR30 ""
                             :
                             : ""(VAR5), ""(VAR6), ""(VAR7), ""(VAR8), ""(VAR10), ""(&VAR3->VAR62));
                return;
            case VAR31:
                asm volatile("" VAR30 "" VAR58 ""
                             "" VAR30 ""
                             "" VAR59 "" FUN4(% % VAR60, % 5) "" FUN3(VAR34) ""
                                                                                                                                       "" FUN3(VAR32) ""
                                                                                                                                                                   "" FUN3(VAR33) "" FUN7(% % VAR61, 8280(% 5), % % VAR60) "" VAR59 ""
                                                                                                                                                                                                                                                              "" VAR58 "" VAR30 ""
                             :
                             : ""(VAR5), ""(VAR6), ""(VAR7), ""(VAR8), ""(VAR10), ""(&VAR3->VAR62));
                return;
            case VAR38:
                asm volatile("" VAR30 "" VAR58 ""
                             "" VAR30 ""
                             "" VAR59 "" FUN4(% % VAR60, % 5) "" FUN3(VAR34) ""
                                                                                                                                       "" FUN3(VAR39) ""
                                                                                                                                                                   "" FUN3(VAR33) "" FUN8(% % VAR61, 8280(% 5), % % VAR60) "" VAR59 ""
                                                                                                                                                                                                                                                              "" VAR58 "" VAR30 ""
                             :
                             : ""(VAR5), ""(VAR6), ""(VAR7), ""(VAR8), ""(VAR10), ""(&VAR3->VAR62));
                return;
            case VAR63:
                asm volatile("" VAR30 "" VAR58 ""
                             "" VAR30 ""
                             "" VAR59 "" FUN9(% % VAR60, % 5) FUN10(% % VAR61, 8280(% 5), % % VAR60) "" VAR59 ""
                                                                                                                                                        "" VAR58 "" VAR30 ""
                             :
                             : ""(VAR5), ""(VAR6), ""(VAR7), ""(VAR8), ""(VAR10), ""(&VAR3->VAR62));
                return;
            default:
                break;
            }
            FUN11(VAR64, VAR65)
        }