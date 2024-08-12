static int FUN1(VAR1 *VAR2, int64_t VAR3)
{
    VAR4 *VAR5 = VAR2->VAR6;
    VAR7 *VAR8 = &VAR5->VAR9;
    VAR10 *VAR9 = VAR8->VAR11;
    char *VAR12;
    int64_t VAR13 = -1, VAR14 = -1, VAR15, VAR16;
    int VAR17;
    int VAR18 = 0;
    for (VAR17 = 0; VAR17 < VAR8->VAR19; VAR17++)
        if (VAR9[VAR17].VAR20 == VAR21)
            break;
    if (VAR17 >= VAR8->VAR19)
        return -1;
    VAR15 = FUN2(VAR5->VAR22->VAR23);
    VAR13 = VAR9[VAR17].VAR24 + VAR5->VAR25;
    if (FUN3(VAR5->VAR22->VAR23, VAR13, VAR26) == VAR13)
    {
        uint64_t VAR27 = 0, VAR28 = 0, VAR29 = 0;
        VAR29 += FUN4(VAR5, VAR5->VAR22->VAR23, 4, &VAR28);
        VAR29 += FUN5(VAR5, VAR5->VAR22->VAR23, &VAR27);
        VAR14 = VAR13 + VAR27 + VAR29 - 1;
    }
    FUN3(VAR5->VAR22->VAR23, VAR15, VAR26);
    if (VAR13 == -1 || VAR14 == -1)
        return -1;
    FUN6(VAR5);
    FUN7(&VAR2->VAR30[0]->VAR31, VAR32, VAR13, 0);
    FUN7(&VAR2->VAR30[0]->VAR31, VAR33, VAR14, 0);
    if (VAR13 <= VAR3)
        FUN7(&VAR2->VAR30[0]->VAR31, VAR34, VAR13 - 1, 0);
    VAR16 = FUN8(VAR2, VAR13);
    if (VAR16 < 0)
        return -1;
    FUN7(&VAR2->VAR30[0]->VAR31, VAR35, VAR16, 0);
    FUN7(&VAR2->VAR30[0]->VAR31, VAR36, FUN9(VAR2), 0);
    VAR12 = FUN10(VAR2->VAR30[0]->VAR37, 20 * sizeof(char));
    if (!VAR12)
        return -1;
    strcpy(VAR12, "");
    for (VAR17 = 0; VAR17 < VAR2->VAR30[0]->VAR37; VAR17++)
    {
        int VAR38 = snprintf(VAR12 + VAR18, 20 * sizeof(char), "" VAR39, VAR2->VAR30[0]->VAR40[VAR17].VAR41);
        if (VAR38 <= 0 || (VAR38 == 20 && VAR17 == VAR2->VAR30[0]->VAR37 - 1))
        {
            FUN11(VAR2, VAR42, "");
            return VAR43;
        }
        VAR18 += VAR38;
        if (VAR17 != VAR2->VAR30[0]->VAR37 - 1)
        {
            strncat(VAR12, "", sizeof(char));
            VAR18++;
        }
    }
    FUN12(&VAR2->VAR30[0]->VAR31, VAR44, VAR12, 0);
    return 0;