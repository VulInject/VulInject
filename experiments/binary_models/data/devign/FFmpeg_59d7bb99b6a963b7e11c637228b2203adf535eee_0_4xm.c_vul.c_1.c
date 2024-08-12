static int FUN1(VAR1 *VAR2, VAR3 *VAR4, const VAR5 *VAR6, int VAR7)
{
    int VAR8, VAR9, VAR10;
    const int VAR11 = VAR2->VAR12->VAR11;
    const int VAR13 = VAR2->VAR12->VAR13;
    const unsigned int VAR14 = FUN2(VAR6);
    int token_count VAR15;
    unsigned int VAR16;
    const VAR5 *VAR17;
    if (VAR7 < VAR14 + 12)
    {
        FUN3(VAR2->VAR12, VAR18, "");
        return VAR19;
    }
    VAR20 = FUN2(VAR6 + VAR14 + 8);
    VAR16 = 4 * FUN2(VAR6 + VAR14 + 4);
    VAR17 = VAR6 + VAR14 + 12;
    if (VAR16 + VAR14 + 12 != VAR7 || VAR14 > (1 << 26) || VAR16 > (1 << 26))
    {
        FUN3(VAR2->VAR12, VAR18, "", VAR16, VAR14, VAR7);
        return VAR19;
    }
    VAR17 = FUN4(VAR2, VAR17, VAR16);
    if (!VAR17)
    {
        FUN3(VAR2->VAR12, VAR18, "");
        return VAR19;
    }
    FUN5(&VAR2->VAR21, VAR6 + 4, 8 * VAR14);
    VAR16 = VAR7 + VAR6 - VAR17;
    FUN6(&VAR2->VAR22, &VAR2->VAR23, VAR16 + VAR24);
    if (!VAR2->VAR22)
        return FUN7(VAR25);
    VAR2->VAR26.FUN8(VAR2->VAR22, (const VAR27 *)VAR17, VAR16 / 4);
    memset((VAR5 *)VAR2->VAR22 + VAR16, 0, VAR24);
    FUN5(&VAR2->VAR28, VAR2->VAR22, 8 * VAR16);
    VAR2->VAR29 = 0 * 128 * 8 * 8;
    for (VAR9 = 0; VAR9 < VAR13; VAR9 += 16)
    {
        for (VAR8 = 0; VAR8 < VAR11; VAR8 += 16)
        {
            if ((VAR10 = FUN9(VAR2)) < 0)
                return VAR10;
            FUN10(VAR2, VAR4, VAR8, VAR9);
        }
    }
    if (FUN11(&VAR2->VAR28, VAR2->VAR30.VAR31, VAR32, 3) != 256)
        FUN3(VAR2->VAR12, VAR18, "");
    return 0;
}