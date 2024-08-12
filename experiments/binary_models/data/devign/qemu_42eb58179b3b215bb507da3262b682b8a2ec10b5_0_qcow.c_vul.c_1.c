static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, VAR6 **VAR7)
{
    VAR8 *VAR9 = VAR2->VAR10;
    int VAR11, VAR12, VAR13, VAR14;
    QCowHeader VAR15;
    VAR14 = FUN2(VAR2->VAR16, 0, &VAR15, sizeof(VAR15));
    if (VAR14 < 0)
    {
        FUN3(&VAR15.VAR17);
        FUN3(&VAR15.VAR18);
        FUN4(&VAR15.VAR19);
        FUN3(&VAR15.VAR20);
        FUN3(&VAR15.VAR21);
        FUN4(&VAR15.VAR22);
        FUN3(&VAR15.VAR23);
        FUN4(&VAR15.VAR24);
        if (VAR15.VAR17 != VAR25)
        {
            FUN5(VAR7, "");
            if (VAR15.VAR18 != VAR26)
            {
                char VAR18[64];
                snprintf(VAR18, sizeof(VAR18), "" VAR27, VAR15.VAR18);
                FUN6(VAR7, VAR28, VAR2->VAR29, "", VAR18);
                VAR14 = -VAR30;
                if (VAR15.VAR22 <= 1)
                {
                    FUN5(VAR7, "");
                    if (VAR15.VAR31 < 9 || VAR15.VAR31 > 16)
                    {
                        FUN5(VAR7, "");
                        if (VAR15.VAR23 > VAR32)
                        {
                            FUN5(VAR7, "");
                            VAR9->VAR33 = VAR15.VAR23;
                            if (VAR9->VAR33)
                            {
                                VAR2->VAR34 = 1;
                                VAR9->VAR31 = VAR15.VAR31;
                                VAR9->VAR35 = 1 << VAR9->VAR31;
                                VAR9->VAR36 = 1 << (VAR9->VAR31 - 9);
                                VAR9->VAR37 = VAR15.VAR37;
                                VAR9->VAR38 = 1 << VAR9->VAR37;
                                VAR2->VAR39 = VAR15.VAR22 / 512;
                                VAR9->VAR40 = (1LL << (63 - VAR9->VAR31)) - 1;
                                VAR13 = VAR9->VAR31 + VAR9->VAR37;
                                VAR9->VAR41 = (VAR15.VAR22 + (1LL << VAR13) - 1) >> VAR13;
                                VAR9->VAR24 = VAR15.VAR24;
                                VAR9->VAR42 = FUN7(VAR9->VAR41 * sizeof(VAR43));
                                VAR14 = FUN2(VAR2->VAR16, VAR9->VAR24, VAR9->VAR42, VAR9->VAR41 * sizeof(VAR43));
                                if (VAR14 < 0)
                                {
                                    for (VAR12 = 0; VAR12 < VAR9->VAR41; VAR12++)
                                    {
                                        FUN4(&VAR9->VAR42[VAR12]);
                                        VAR9->VAR44 = FUN7(VAR9->VAR38 * VAR45 * sizeof(VAR43));
                                        VAR9->VAR46 = FUN7(VAR9->VAR35);
                                        VAR9->VAR47 = FUN7(VAR9->VAR35);
                                        VAR9->VAR48 = -1;
                                        if (VAR15.VAR19 != 0)
                                        {
                                            VAR11 = VAR15.VAR20;
                                            if (VAR11 > 1023)
                                            {
                                                VAR11 = 1023;
                                                VAR14 = FUN2(VAR2->VAR16, VAR15.VAR19, VAR2->VAR49, VAR11);
                                                if (VAR14 < 0)
                                                {
                                                    VAR2->VAR49[VAR11] = '';
                                                    FUN6(&VAR9->VAR50, VAR51, "", VAR2->VAR29, "");
                                                    FUN8(VAR9->VAR50);
                                                    FUN9(&VAR9->VAR52);
                                                    return 0;
                                                VAR53:
                                                    FUN10(VAR9->VAR42);
                                                    FUN10(VAR9->VAR44);
                                                    FUN10(VAR9->VAR46);
                                                    FUN10(VAR9->VAR47);
                                                    return VAR14