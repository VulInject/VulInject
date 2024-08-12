static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    VAR6 *VAR7;
    uint16_t VAR8;
    VAR9 *VAR10;
    int VAR11, VAR12;
    if (!VAR4->VAR13)
        FUN2(VAR4->VAR14 + VAR4->VAR15, FUN3('', '', '', ''));
    FUN4(VAR4->VAR14 + VAR4->VAR15 + 8, VAR4->VAR16);
    FUN4(VAR4->VAR14 + VAR4->VAR15 + 12, VAR4->VAR17);
    VAR10 = VAR4->VAR14 + VAR4->VAR15 + 16;
    VAR10[0] = 0;
    for (VAR11 = 1; VAR11 < VAR18; ++VAR11)
    {
        int VAR19 = VAR11 * VAR4->VAR20 / VAR18;
        int VAR21 = 256LL * VAR4->VAR22[VAR19] / VAR4->VAR17;
        VAR10[VAR11] = FUN5(VAR21, 255);
    }
    VAR7 = (VAR6 *)FUN6(VAR2->VAR23[0], VAR24, &VAR12);
    if (VAR7 && VAR12 >= sizeof(*VAR7))
    {
        uint16_t VAR25;
        FUN4(VAR4->VAR14 + VAR4->VAR15 + 131, FUN7(VAR7->VAR26, 1 << 23, 100000));
        if (VAR7->VAR27 != VAR28)
        {
            VAR25 = FUN8(VAR7->VAR27 / 10000) & ((1 << 9) - 1);
            VAR25 |= (VAR7->VAR27 < 0) << 9;
            VAR25 |= 1 << 13;
            FUN9(VAR4->VAR14 + VAR4->VAR15 + 135, VAR25);
        }
        if (VAR7->VAR29 != VAR28)
        {
            VAR25 = FUN8(VAR7->VAR29 / 10000) & ((1 << 9) - 1);
            VAR25 |= (VAR7->VAR29 < 0) << 9;
            VAR25 |= 1 << 14;
            FUN9(VAR4->VAR14 + VAR4->VAR15 + 137, VAR25);
        }
    }
    FUN4(VAR4->VAR14 + VAR4->VAR15 + VAR30 - 8, VAR4->VAR31);
    FUN9(VAR4->VAR14 + VAR4->VAR15 + VAR30 - 4, VAR4->VAR32);
    VAR8 = FUN10(FUN11(VAR33), 0, VAR4->VAR14, 190);
    FUN9(VAR4->VAR14 + VAR4->VAR15 + VAR30 - 2, VAR8);
    FUN12(VAR2->VAR34, VAR4->VAR35, VAR36);
    FUN13(VAR2->VAR34, VAR4->VAR14, VAR4->VAR37);
    FUN12(VAR2->VAR34, 0, VAR38);
}