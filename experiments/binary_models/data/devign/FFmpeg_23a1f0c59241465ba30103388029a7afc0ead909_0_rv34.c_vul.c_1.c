static int FUN1(VAR1 *VAR2, int VAR3, const VAR4 *VAR5, int VAR6)
{
    VAR7 *VAR8 = &VAR2->VAR8;
    VAR9 *VAR10 = &VAR8->VAR10;
    int VAR11;
    int VAR12;
    FUN2(&VAR2->VAR8.VAR10, VAR5, VAR6 * 8);
    VAR12 = VAR2->FUN3(VAR2, VAR10, &VAR2->VAR13);
    if (VAR12 < 0)
    {
        FUN4(VAR8->VAR14, VAR15, "");
        return -1;
        if ((VAR8->VAR16 == 0 && VAR8->VAR17 == 0) || VAR8->VAR18 == NULL)
        {
            if (VAR8->VAR19 != VAR2->VAR13.VAR19 || VAR8->VAR20 != VAR2->VAR13.VAR20)
            {
                FUN4(VAR8->VAR14, VAR21, "", VAR2->VAR13.VAR19, VAR2->VAR13.VAR20);
                FUN5(VAR8);
                VAR8->VAR19 = VAR2->VAR13.VAR19;
                VAR8->VAR20 = VAR2->VAR13.VAR20;
                FUN6(VAR8->VAR14, VAR8->VAR19, VAR8->VAR20);
                if (FUN7(VAR8) < 0)
                    return -1;
                VAR2->VAR22 = VAR8->VAR23 * 4 + 4;
                VAR2->VAR24 = FUN8(VAR2->VAR24, VAR2->VAR22 * 4 * 2 * sizeof(*VAR2->VAR24));
                VAR2->VAR25 = VAR2->VAR24 + VAR2->VAR22 * 4;
                VAR2->VAR26 = FUN8(VAR2->VAR26, VAR2->VAR8.VAR27 * VAR2->VAR8.VAR28 * sizeof(*VAR2->VAR26));
                VAR2->VAR29 = FUN8(VAR2->VAR29, VAR2->VAR8.VAR27 * VAR2->VAR8.VAR28 * sizeof(*VAR2->VAR29));
                VAR2->VAR30 = FUN8(VAR2->VAR30, VAR2->VAR8.VAR27 * VAR2->VAR8.VAR28 * sizeof(*VAR2->VAR30));
                VAR2->VAR31 = FUN8(VAR2->VAR31, VAR2->VAR8.VAR27 * VAR2->VAR8.VAR28 * sizeof(*VAR2->VAR31));
                VAR8->VAR32 = VAR2->VAR13.VAR33 ? VAR2->VAR13.VAR33 : VAR34;
                if (FUN9(VAR8, VAR8->VAR14) < 0)
                    return -1;
                FUN10(VAR8);
                if (!VAR2->VAR35 || VAR8->VAR19 != VAR2->VAR13.VAR19 || VAR8->VAR20 != VAR2->VAR13.VAR20)
                {
                    int VAR36;
                    FUN11(VAR2->VAR35);
                    VAR2->VAR35 = FUN12(VAR8->VAR37 * 48);
                    for (VAR36 = 0; VAR36 < 2; VAR36++)
                        VAR2->VAR38[VAR36] = VAR2->VAR35 + VAR36 * 16 * VAR8->VAR37;
                    for (VAR36 = 0; VAR36 < 4; VAR36++)
                        VAR2->VAR39[VAR36] = VAR2->VAR35 + 32 * VAR8->VAR37 + (VAR36 >> 1) * 8 * VAR8->VAR40 + (VAR36 & 1) * 16;
                    VAR2->VAR41 = VAR2->VAR13.VAR42;
                    if (VAR8->VAR32 != VAR43)
                    {
                        VAR2->VAR44 = VAR2->VAR45;
                        VAR2->VAR45 = VAR2->VAR41;
                    }
                    else
                    {
                        int VAR46 = FUN13(VAR2->VAR45, VAR2->VAR44);
                        int VAR47 = FUN13(VAR2->VAR41, VAR2->VAR44);
                        int VAR48 = FUN13(VAR2->VAR45, VAR2->VAR41);
                        if (!VAR46)
                        {
                            VAR2->VAR49 = VAR2->VAR50 = 8192;
                        }
                        else
                        {
                            VAR2->VAR49 = (VAR47 << 14) / VAR46;
                            VAR2->VAR50 = (VAR48 << 14) / VAR46;
                            VAR8->VAR16 = VAR8->VAR17 = 0;
                            VAR2->VAR13.VAR3 = VAR3;
                            VAR8->VAR51 = VAR2->VAR13.VAR52;
                            VAR2->VAR53 = VAR6 * 8;
                            VAR8->VAR54 = VAR2->VAR13.VAR3 - VAR2->VAR13.VAR55;
                            VAR2->VAR8.VAR56 = 0;
                            VAR11 = VAR8->VAR16 + VAR8->VAR17 * VAR8->VAR23;
                            if (VAR2->VAR13.VAR55 != VAR11)
                            {
                                FUN4(VAR8->VAR14, VAR15, "", VAR2->VAR13.VAR55, VAR11);
                                VAR8->VAR16 = VAR2->VAR13.VAR55 % VAR8->VAR23;
                                VAR8->VAR17 = VAR2->VAR13.VAR55 / VAR8->VAR23;
                                memset(VAR2->VAR24, -1, VAR2->VAR22 * 4 * 2 * sizeof(*VAR2->VAR24));
                                VAR8->VAR57 = 1;
                                VAR8->VAR58 = VAR8->VAR16;
                                VAR8->VAR59 = VAR8->VAR17;
                                FUN14(VAR8);
                                while (!FUN15(VAR2, VAR8))
                                {
                                    FUN16(VAR8);
                                    VAR8->VAR60.FUN17(VAR8->VAR61[0]);
                                    if (FUN18(VAR2, VAR2->VAR25 + VAR8->VAR16 * 4 + 4) < 0)
                                    {
                                        FUN19(VAR8, VAR8->VAR58, VAR8->VAR59, VAR8->VAR16 - 1, VAR8->VAR17, VAR62 | VAR63 | VAR64);
                                        return -1;
                                        if (++VAR8->VAR16 == VAR8->VAR23)
                                        {
                                            VAR8->VAR16 = 0;
                                            VAR8->VAR17++;
                                            FUN14(VAR8);
                                            memmove(VAR2->VAR24, VAR2->VAR25, VAR2->VAR22 * 4 * sizeof(*VAR2->VAR24));
                                            memset(VAR2->VAR25, -1, VAR2->VAR22 * 4 * sizeof(*VAR2->VAR24));
                                            if (VAR2->VAR65 && VAR8->VAR17 >= 2)
                                                VAR2->FUN20(VAR2, VAR8->VAR17 - 2);
                                            if (VAR8->VAR16 == VAR8->VAR58)
                                                VAR8->VAR57 = 0;
                                            VAR8->VAR54--;
                                            FUN19(VAR8, VAR8->VAR58, VAR8->VAR59, VAR8->VAR16 - 1, VAR8->VAR17, VAR66 | VAR67 | VAR68);
                                            return VAR8->VAR17 == VAR8->VAR28