static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = &VAR2->VAR4;
    int VAR5, VAR6, VAR7;
    VAR2->VAR8 = FUN2(VAR4, 6) + 1;
    VAR2->VAR9 = FUN3(VAR2->VAR8 * sizeof(*VAR2->VAR9));
    for (VAR5 = 0; VAR5 < VAR2->VAR8; ++VAR5)
    {
        VAR10 *VAR11 = &VAR2->VAR9[VAR5];
        VAR11->VAR12 = FUN2(VAR4, 16);
        FUN4(NULL, "", VAR5, VAR11->VAR12);
        if (VAR11->VAR12 == 1)
        {
            int VAR13 = -1;
            unsigned VAR14, VAR15, VAR16 = 2;
            VAR11->VAR17 = VAR18;
            VAR11->VAR19.VAR20.VAR21 = FUN2(VAR4, 5);
            FUN4(NULL, "", VAR5, VAR11->VAR19.VAR20.VAR21);
            for (VAR6 = 0; VAR6 < VAR11->VAR19.VAR20.VAR21; ++VAR6)
            {
                VAR11->VAR19.VAR20.VAR22[VAR6] = FUN2(VAR4, 4);
                if (VAR11->VAR19.VAR20.VAR22[VAR6] > VAR13)
                    VAR13 = VAR11->VAR19.VAR20.VAR22[VAR6];
                FUN4(NULL, "", VAR5, VAR6, VAR11->VAR19.VAR20.VAR22[VAR6]);
                FUN4(NULL, "", VAR13);
                for (VAR6 = 0; VAR6 <= VAR13; ++VAR6)
                {
                    VAR11->VAR19.VAR20.VAR23[VAR6] = FUN2(VAR4, 3) + 1;
                    VAR11->VAR19.VAR20.VAR24[VAR6] = FUN2(VAR4, 2);
                    FUN4(NULL, "", VAR5, VAR6, VAR11->VAR19.VAR20.VAR23[VAR6], VAR11->VAR19.VAR20.VAR24[VAR6]);
                    if (VAR11->VAR19.VAR20.VAR24[VAR6])
                    {
                        FUN5(VAR11->VAR19.VAR20.VAR25[VAR6], 8, VAR2->VAR26)
                        FUN4(NULL, "", VAR11->VAR19.VAR20.VAR25[VAR6]);
                        for (VAR7 = 0; VAR7 < (1 << VAR11->VAR19.VAR20.VAR24[VAR6]); ++VAR7)
                        {
                            int16_t VAR27 = FUN2(VAR4, 8) - 1;
                            if (VAR27 != -1)
                                FUN6(VAR27, VAR2->VAR26)
                                VAR11->VAR19.VAR20.VAR28[VAR6][VAR7] = VAR27;
                            FUN4(NULL, "", VAR7, VAR11->VAR19.VAR20.VAR28[VAR6][VAR7]);
                            VAR11->VAR19.VAR20.VAR29 = FUN2(VAR4, 2) + 1;
                            VAR11->VAR19.VAR20.VAR30 = 2;
                            for (VAR6 = 0; VAR6 < VAR11->VAR19.VAR20.VAR21; ++VAR6)
                                VAR11->VAR19.VAR20.VAR30 += VAR11->VAR19.VAR20.VAR23[VAR11->VAR19.VAR20.VAR22[VAR6]];
                            VAR11->VAR19.VAR20.VAR31 = FUN3(VAR11->VAR19.VAR20.VAR30 * sizeof(*VAR11->VAR19.VAR20.VAR31));
                            VAR14 = FUN2(VAR4, 4);
                            VAR15 = (1 << VAR14);
                            if (VAR15 > VAR2->VAR32[1] / 2)
                            { "" VAR33 "" , VAR15 , VAR2 -> VAR32 [ 1 ] / 2 ) ;
                                VAR11->VAR19.VAR20.VAR31[0].VAR34 = 0;
                                VAR11->VAR19.VAR20.VAR31[1].VAR34 = VAR15;
                                for (VAR6 = 0; VAR6 < VAR11->VAR19.VAR20.VAR21; ++VAR6)
                                {
                                    for (VAR7 = 0; VAR7 < VAR11->VAR19.VAR20.VAR23[VAR11->VAR19.VAR20.VAR22[VAR6]]; ++VAR7, ++VAR16)
                                    {
                                        VAR11->VAR19.VAR20.VAR31[VAR16].VAR34 = FUN2(VAR4, VAR14);
                                        FUN4(NULL, "", VAR16, VAR11->VAR19.VAR20.VAR31[VAR16].VAR34);
                                        if (FUN7(VAR2->VAR35, VAR11->VAR19.VAR20.VAR31, VAR11->VAR19.VAR20.VAR30))
                                        {
                                        }
                                        else if (VAR11->VAR12 == 0)
                                        {
                                            unsigned VAR36 = 0;
                                            VAR11->VAR17 = VAR37;
                                            VAR11->VAR19.VAR38.VAR39 = FUN2(VAR4, 8);
                                            VAR11->VAR19.VAR38.VAR40 = FUN2(VAR4, 16);
                                            VAR11->VAR19.VAR38.VAR41 = FUN2(VAR4, 16);
                                            VAR11->VAR19.VAR38.VAR42 = FUN2(VAR4, 6);
                                            if (VAR11->VAR19.VAR38.VAR42 == 0)
                                            { "" ) ;
                                                VAR11->VAR19.VAR38.VAR43 = FUN2(VAR4, 8);
                                                VAR11->VAR19.VAR38.VAR44 = FUN2(VAR4, 4) + 1;
                                                VAR11->VAR19.VAR38.VAR45 = FUN8(VAR11->VAR19.VAR38.VAR44);
                                                if (!VAR11->VAR19.VAR38.VAR45)
                                                    return FUN9(VAR46);
                                                {
                                                    int VAR47;
                                                    unsigned VAR48;
                                                    for (VAR47 = 0; VAR47 < VAR11->VAR19.VAR38.VAR44; ++VAR47)
                                                    {
                                                        FUN5(VAR48, 8, VAR2->VAR26)
                                                        VAR11->VAR19.VAR38.VAR45[VAR47] = VAR48;
                                                        if (VAR2->VAR49[VAR48].VAR50 > VAR36)
                                                            VAR36 = VAR2->VAR49[VAR48].VAR50;
                                                        FUN10(VAR2, VAR5);
                                                        VAR11->VAR19.VAR38.VAR51 = FUN8((VAR11->VAR19.VAR38.VAR39 + 1 + VAR36) * sizeof(*VAR11->VAR19.VAR38.VAR51));
                                                        if (!VAR11->VAR19.VAR38.VAR51)
                                                            return FUN9(VAR46);
                                                        FUN4(NULL, "", VAR11->VAR19.VAR38.VAR39);
                                                        FUN4(NULL, "", VAR11->VAR19.VAR38.VAR40);
                                                        FUN4(NULL, "", VAR11->VAR19.VAR38.VAR41);
                                                        FUN4(NULL, "", VAR11->VAR19.VAR38.VAR42);
                                                        FUN4(NULL, "", VAR11->VAR19.VAR38.VAR43);
                                                        FUN4(NULL, "", VAR11->VAR19.VAR38.VAR44);
                                                        FUN4(NULL, "", VAR11->VAR19.VAR38.VAR45);
                                                        {
                                                            int VAR47;
                                                            for (VAR47 = 0; VAR47 < VAR11->VAR19.VAR38.VAR44; ++VAR47)
                                                            {
                                                                FUN4(NULL, "", VAR47 + 1, VAR11->VAR19.VAR38.VAR45[VAR47]);
                                                            }
                                                            else
                                                            {
                                                                FUN11(VAR2->VAR35, VAR52, "");
                                                                return 0;