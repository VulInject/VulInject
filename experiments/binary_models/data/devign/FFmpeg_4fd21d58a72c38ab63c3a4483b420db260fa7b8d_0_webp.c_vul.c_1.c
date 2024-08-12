static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4;
    VAR3 *VAR5;
    int VAR6, VAR7, VAR8;
    VAR9 *VAR10, *VAR11;
    VAR4 = &VAR2->VAR12[VAR13];
    VAR5 = &VAR2->VAR12[VAR14];
    if (VAR5->VAR15 > 0)
    {
        GetBitContext VAR16;
        VAR9 *VAR17;
        int VAR18 = 8 >> VAR5->VAR15;
        VAR17 = FUN2(VAR4->VAR19->VAR20[0]);
        if (!VAR17)
            return FUN3(VAR21);
        for (VAR8 = 0; VAR8 < VAR4->VAR19->VAR22; VAR8++)
        {
            VAR10 = FUN4(VAR4->VAR19, 0, VAR8);
            memcpy(VAR17, VAR10, VAR4->VAR19->VAR20[0]);
            FUN5(&VAR16, VAR17, VAR4->VAR19->VAR20[0] * 8);
            FUN6(&VAR16, 16);
            VAR6 = 0;
            for (VAR7 = 0; VAR7 < VAR4->VAR19->VAR23; VAR7++)
            {
                VAR10 = FUN4(VAR4->VAR19, VAR7, VAR8);
                VAR10[2] = FUN7(&VAR16, VAR18);
                VAR6++;
                if (VAR6 == 1 << VAR5->VAR15)
                {
                    FUN6(&VAR16, 24);
                    VAR6 = 0;
                }
            }
        }
        FUN8(VAR17);
    }
    for (VAR8 = 0; VAR8 < VAR4->VAR19->VAR22; VAR8++)
    {
        for (VAR7 = 0; VAR7 < VAR4->VAR19->VAR23; VAR7++)
        {
            VAR10 = FUN4(VAR4->VAR19, VAR7, VAR8);
            VAR6 = VAR10[2];
            if (VAR6 >= VAR5->VAR19->VAR23)
            {
                FUN9(VAR2->VAR24, VAR25, "", VAR6);
                return VAR26;
            }
            VAR11 = FUN4(VAR5->VAR19, VAR6, 0);
            FUN10(VAR10, VAR11);
        }
    }
    return 0;
}