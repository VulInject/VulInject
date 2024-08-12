static int FUN1(VAR1 *VAR2, int VAR3, int VAR4, const VAR5 *VAR6, int VAR7)
{
    VAR8 *VAR9 = VAR2->VAR10;
    VAR11 *VAR12 = VAR2->VAR12;
    int64_t VAR13;
    unsigned VAR14 = 0;
    uint64_t VAR15 = FUN2(VAR12);
    int VAR16;
    if (!VAR9->VAR17 && VAR9->VAR18)
        VAR14 = 85 + 12 + (VAR2->VAR19 + 1) * 6 + 12 + VAR9->VAR18 * (11 + VAR9->VAR20 * 4);
    else if (VAR9->VAR17 && VAR4)
        VAR14 = 80;
    if (VAR14)
    {
        VAR14 += 16 + FUN3(VAR14);
        VAR14 += FUN4(VAR14);
    }
    if (!memcmp(VAR6, VAR21, 16))
    {
        if ((VAR16 = FUN5(&VAR9->VAR22, VAR9->VAR23 + 1, sizeof(*VAR9->VAR22))) < 0)
        {
            VAR9->VAR23 = 0;
            return VAR16;
        }
        VAR9->VAR22[VAR9->VAR23++] = VAR15;
    }
    FUN6(VAR12, VAR6, 16);
    FUN7(VAR12, 88 + 16 * VAR9->VAR24);
    FUN8(VAR12, 1);
    FUN8(VAR12, 2);
    FUN9(VAR12, VAR25);
    FUN10(VAR12, VAR15);
    if (!memcmp(VAR6, VAR21, 16) && VAR9->VAR23 > 1)
        FUN10(VAR12, VAR9->VAR22[VAR9->VAR23 - 2]);
    else if (!memcmp(VAR6, VAR26, 16) && VAR9->VAR23)
        FUN10(VAR12, VAR9->VAR22[VAR9->VAR23 - 1]);
    else
        FUN10(VAR12, 0);
    FUN10(VAR12, VAR9->VAR27);
    VAR13 = FUN2(VAR12);
    FUN10(VAR12, 0);
    FUN10(VAR12, VAR14);
    FUN9(VAR12, VAR14 ? VAR4 : 0);
    if (VAR3 && VAR9->VAR18 && VAR9->VAR23)
    {
        FUN10(VAR12, VAR9->VAR28);
    }
    else
        FUN10(VAR12, 0);
    FUN9(VAR12, VAR3);
    FUN6(VAR12, VAR29, 16);
    FUN11(VAR2);
    if (VAR7)
    {
        int64_t VAR30, VAR31;
        unsigned VAR32;
        FUN12(VAR2);
        VAR31 = FUN2(VAR2->VAR12);
        FUN13(VAR2);
        FUN14(VAR2);
        VAR30 = FUN2(VAR2->VAR12);
        VAR32 = VAR30 - VAR31 + FUN4(VAR30);
        FUN15(VAR12, VAR13, VAR33);
        FUN10(VAR12, VAR32);
        FUN15(VAR12, VAR30, VAR33);
    }
    FUN16(VAR12);
    return 0;
}