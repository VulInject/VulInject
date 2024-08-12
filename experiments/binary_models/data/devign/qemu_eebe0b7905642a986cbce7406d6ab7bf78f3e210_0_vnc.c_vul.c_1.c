static int FUN1(VAR1 *VAR2, struct VAR3 *VAR4)
{
    int VAR5 = FUN2(VAR2->VAR6.VAR7);
    int VAR8 = FUN3(VAR2->VAR6.VAR7);
    int VAR9, VAR10;
    struct timeval VAR11;
    int VAR12 = 0;
    for (VAR10 = 0; VAR10 < VAR8; VAR10 += VAR13)
    {
        for (VAR9 = 0; VAR9 < VAR5; VAR9 += VAR13)
        {
            VAR14 *VAR15 = FUN4(VAR2, VAR9, VAR10);
            VAR15->VAR16 = false;
        }
    }
    FUN5(VAR4, &VAR17, &VAR11);
    if (FUN6(&VAR2->VAR6.VAR18, &VAR11, >))
    {
        return VAR12;
    }
    VAR2->VAR6.VAR18 = *VAR4;
    for (VAR10 = 0; VAR10 < VAR8; VAR10 += VAR13)
    {
        for (VAR9 = 0; VAR9 < VAR5; VAR9 += VAR13)
        {
            VAR14 *VAR15 = FUN4(VAR2, VAR9, VAR10);
            int VAR19 = FUN7(VAR15->VAR20);
            struct timeval VAR21, VAR22;
            if (!FUN8(&VAR15->VAR20[VAR19 - 1]))
            {
                continue;
            }
            VAR22 = VAR15->VAR20[(VAR15->VAR23 + VAR19 - 1) % VAR19];
            FUN5(VAR4, &VAR22, &VAR11);
            if (FUN6(&VAR11, &VAR24, >))
            {
                VAR15->VAR25 = 0;
                VAR12 += FUN9(VAR2, VAR9, VAR10);
                memset(VAR15->VAR20, 0, sizeof(VAR15->VAR20));
                continue;
            }
            VAR21 = VAR15->VAR20[VAR15->VAR23];
            VAR22 = VAR15->VAR20[(VAR15->VAR23 + VAR19 - 1) % VAR19];
            FUN5(&VAR22, &VAR21, &VAR11);
            VAR15->VAR25 = VAR11.VAR26 + VAR11.VAR27 / 1000000.;
            VAR15->VAR25 /= VAR19;
            VAR15->VAR25 = 1. / VAR15->VAR25;
        }
    }
    return VAR12;
}