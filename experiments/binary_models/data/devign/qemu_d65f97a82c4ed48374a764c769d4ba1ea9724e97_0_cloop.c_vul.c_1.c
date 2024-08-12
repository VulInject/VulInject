static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, VAR6 **VAR7)
{
    VAR8 *VAR9 = VAR2->VAR10;
    uint32_t VAR11, VAR12 = 1, VAR13;
    int VAR14;
    VAR2->VAR15 = 1;
    VAR14 = FUN2(VAR2->VAR16, 128, &VAR9->VAR17, 4);
    if (VAR14 < 0)
    {
        return VAR14;
        VAR9->VAR17 = FUN3(VAR9->VAR17);
        VAR14 = FUN2(VAR2->VAR16, 128 + 4, &VAR9->VAR18, 4);
        if (VAR14 < 0)
        {
            return VAR14;
            VAR9->VAR18 = FUN3(VAR9->VAR18);
            VAR11 = VAR9->VAR18 * sizeof(VAR19);
            VAR9->VAR20 = FUN4(VAR11);
            VAR14 = FUN2(VAR2->VAR16, 128 + 4 + 4, VAR9->VAR20, VAR11);
            if (VAR14 < 0)
            {
                goto VAR21;
                for (VAR13 = 0; VAR13 < VAR9->VAR18; VAR13++)
                {
                    VAR9->VAR20[VAR13] = FUN5(VAR9->VAR20[VAR13]);
                    if (VAR13 > 0)
                    {
                        uint32_t VAR22 = VAR9->VAR20[VAR13] - VAR9->VAR20[VAR13 - 1];
                        if (VAR22 > VAR12)
                        {
                            VAR12 = VAR22;
                            VAR9->VAR23 = FUN4(VAR12 + 1);
                            VAR9->VAR24 = FUN4(VAR9->VAR17);
                            if (FUN6(&VAR9->VAR25) != VAR26)
                            {
                                VAR14 = -VAR27;
                                goto VAR21;
                                VAR9->VAR28 = VAR9->VAR18;
                                VAR9->VAR29 = VAR9->VAR17 / 512;
                                VAR2->VAR30 = VAR9->VAR18 * VAR9->VAR29;
                                FUN7(&VAR9->VAR31);
                                return 0;
                            VAR21:
                                FUN8(VAR9->VAR20);
                                FUN8(VAR9->VAR23);
                                FUN8(VAR9->VAR24);
                                return VAR14