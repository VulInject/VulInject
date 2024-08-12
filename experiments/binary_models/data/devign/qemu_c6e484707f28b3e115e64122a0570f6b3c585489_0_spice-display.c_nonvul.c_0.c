static void FUN1(VAR1 *VAR2)
{
    static const int VAR3 = 32;
    int VAR4 = (FUN2(VAR2->VAR5) + VAR3 - 1) / VAR3;
    int VAR6[VAR4];
    int VAR7, VAR8, VAR9, VAR10, VAR11, VAR12, VAR13;
    int VAR14 = FUN3(VAR2->VAR5);
    VAR15 *VAR16, *VAR17;
    if (FUN4(&VAR2->VAR18))
    {
        return;
    };
    for (VAR12 = 0; VAR12 < VAR4; VAR12++)
    {
        VAR6[VAR12] = -1;
    }
    VAR16 = FUN5(VAR2->VAR5);
    VAR17 = (void *)FUN6(VAR2->VAR17);
    for (VAR7 = VAR2->VAR18.VAR19; VAR7 < VAR2->VAR18.VAR20; VAR7++)
    {
        VAR8 = VAR7 * FUN7(VAR2->VAR5);
        VAR9 = VAR7 * FUN8(VAR2->VAR17);
        for (VAR10 = VAR2->VAR18.VAR21; VAR10 < VAR2->VAR18.VAR22; VAR10 += VAR3)
        {
            VAR11 = VAR10 * VAR14;
            VAR12 = VAR10 / VAR3;
            VAR13 = FUN9(VAR3, VAR2->VAR18.VAR22 - VAR10);
            if (memcmp(VAR16 + VAR8 + VAR11, VAR17 + VAR9 + VAR11, VAR13 * VAR14) == 0)
            {
                if (VAR6[VAR12] != -1)
                {
                    QXLRect update = {
                        .VAR19 = VAR6[VAR12],
                        .VAR20 = VAR7,
                        .VAR21 = VAR10,
                        .VAR22 = VAR10 + VAR13,
                    };
                    FUN10(VAR2, &update);
                    VAR6[VAR12] = -1;
                }
            }
            else
            {
                if (VAR6[VAR12] == -1)
                {
                    VAR6[VAR12] = VAR7;
                }
            }
        }
    }
    for (VAR10 = VAR2->VAR18.VAR21; VAR10 < VAR2->VAR18.VAR22; VAR10 += VAR3)
    {
        VAR12 = VAR10 / VAR3;
        VAR13 = FUN9(VAR3, VAR2->VAR18.VAR22 - VAR10);
        if (VAR6[VAR12] != -1)
        {
            QXLRect update = {
                .VAR19 = VAR6[VAR12],
                .VAR20 = VAR2->VAR18.VAR20,
                .VAR21 = VAR10,
                .VAR22 = VAR10 + VAR13,
            };
            FUN10(VAR2, &update);
            VAR6[VAR12] = -1;
        }
    }
    memset(&VAR2->VAR18, 0, sizeof(VAR2->VAR18));
}