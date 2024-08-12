static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR1 *VAR5;
    VAR6 *VAR7;
    VAR8 *VAR9;
    fd_set VAR10;
    int VAR11, VAR12, VAR13, VAR14, VAR15, VAR16;
    char VAR17[VAR18];
    struct timeval VAR19;
    for (;;)
    {
        if (FUN2())
            return -VAR20;
        FUN3(&VAR10);
        VAR13 = -1;
        for (VAR15 = 0; VAR15 < VAR2->VAR21; VAR15++)
        {
            VAR7 = VAR2->VAR22[VAR15];
            VAR9 = VAR7->VAR23;
            VAR5 = VAR9->VAR5;
            FUN4(FUN5(&VAR5->VAR24), &VAR11, &VAR12);
            if (VAR11 > VAR13)
                VAR13 = VAR11;
            FUN6(VAR11, &VAR10);
        }
        VAR19.VAR25 = 0;
        VAR19.VAR26 = 100 * 1000;
        VAR14 = FUN7(VAR13 + 1, &VAR10, NULL, NULL, &VAR19);
        if (VAR14 > 0)
        {
            for (VAR15 = 0; VAR15 < VAR2->VAR21; VAR15++)
            {
                VAR7 = VAR2->VAR22[VAR15];
                VAR9 = VAR7->VAR23;
                VAR5 = VAR9->VAR5;
                FUN4(FUN5(&VAR5->VAR24), &VAR11, &VAR12);
                if (FUN8(VAR11, &VAR10))
                {
                    VAR16 = FUN9(FUN5(&VAR5->VAR24), VAR17, sizeof(VAR17));
                    if (VAR16 >= 0 && FUN10(VAR5, VAR4, VAR17, VAR16) == 0)
                    {
                        VAR4->VAR27 = VAR15;
                        return VAR16;
                    }
                }
            }
        }
    }
}