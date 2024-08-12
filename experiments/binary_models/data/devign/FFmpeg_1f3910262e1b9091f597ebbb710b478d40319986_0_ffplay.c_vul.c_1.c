static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4;
    VAR3 *VAR5 = NULL;
    SDL_Rect VAR6;
    VAR4 = FUN2(&VAR2->VAR7);
    if (VAR4->VAR8)
    {
        if (VAR2->VAR9)
        {
            if (FUN3(&VAR2->VAR10) > 0)
            {
                VAR5 = FUN4(&VAR2->VAR10);
                if (VAR4->VAR11 >= VAR5->VAR11 + ((float)VAR5->VAR12.VAR13 / 1000))
                {
                    if (!VAR5->VAR14)
                    {
                        VAR15 *VAR16;
                        int VAR17;
                        int VAR18;
                        if (!VAR5->VAR19 || !VAR5->VAR20)
                        {
                            VAR5->VAR19 = VAR4->VAR19;
                            VAR5->VAR20 = VAR4->VAR20;
                        }
                        if (FUN5(&VAR2->VAR21, VAR22, VAR5->VAR19, VAR5->VAR20, VAR23, 1) < 0)
                            return;
                        for (VAR18 = 0; VAR18 < VAR5->VAR12.VAR24; VAR18++)
                        {
                            VAR25 *VAR26 = VAR5->VAR12.VAR27[VAR18];
                            VAR26->VAR28 = FUN6(VAR26->VAR28, 0, VAR5->VAR19);
                            VAR26->VAR29 = FUN6(VAR26->VAR29, 0, VAR5->VAR20);
                            VAR26->VAR30 = FUN6(VAR26->VAR30, 0, VAR5->VAR19 - VAR26->VAR28);
                            VAR26->VAR31 = FUN6(VAR26->VAR31, 0, VAR5->VAR20 - VAR26->VAR29);
                            VAR2->VAR32 = FUN7(VAR2->VAR32, VAR26->VAR30, VAR26->VAR31, VAR33, VAR26->VAR30, VAR26->VAR31, VAR34, 0, NULL, NULL, NULL);
                            if (!VAR2->VAR32)
                            {
                                FUN8(NULL, VAR35, "");
                                return;
                            }
                            if (!FUN9(VAR2->VAR21, (VAR36 *)VAR26, (void **)&VAR16, &VAR17))
                            {
                                FUN10(VAR2->VAR32, (const VAR15 *const *)VAR26->VAR37, VAR26->VAR38, 0, VAR26->VAR31, &VAR16, &VAR17);
                                FUN11(VAR2->VAR21);
                            }
                        }
                        VAR5->VAR14 = 1;
                    }
                }
                else
                    VAR5 = NULL;
            }
        }
        FUN12(&VAR6, VAR2->VAR39, VAR2->VAR40, VAR2->VAR19, VAR2->VAR20, VAR4->VAR19, VAR4->VAR20, VAR4->VAR41);
        if (!VAR4->VAR14)
        {
            if (FUN13(VAR4->VAR8, VAR4->VAR42, &VAR2->VAR43) < 0)
                return;
            VAR4->VAR14 = 1;
            VAR4->VAR44 = VAR4->VAR42->VAR38[0] < 0;
        }
        FUN14(VAR45, VAR4->VAR8, NULL, &VAR6, 0, NULL, VAR4->VAR44 ? VAR46 : 0);
        if (VAR5)
        {
            FUN15(VAR45, VAR2->VAR21, NULL, &VAR6);
            int VAR18;
            double VAR47 = (double)VAR6.VAR30 / (double)VAR5->VAR19;
            double VAR48 = (double)VAR6.VAR31 / (double)VAR5->VAR20;
            for (VAR18 = 0; VAR18 < VAR5->VAR12.VAR24; VAR18++)
            {
                VAR36 *VAR26 = (VAR36 *)VAR5->VAR12.VAR27[VAR18];
                SDL_Rect VAR49 = {.VAR28 = VAR6.VAR28 + VAR26->VAR28 * VAR47, .VAR29 = VAR6.VAR29 + VAR26->VAR29 * VAR48, .VAR30 = VAR26->VAR30 * VAR47, .VAR31 = VAR26->VAR31 * VAR48};
                FUN15(VAR45, VAR2->VAR21, VAR26, &VAR49);
            }
        }
    }
}