static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5)
{
    int VAR6, VAR7, VAR8;
    VAR9 *VAR10 = &VAR2->VAR10;
    VAR11 *VAR12 = &VAR2->VAR12;
    FUN2(VAR2->VAR13, VAR14, "");
    for (VAR7 = 0; VAR7 < VAR10->VAR15; VAR7++)
    {
        for (VAR6 = 0; VAR6 < VAR2->VAR16; VAR6++)
        {
            int VAR17;
            VAR18 *VAR19 = VAR2->VAR4[VAR5].VAR20[VAR6].VAR19 + VAR7;
            for (VAR17 = 0; VAR17 < VAR19->VAR21 * VAR19->VAR22; VAR17++)
            {
                if (VAR8 = FUN3(VAR2, VAR19, VAR17, VAR12->VAR23 + (VAR7 ? 3 * VAR7 - 2 : 0), VAR12->VAR24))
                    return VAR8;
            }
        }
    }
    FUN2(VAR2->VAR13, VAR14, "");
    return 0;
}