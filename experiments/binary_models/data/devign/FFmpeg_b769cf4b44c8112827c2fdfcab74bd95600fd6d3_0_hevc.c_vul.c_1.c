static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    const VAR5 *VAR6 = FUN2(VAR4->VAR7);
    int VAR8 = VAR6->VAR9[0].VAR10 > 7;
    int VAR11, VAR12;
    if (!VAR6)
        return FUN3(VAR13);
    FUN4(VAR2->VAR14, VAR15, "", VAR2->VAR16);
    if (VAR8 && !VAR2->VAR17)
    {
        FUN5(&VAR2->VAR17, &VAR2->VAR18, FUN6(VAR4->VAR19[0], VAR4->VAR19[1], VAR4->VAR19[2]));
        if (!VAR2->VAR17)
            return FUN3(VAR20);
    }
    for (VAR11 = 0; VAR4->VAR21[VAR11]; VAR11++)
    {
        int VAR22 = VAR2->VAR14->VAR23;
        int VAR24 = VAR2->VAR14->VAR25;
        int VAR26 = (VAR11 == 1 || VAR11 == 2) ? (VAR22 >> VAR6->VAR27) : VAR22;
        int VAR28 = (VAR11 == 1 || VAR11 == 2) ? (VAR24 >> VAR6->VAR29) : VAR24;
        uint8_t VAR30[16];
        FUN7(VAR2->VAR31);
        for (VAR12 = 0; VAR12 < VAR28; VAR12++)
        {
            const VAR32 *VAR33 = VAR4->VAR21[VAR11] + VAR12 * VAR4->VAR19[VAR11];
            if (VAR8)
            {
                VAR2->VAR34.FUN8((VAR35 *)VAR2->VAR17, (const VAR35 *)VAR33, VAR26);
                VAR33 = VAR2->VAR17;
            }
            FUN9(VAR2->VAR31, VAR33, VAR26 << VAR8);
        }
        FUN10(VAR2->VAR31, VAR30);
        if (!memcmp(VAR30, VAR2->VAR30[VAR11], 16))
        {
            FUN4(VAR2->VAR14, VAR15, "", VAR11);
            FUN11(VAR2->VAR14, VAR15, VAR30);
            FUN4(VAR2->VAR14, VAR15, "");
        }
        else
        {
            FUN4(VAR2->VAR14, VAR36, "", VAR11);
            FUN11(VAR2->VAR14, VAR36, VAR30);
            FUN4(VAR2->VAR14, VAR36, "");
            FUN11(VAR2->VAR14, VAR36, VAR2->VAR30[VAR11]);
            FUN4(VAR2->VAR14, VAR36, "");
            return VAR37;
        }
    }
    FUN4(VAR2->VAR14, VAR15, "");
    return 0;
}