static int FUN1(VAR1 *VAR2, const VAR3 *VAR4, int VAR5, VAR6 *VAR7, int *VAR8)
{
    VAR9 *VAR10 = VAR2->VAR11;
    VAR12 *VAR13;
    VAR12 *VAR14, **VAR15;
    const VAR3 *VAR16 = VAR4 + VAR5;
    int VAR17;
    int VAR18;
    int VAR19;
    int VAR20;
    if (VAR5 < 1)
        return VAR21;
    VAR19 = *VAR4++;
    VAR20 = ((*VAR4) >> 4) & 15;
    VAR18 = ((*VAR4++) >> 2) & 3;
    if (VAR10->VAR20 == VAR20)
    {
        return 0;
        VAR10->VAR22 = VAR19;
        VAR10->VAR20 = VAR20;
        FUN2(VAR2, "", VAR10->VAR22, VAR18);
        if (VAR10->VAR23 == 1)
            FUN3(VAR2, VAR7, VAR8);
        if (VAR18 == 1 || VAR18 == 2)
        {
            FUN4(VAR10);
            FUN5(VAR10);
            FUN6(VAR10);
            VAR14 = VAR10->VAR24;
            VAR10->VAR24 = NULL;
            while (VAR4 + 5 < VAR16)
            {
                VAR17 = *VAR4++;
                VAR4 += 1;
                VAR13 = VAR14;
                VAR15 = &VAR14;
                VAR15 = &VAR13->VAR25;
                if (!VAR13)
                {
                    VAR13 = FUN7(sizeof(VAR12));
                    if (!VAR13)
                        return FUN8(VAR26);
                    VAR13->VAR17 = VAR17;
                    VAR13->VAR27 = FUN9(VAR4);
                    VAR4 += 2;
                    VAR13->VAR28 = FUN9(VAR4);
                    VAR4 += 2;
                    *VAR15 = VAR13->VAR25;
                    VAR13->VAR25 = VAR10->VAR24;
                    VAR10->VAR24 = VAR13;
                    FUN2(VAR2, "", VAR17, VAR13->VAR27, VAR13->VAR28);
                    while (VAR14)
                    {
                        VAR13 = VAR14;
                        VAR14 = VAR13->VAR25;
                        FUN10(&VAR13);
                        return 0