static void FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, dma_addr_t VAR6, char *VAR7, uint32_t VAR8, VAR9 *VAR10, VAR11 **VAR12)
{
    VAR11 *VAR13 = NULL;
    int VAR14;
    VAR2->VAR10 = VAR10;
    if (VAR15 == 0)
    {
        VAR15 = VAR16;
        VAR17 = VAR16 / (VAR18 / 1000);
        VAR15 = VAR16 / 1000;
        if (VAR16 >= VAR18)
        {
            VAR17 = VAR16 / VAR18;
        }
        else
        {
            VAR17 = 1;
            FUN2(VAR15, VAR17);
            VAR2->VAR5 = VAR5;
            if (VAR7)
            {
                VAR19 *VAR20[VAR21];
                for (VAR14 = 0; VAR14 < VAR5; VAR14++)
                {
                    VAR20[VAR14] = &VAR2->VAR22[VAR14].VAR23;
                    FUN3(VAR7, VAR20, VAR5, VAR8, VAR2, &VAR24, VAR25 | VAR26, &VAR13);
                    if (VAR13)
                    {
                        FUN4(VAR12, VAR13);
                    }
                    else
                    {
                        FUN5(&VAR2->VAR27, sizeof(VAR2->VAR27), &VAR28, VAR4);
                        for (VAR14 = 0; VAR14 < VAR5; VAR14++)
                        {
                            FUN6(&VAR2->VAR27, &VAR2->VAR22[VAR14].VAR23, VAR2, VAR14, &VAR24, VAR25 | VAR26);
                            FUN7(&VAR2->VAR29, FUN8(VAR4), &VAR30, VAR2, "", 256);
                            VAR2->VAR6 = VAR6;
                            VAR2->VAR31 = FUN9(FUN8(VAR4));
                            FUN10(&VAR2->VAR32);
                            VAR2->VAR33 = 0;
                            VAR2->VAR34 = FUN11(VAR35, VAR36, VAR2)