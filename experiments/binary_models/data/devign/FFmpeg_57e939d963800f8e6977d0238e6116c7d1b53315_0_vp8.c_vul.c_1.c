static int FUN1(VAR1 *VAR2, const VAR3 *VAR4, int VAR5)
{
    VAR6 *VAR7 = &VAR2->VAR7;
    int VAR8, VAR9, VAR10, VAR11, VAR12, VAR13;
    int VAR14 = VAR2->VAR15->VAR14;
    int VAR16 = VAR2->VAR15->VAR16;
    VAR2->VAR17 = (VAR4[0] >> 1) & 7;
    if (VAR2->VAR17 > 1)
    {
        FUN2(VAR2->VAR15, "", VAR2->VAR17);
        VAR2->VAR18 = !(VAR4[0] & 1);
        VAR2->VAR19 = 0;
        VAR8 = FUN3(VAR4) >> 4;
        VAR4 += 4 - VAR2->VAR17;
        VAR5 -= 4 - VAR2->VAR17;
        memcpy(VAR2->VAR20, VAR2->VAR21.VAR22, sizeof(VAR2->VAR20));
        FUN4(VAR7, VAR4, VAR8);
        VAR4 += VAR8;
        VAR5 -= VAR8;
        if (VAR2->VAR18)
        {
            VAR14 = FUN5(VAR7, 12);
            VAR16 = FUN5(VAR7, 12);
            VAR9 = FUN5(VAR7, 2);
            VAR10 = FUN5(VAR7, 2);
            if (VAR9 || VAR10)
                FUN2(VAR2->VAR15, "");
            VAR2->VAR23 = VAR2->VAR24 = VAR25;
            FUN6(VAR2);
            memcpy(VAR2->VAR26->VAR27, VAR28, sizeof(VAR2->VAR26->VAR27));
            memcpy(VAR2->VAR26->VAR29, VAR30, sizeof(VAR2->VAR26->VAR29));
            for (VAR11 = 0; VAR11 < 2; VAR11++)
                memcpy(VAR2->VAR26->VAR31[VAR11], VAR32[VAR11], sizeof(VAR32[VAR11]));
            memset(&VAR2->VAR33, 0, sizeof(VAR2->VAR33));
            memset(&VAR2->VAR34, 0, sizeof(VAR2->VAR34));
            memcpy(VAR2->VAR26[0].VAR35, VAR36, sizeof(VAR2->VAR26[0].VAR35));
            if (VAR2->VAR18 || VAR2->VAR17 > 0)
                memset(VAR2->VAR37, 0, sizeof(VAR2->VAR37));
            for (VAR11 = 0; VAR11 < 4; VAR11++)
            {
                VAR2->VAR38[VAR11] = FUN7(VAR7);
                if (VAR2->VAR38[VAR11])
                {
                    VAR2->VAR39[VAR11] = FUN5(VAR7, 8);
                    for (VAR12 = 0; VAR12 < 3; VAR12++)
                        VAR2->VAR40[VAR11][VAR12] = FUN7(VAR7) ? FUN5(VAR7, 8) : 255;
                    if (VAR41[VAR11])
                        for (VAR12 = 0; VAR12 < 4; VAR12++)
                            VAR2->VAR42[VAR11][VAR12] = FUN7(VAR7) ? FUN5(VAR7, VAR41[VAR2->VAR17][VAR11]) : 0;
                    VAR2->VAR33.VAR43 = 0;
                    VAR2->VAR33.VAR44 = 0;
                    VAR2->VAR34.VAR43 = 0;
                    VAR2->VAR45 = 1;
                    FUN4(&VAR2->VAR46[0], VAR4, VAR5);
                    if (!VAR2->VAR47 || VAR14 != VAR2->VAR15->VAR14 || VAR16 != VAR2->VAR15->VAR16 || (VAR14 + 15) / 16 != VAR2->VAR48 || (VAR16 + 15) / 16 != VAR2->VAR49)
                    {
                        if ((VAR13 = FUN8(VAR2, VAR14, VAR16)) < 0)
                            return VAR13;
                        FUN9(VAR2);
                        if (!VAR2->VAR18)
                        {
                            VAR2->VAR23 = FUN7(VAR7) ? VAR25 : VAR50;
                            VAR2->VAR51[VAR52] = 0;
                            VAR2->VAR53 = 1;
                            VAR2->VAR54 = 1;
                            VAR2->VAR55 = 1;
                            if (VAR2->VAR17 > 0)
                            {
                                VAR2->VAR54 = FUN7(VAR7);
                                if (!VAR2->VAR54)
                                    VAR2->VAR26[1] = VAR2->VAR26[0];
                                if (!VAR2->VAR18)
                                    VAR2->VAR55 = FUN7(VAR7);
                                if (VAR2->VAR55 && FUN7(VAR7))
                                {
                                    int VAR56 = (VAR57)FUN5(VAR7, 8);
                                    int VAR58 = (VAR57)FUN5(VAR7, 8);
                                    if (!VAR2->VAR18 && (VAR56 || VAR58))
                                    {
                                        if (VAR2->VAR59[VAR52] == VAR2->VAR59[VAR60])
                                        {
                                            VAR61 *VAR62 = VAR2->VAR59[VAR52]->VAR63.VAR64;
                                            VAR61 *VAR65;
                                            int VAR11, VAR12;
                                            VAR2->VAR59[VAR60] = FUN10(VAR2);
                                            if ((VAR13 = FUN11(VAR2, VAR2->VAR59[VAR60], 1)) < 0)
                                                return VAR13;
                                            VAR65 = VAR2->VAR59[VAR60]->VAR63.VAR64;
                                            FUN12(VAR65->VAR66[0], VAR65->VAR67[0], VAR62->VAR66[0], VAR62->VAR67[0], VAR2->VAR48 * 16, VAR2->VAR49 * 16, VAR56, VAR58);
                                            for (VAR12 = 1; VAR12 < 3; VAR12++)
                                                for (VAR11 = 0; VAR11 < VAR2->VAR49 * 8; VAR11++)
                                                    memcpy(VAR65->VAR66[VAR12] + VAR11 * VAR65->VAR67[VAR12], VAR62->VAR66[VAR12] + VAR11 * VAR62->VAR67[VAR12], VAR2->VAR48 * 8);
                                        }
                                        else
                                        {
                                            VAR61 *VAR65 = VAR2->VAR59[VAR60]->VAR63.VAR64;
                                            FUN12(VAR65->VAR66[0], VAR65->VAR67[0], VAR65->VAR66[0], VAR65->VAR67[0], VAR2->VAR48 * 16, VAR2->VAR49 * 16, VAR56, VAR58);
                                            if (!VAR2->VAR17)
                                                VAR2->VAR68.VAR69 = FUN7(VAR7);
                                            if (FUN7(VAR7))
                                                for (VAR11 = 1; VAR11 < 16; VAR11++)
                                                    VAR2->VAR26[0].VAR35[VAR11] = VAR36[FUN5(VAR7, 4)];
                                            if (VAR2->VAR17 > 0)
                                                VAR2->VAR68.VAR69 = FUN7(VAR7);
                                            VAR2->VAR68.VAR70 = FUN5(VAR7, 6);
                                            VAR2->VAR68.VAR71 = FUN5(VAR7, 3);
                                            FUN13(VAR2);
                                            VAR2->VAR72 = 0;
                                            if (!VAR2->VAR18)
                                            {
                                                VAR2->VAR26->VAR73 = FUN5(VAR7, 8);
                                                VAR2->VAR26->VAR74 = FUN5(VAR7, 8);
                                                FUN14(VAR2);
                                                return 0