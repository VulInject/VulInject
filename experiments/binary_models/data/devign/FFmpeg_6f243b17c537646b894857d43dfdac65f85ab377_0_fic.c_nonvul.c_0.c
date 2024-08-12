static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    VAR7 *VAR8 = VAR2->VAR9;
    VAR10 *VAR11 = VAR6->VAR3;
    int VAR12;
    int VAR13, VAR14;
    int VAR15;
    int VAR16;
    VAR10 *VAR17;
    if ((VAR12 = FUN2(VAR2, VAR8->VAR18)) < 0)
    {
        FUN3(VAR2, VAR19, "");
        return VAR12;
    }
    if (VAR6->VAR20 < VAR21 + 4)
    {
        FUN3(VAR2, VAR19, "");
        return VAR22;
    }
    if (memcmp(VAR11, VAR23, 7))
        FUN3(VAR2, VAR24, "");
    if (VAR11[17])
        goto VAR25;
    VAR14 = VAR11[13];
    if (!VAR14)
    {
        FUN3(VAR2, VAR19, "");
        return VAR22;
    }
    VAR8->VAR26 = VAR11[23] ? VAR27 : VAR28;
    VAR16 = FUN4(VAR11 + 24);
    if (VAR16 > VAR6->VAR20 - VAR21)
    {
        FUN3(VAR2, VAR19, "");
        return VAR22;
    }
    VAR8->VAR29 = 16 * (VAR8->VAR30 >> 4) / VAR14;
    if (VAR8->VAR29 % 16)
        VAR8->VAR29 = FUN5(VAR8->VAR29 - 16, 16);
    VAR17 = VAR11 + VAR16 + VAR21 + 4 * VAR14;
    VAR15 = VAR6->VAR20 - VAR14 * 4 - VAR16 - VAR21;
    if (VAR15 <= 0)
    {
        FUN3(VAR2, VAR19, "");
        return VAR22;
    }
    VAR8->VAR18->VAR31 = 1;
    VAR8->VAR18->VAR32 = VAR33;
    FUN6(&VAR8->VAR34, &VAR8->VAR35, VAR14 * sizeof(VAR8->VAR34[0]));
    if (!VAR8->VAR35)
    {
        FUN3(VAR2, VAR19, "");
        return FUN7(VAR36);
    }
    memset(VAR8->VAR34, 0, VAR14 * sizeof(VAR8->VAR34[0]));
    for (VAR13 = 0; VAR13 < VAR14; VAR13++)
    {
        unsigned VAR37 = FUN8(VAR11 + VAR16 + VAR21 + VAR13 * 4);
        unsigned VAR38;
        int VAR39 = VAR8->VAR29 * VAR13;
        int VAR29 = VAR8->VAR29;
        if (VAR13 == VAR14 - 1)
        {
            VAR38 = VAR15;
            VAR29 = FUN5(VAR2->VAR40 - VAR8->VAR29 * (VAR14 - 1), 16);
        }
        else
        {
            VAR38 = FUN8(VAR11 + VAR16 + VAR21 + VAR13 * 4 + 4);
        }
        if (VAR38 < VAR37 || VAR38 > VAR15)
            continue;
        VAR38 -= VAR37;
        VAR8->VAR34[VAR13].VAR11 = VAR17 + VAR37;
        VAR8->VAR34[VAR13].VAR41 = VAR38;
        VAR8->VAR34[VAR13].VAR29 = VAR29;
        VAR8->VAR34[VAR13].VAR39 = VAR39;
    }
    if ((VAR12 = VAR2->FUN9(VAR2, VAR42, VAR8->VAR34, NULL, VAR14, sizeof(VAR8->VAR34[0]))) < 0)
        return VAR12;
VAR25:
    *VAR4 = 1;
    if ((VAR12 = FUN10(VAR3, VAR8->VAR18)) < 0)
        return VAR12;
    return VAR6->VAR20;
}