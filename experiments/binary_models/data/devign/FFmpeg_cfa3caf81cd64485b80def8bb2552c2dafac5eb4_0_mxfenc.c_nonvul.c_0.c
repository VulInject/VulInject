static void FUN1(VAR1 *VAR2, int VAR3, int VAR4, const VAR5 *VAR6, int VAR7)
{
    VAR8 *VAR9 = VAR2->VAR10;
    VAR11 *VAR12 = VAR2->VAR12;
    int64_t VAR13;
    unsigned VAR14 = 0;
    uint64_t VAR15 = FUN2(VAR12);
    if (VAR9->VAR16)
    {
        VAR14 = 109 + (VAR2->VAR17 + 1) * 6 + VAR9->VAR16 * (11 + VAR9->VAR18 * 4);
        VAR14 += 16 + FUN3(VAR14);
        VAR14 += FUN4(VAR14);
    }
    if (!memcmp(VAR6, VAR19, 16))
    {
        VAR9->VAR20 = FUN5(VAR9->VAR20, (VAR9->VAR21 + 1) * sizeof(*VAR9->VAR20));
        VAR9->VAR20[VAR9->VAR21++] = VAR15;
    }
    FUN6(VAR12, VAR6, 16);
    FUN7(VAR12, 88 + 16 * VAR9->VAR22);
    FUN8(VAR12, 1);
    FUN8(VAR12, 2);
    FUN9(VAR12, VAR23);
    FUN10(VAR12, VAR15);
    if (!memcmp(VAR6, VAR19, 16) && VAR9->VAR21 > 1)
        FUN10(VAR12, VAR9->VAR20[VAR9->VAR21 - 2]);
    else if (!memcmp(VAR6, VAR24, 16) && VAR9->VAR21)
        FUN10(VAR12, VAR9->VAR20[VAR9->VAR21 - 1]);
    else
        FUN10(VAR12, 0);
    FUN10(VAR12, VAR9->VAR25);
    VAR13 = FUN2(VAR12);
    FUN10(VAR12, 0);
    FUN10(VAR12, VAR14);
    FUN9(VAR12, VAR14 ? VAR4 : 0);
    if (VAR3 && VAR9->VAR16)
    {
        uint64_t VAR26 = FUN2(VAR12) + 8 + 4 + 16 + 8 + 16 * VAR9->VAR22;
        FUN10(VAR12, VAR26 + FUN4(VAR26) + VAR14 - VAR9->VAR27);
    }
    else
        FUN10(VAR12, 0);
    FUN9(VAR12, VAR3);
    if (VAR2->VAR17 > 1)
    {
        FUN6(VAR12, VAR28, 14);
        FUN8(VAR12, 0x0900);
    }
    else
    {
        FUN6(VAR12, VAR28, 16);
    }
    FUN11(VAR2);
    if (VAR7)
    {
        int64_t VAR29, VAR30;
        unsigned VAR31;
        FUN12(VAR2);
        VAR30 = FUN2(VAR2->VAR12);
        FUN13(VAR2);
        FUN14(VAR2);
        VAR29 = FUN2(VAR2->VAR12);
        VAR31 = VAR29 - VAR30 + FUN4(VAR29);
        FUN15(VAR12, VAR13, VAR32);
        FUN10(VAR12, VAR31);
        FUN15(VAR12, VAR29, VAR32);
    }
    FUN16(VAR12);
}