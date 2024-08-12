static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    VAR6 *VAR7;
    int VAR8, VAR9, VAR10, VAR11;
    uint64_t VAR12, VAR13;
    uint32_t VAR14, VAR15;
    FUN2(VAR2);
    VAR13 = FUN3(VAR2->VAR16);
    FUN4(VAR2->VAR16, VAR17, VAR18);
    if (FUN5(VAR2->VAR16) != FUN6(""))
        return VAR19;
    FUN7(VAR2->VAR16, 2);
    VAR9 = FUN8(VAR2->VAR16);
    VAR10 = FUN8(VAR2->VAR16);
    VAR11 = FUN5(VAR2->VAR16);
    if (VAR11 <= 0 || VAR11 > 1000000)
    {
        FUN9(VAR2, VAR20, "");
        return VAR19;
    }
    VAR14 = FUN5(VAR2->VAR16);
    if (!VAR14)
    {
        FUN9(VAR2, VAR20, "");
        return VAR19;
    }
    VAR15 = FUN10(VAR2->VAR16) ^ VAR18;
    if (VAR15 != FUN5(VAR2->VAR16))
    {
        FUN9(VAR2, VAR20, "");
        return VAR19;
    }
    VAR4->VAR21 = VAR11 * 256 / 245;
    VAR4->VAR22 = VAR14 % VAR4->VAR21;
    if (!VAR4->VAR22)
        VAR4->VAR22 = VAR4->VAR21;
    VAR4->VAR23 = VAR14 / VAR4->VAR21 + (VAR4->VAR22 < VAR4->VAR21);
    VAR4->VAR24 = 0;
    if (VAR4->VAR23 >= VAR25 / sizeof(VAR26) || VAR4->VAR23 <= 0)
    {
        FUN9(VAR2, VAR20, "", VAR4->VAR23);
        return VAR19;
    }
    VAR7 = FUN11(VAR2, NULL);
    if (!VAR7)
        return FUN12(VAR27);
    FUN13(VAR7, 64, 1, VAR11);
    VAR7->VAR28 = 0;
    VAR7->VAR29 = VAR14;
    VAR12 = FUN3(VAR2->VAR16) + 4 * VAR4->VAR23 + 4;
    if (FUN14(VAR7->VAR30, FUN3(VAR2->VAR16) - VAR13))
        return FUN12(VAR27);
    FUN15(VAR2->VAR16, VAR13, VAR31);
    FUN16(VAR2->VAR16, VAR7->VAR30->VAR32, VAR7->VAR30->VAR33);
    FUN4(VAR2->VAR16, VAR17, VAR18);
    for (VAR8 = 0; VAR8 < VAR4->VAR23; VAR8++)
    {
        uint32_t VAR34 = FUN5(VAR2->VAR16);
        FUN17(VAR7, VAR12, VAR8 * VAR4->VAR21, VAR34, 0, VAR35);
        VAR12 += VAR34;
    }
    VAR15 = FUN10(VAR2->VAR16) ^ VAR18;
    if (VAR15 != FUN5(VAR2->VAR16))
    {
        FUN9(VAR2, VAR20, "");
        return VAR19;
    }
    VAR7->VAR30->VAR36 = VAR37;
    VAR7->VAR30->VAR38 = VAR39;
    VAR7->VAR30->VAR9 = VAR9;
    VAR7->VAR30->VAR40 = VAR11;
    VAR7->VAR30->VAR41 = VAR10;
    if (VAR2->VAR16->VAR42)
    {
        int64_t VAR43 = FUN3(VAR2->VAR16);
        FUN18(VAR2);
        FUN15(VAR2->VAR16, VAR43, VAR31);
    }
    return 0;
}