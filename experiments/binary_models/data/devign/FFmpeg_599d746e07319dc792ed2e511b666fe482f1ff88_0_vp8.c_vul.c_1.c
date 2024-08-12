static int FUN1(VAR1 *VAR2, const VAR3 *VAR4, int VAR5)
{
    VAR6 *VAR7 = &VAR2->VAR7;
    int VAR8, VAR9, VAR10, VAR11;
    int VAR12 = VAR2->VAR13->VAR12;
    int VAR14 = VAR2->VAR13->VAR14;
    VAR2->VAR15 = !(VAR4[0] & 1);
    VAR2->VAR16 = (VAR4[0] >> 1) & 7;
    VAR2->VAR17 = !(VAR4[0] & 0x10);
    VAR8 = FUN2(VAR4) >> 5;
    VAR4 += 3;
    VAR5 -= 3;
    if (VAR2->VAR16 > 3)
        FUN3(VAR2->VAR13, VAR18, "", VAR2->VAR16);
    if (!VAR2->VAR16)
        memcpy(VAR2->VAR19, VAR2->VAR20.VAR21, sizeof(VAR2->VAR19));
    else
        memcpy(VAR2->VAR19, VAR2->VAR20.VAR22, sizeof(VAR2->VAR19));
    if (VAR8 > VAR5 - 7 * VAR2->VAR15)
    {
        FUN3(VAR2->VAR13, VAR23, "");
        if (VAR2->VAR15)
        {
            if (FUN2(VAR4) != 0x2a019d)
            {
                FUN3(VAR2->VAR13, VAR23, "", FUN2(VAR4));
                VAR12 = FUN4(VAR4 + 3) & 0x3fff;
                VAR14 = FUN4(VAR4 + 5) & 0x3fff;
                VAR9 = VAR4[4] >> 6;
                VAR10 = VAR4[6] >> 6;
                VAR4 += 7;
                VAR5 -= 7;
                if (VAR9 || VAR10)
                    FUN5(VAR2->VAR13, "");
                VAR2->VAR24 = VAR2->VAR25 = VAR26;
                FUN6(VAR2);
                memcpy(VAR2->VAR27->VAR28, VAR29, sizeof(VAR2->VAR27->VAR28));
                memcpy(VAR2->VAR27->VAR30, VAR31, sizeof(VAR2->VAR27->VAR30));
                memcpy(VAR2->VAR27->VAR32, VAR33, sizeof(VAR2->VAR27->VAR32));
                memset(&VAR2->VAR34, 0, sizeof(VAR2->VAR34));
                memset(&VAR2->VAR35, 0, sizeof(VAR2->VAR35));
                FUN7(VAR7, VAR4, VAR8);
                VAR4 += VAR8;
                VAR5 -= VAR8;
                if (VAR2->VAR15)
                {
                    VAR2->VAR36 = FUN8(VAR7);
                    if (VAR2->VAR36)
                        FUN3(VAR2->VAR13, VAR18, "");
                    VAR2->VAR37 = FUN8(VAR7);
                    if ((VAR2->VAR34.VAR38 = FUN8(VAR7)))
                        FUN9(VAR2);
                    else
                        VAR2->VAR34.VAR39 = 0;
                    VAR2->VAR40.VAR41 = FUN8(VAR7);
                    VAR2->VAR40.VAR42 = FUN10(VAR7, 6);
                    VAR2->VAR40.VAR43 = FUN10(VAR7, 3);
                    if ((VAR2->VAR35.VAR38 = FUN8(VAR7)))
                        if (FUN8(VAR7))
                            FUN11(VAR2);
                    if (FUN12(VAR2, VAR4, VAR5))
                    {
                        FUN3(VAR2->VAR13, VAR23, "");
                        if (!VAR2->VAR44 || VAR12 != VAR2->VAR13->VAR12 || VAR14 != VAR2->VAR13->VAR14 || (VAR12 + 15) / 16 != VAR2->VAR45 || (VAR14 + 15) / 16 != VAR2->VAR46)
                            if ((VAR11 = FUN13(VAR2, VAR12, VAR14)) < 0)
                                return VAR11;
                        FUN14(VAR2);
                        if (!VAR2->VAR15)
                        {
                            FUN15(VAR2);
                            VAR2->VAR47[VAR48] = FUN8(VAR7);
                            VAR2->VAR47[VAR49] = FUN8(VAR7);
                            if (!(VAR2->VAR50 = FUN8(VAR7)))
                                VAR2->VAR27[1] = VAR2->VAR27[0];
                            VAR2->VAR51 = VAR2->VAR15 || FUN8(VAR7);
                            FUN16(VAR2);
                            if ((VAR2->VAR52 = FUN8(VAR7)))
                                VAR2->VAR27->VAR53 = FUN10(VAR7, 8);
                            if (!VAR2->VAR15)
                            {
                                VAR2->VAR27->VAR54 = FUN10(VAR7, 8);
                                VAR2->VAR27->VAR55 = FUN10(VAR7, 8);
                                VAR2->VAR27->VAR56 = FUN10(VAR7, 8);
                                FUN17(VAR2, VAR57);
                                return 0