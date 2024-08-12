static int FUN1(VAR1 *VAR2, int64_t VAR3)
{
    VAR4 *VAR5 = VAR2->VAR5;
    VAR6 *VAR7 = VAR2->VAR8[0];
    VAR9 *VAR10 = VAR2->VAR11;
    int64_t VAR12 = 0, VAR13;
    int VAR14, VAR15;
    VAR13 = FUN2(VAR5);
    VAR14 = FUN3(VAR5);
    if (VAR14 < 0 || VAR16 / sizeof(VAR17) < VAR14)
        return VAR18;
    VAR7->VAR19 = FUN3(VAR5);
    VAR7->VAR19 += FUN4(VAR5);
    VAR7->VAR19 += FUN4(VAR5);
    VAR7->VAR20 = 0;
    for (VAR15 = 0; VAR15 < VAR14; VAR15++)
    {
        FUN5(VAR2->VAR8[0], VAR12, VAR7->VAR20, 0, 0, VAR21);
        VAR12 += VAR10->VAR22 ? VAR10->VAR22 : FUN6(VAR5);
        VAR7->VAR20 += VAR10->VAR23 ? VAR10->VAR23 : FUN6(VAR5);
    }
    if (FUN2(VAR5) - VAR13 > VAR3)
    {
        FUN7(VAR2, VAR24, "");
        return VAR18;
    }
    FUN8(VAR5, VAR13 + VAR3 - FUN2(VAR5));
    VAR10->VAR25 = VAR12;
    return 0;
}