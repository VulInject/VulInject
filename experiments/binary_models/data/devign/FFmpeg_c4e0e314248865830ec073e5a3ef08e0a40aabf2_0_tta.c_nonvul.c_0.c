static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    VAR6 *VAR7;
    int VAR8, VAR9, VAR10, VAR11;
    uint64_t VAR12, VAR13;
    uint32_t VAR14;
    if (!FUN2(VAR2->VAR15, "", NULL, VAR16))
        FUN3(VAR2);
    VAR13 = FUN4(VAR2->VAR17);
    if (FUN5(VAR2->VAR17) != FUN6(""))
        return -1;
    FUN7(VAR2->VAR17, 2);
    VAR9 = FUN8(VAR2->VAR17);
    VAR10 = FUN8(VAR2->VAR17);
    VAR11 = FUN5(VAR2->VAR17);
    if (VAR11 <= 0 || VAR11 > 1000000)
    {
        FUN9(VAR2, VAR18, "");
        return -1;
    }
    VAR14 = FUN5(VAR2->VAR17);
    if (!VAR14)
    {
        FUN9(VAR2, VAR18, "");
        return VAR19;
    }
    FUN7(VAR2->VAR17, 4);
    VAR4->VAR20 = VAR11 * 256 / 245;
    VAR4->VAR21 = VAR14 % VAR4->VAR20;
    if (!VAR4->VAR21)
        VAR4->VAR21 = VAR4->VAR20;
    VAR4->VAR22 = VAR14 / VAR4->VAR20 + (VAR4->VAR21 < VAR4->VAR20);
    VAR4->VAR23 = 0;
    if (VAR4->VAR22 >= VAR24 / sizeof(VAR25) || VAR4->VAR22 <= 0)
    {
        FUN9(VAR2, VAR18, "", VAR4->VAR22);
        return -1;
    }
    VAR7 = FUN10(VAR2, NULL);
    if (!VAR7)
        return FUN11(VAR26);
    FUN12(VAR7, 64, 1, VAR11);
    VAR7->VAR27 = 0;
    VAR7->VAR28 = VAR14;
    VAR12 = FUN4(VAR2->VAR17) + 4 * VAR4->VAR22 + 4;
    VAR7->VAR29->VAR30 = FUN4(VAR2->VAR17) - VAR13;
    VAR7->VAR29->VAR31 = FUN13(VAR7->VAR29->VAR30 + VAR32);
    if (!VAR7->VAR29->VAR31)
    {
        VAR7->VAR29->VAR30 = 0;
        return FUN11(VAR26);
    }
    FUN14(VAR2->VAR17, VAR13, VAR33);
    FUN15(VAR2->VAR17, VAR7->VAR29->VAR31, VAR7->VAR29->VAR30);
    for (VAR8 = 0; VAR8 < VAR4->VAR22; VAR8++)
    {
        uint32_t VAR34 = FUN5(VAR2->VAR17);
        FUN16(VAR7, VAR12, VAR8 * VAR4->VAR20, VAR34, 0, VAR35);
        VAR12 += VAR34;
    }
    FUN7(VAR2->VAR17, 4);
    VAR7->VAR29->VAR36 = VAR37;
    VAR7->VAR29->VAR38 = VAR39;
    VAR7->VAR29->VAR9 = VAR9;
    VAR7->VAR29->VAR40 = VAR11;
    VAR7->VAR29->VAR41 = VAR10;
    return 0;
}