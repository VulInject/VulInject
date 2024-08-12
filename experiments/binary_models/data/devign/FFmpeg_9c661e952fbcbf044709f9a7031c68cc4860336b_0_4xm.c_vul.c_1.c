static int FUN1(VAR1 *VAR2, const VAR3 *VAR4, int VAR5)
{
    int VAR6, VAR7;
    const int VAR8 = VAR2->VAR9->VAR8;
    const int VAR10 = VAR2->VAR9->VAR10;
    VAR11 *VAR12 = (VAR11 *)VAR2->VAR13.VAR14[0];
    const int VAR15 = VAR2->VAR13.VAR16[0] >> 1;
    const unsigned int VAR17 = FUN2(VAR4);
    const int token_count VAR18 = FUN2(VAR4 + VAR17 + 8);
    unsigned int VAR19 = 4 * FUN2(VAR4 + VAR17 + 4);
    const VAR3 *VAR20 = VAR4 + VAR17 + 12;
    if (VAR19 + VAR17 + 12 != VAR5 || VAR17 > (1 << 26) || VAR19 > (1 << 26))
    {
        FUN3(VAR2->VAR9, VAR21, "", VAR19, VAR17, VAR5);
        return -1;
    }
    VAR20 = FUN4(VAR2, VAR20);
    FUN5(&VAR2->VAR22, VAR4 + 4, 8 * VAR17);
    VAR19 = VAR5 + VAR4 - VAR20;
    FUN6(&VAR2->VAR23, &VAR2->VAR24, VAR19 + VAR25);
    if (!VAR2->VAR23)
        return FUN7(VAR26);
    VAR2->VAR27.FUN8(VAR2->VAR23, (const VAR28 *)VAR20, VAR19 / 4);
    memset((VAR3 *)VAR2->VAR23 + VAR19, 0, VAR25);
    FUN5(&VAR2->VAR29, VAR2->VAR23, 8 * VAR19);
    VAR2->VAR30 = 0 * 128 * 8 * 8;
    for (VAR7 = 0; VAR7 < VAR10; VAR7 += 16)
    {
        for (VAR6 = 0; VAR6 < VAR8; VAR6 += 16)
        {
            if (FUN9(VAR2) < 0)
                return -1;
            FUN10(VAR2, VAR6, VAR7);
        }
        VAR12 += 16 * VAR15;
    }
    if (FUN11(&VAR2->VAR29, VAR2->VAR31.VAR32, VAR33, 3) != 256)
        FUN3(VAR2->VAR9, VAR21, "");
    return 0;
}