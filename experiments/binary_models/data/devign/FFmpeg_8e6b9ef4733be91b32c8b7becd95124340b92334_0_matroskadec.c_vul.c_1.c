static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    VAR6 *VAR7 = &VAR4->VAR8;
    VAR9 *VAR8 = VAR7->VAR10;
    char *VAR11;
    int64_t VAR12 = -1, VAR13 = -1, VAR14, VAR15;
    int VAR16;
    for (VAR16 = 0; VAR16 < VAR7->VAR17; VAR16++)
        if (VAR8[VAR16].VAR18 == VAR19)
            break;
    if (VAR16 >= VAR7->VAR17)
        return -1;
    VAR14 = FUN2(VAR4->VAR20->VAR21);
    VAR12 = VAR8[VAR16].VAR22 + VAR4->VAR23;
    if (FUN3(VAR4->VAR20->VAR21, VAR12, VAR24) == VAR12)
    {
        uint64_t VAR25 = 0, VAR26 = 0, VAR27 = 0;
        VAR27 += FUN4(VAR4, VAR4->VAR20->VAR21, 4, &VAR26);
        VAR27 += FUN5(VAR4, VAR4->VAR20->VAR21, &VAR25);
        VAR13 = VAR12 + VAR25 + VAR27 - 1;
    }
    FUN3(VAR4->VAR20->VAR21, VAR14, VAR24);
    if (VAR12 == -1 || VAR13 == -1)
        return -1;
    FUN6(VAR4);
    FUN7(&VAR2->VAR28[0]->VAR29, VAR30, VAR12, 0);
    FUN7(&VAR2->VAR28[0]->VAR29, VAR31, VAR13, 0);
    VAR15 = FUN8(VAR2, VAR12);
    if (VAR15 < 0)
        return -1;
    FUN7(&VAR2->VAR28[0]->VAR29, VAR32, VAR15, 0);
    FUN7(&VAR2->VAR28[0]->VAR29, VAR33, FUN9(VAR2), 0);
    VAR11 = FUN10(VAR2->VAR28[0]->VAR34, 20 * sizeof(char));
    if (!VAR11)
        return -1;
    strcpy(VAR11, "");
    for (VAR16 = 0; VAR16 < VAR2->VAR28[0]->VAR34; VAR16++)
    {
        snprintf(VAR11, (VAR16 + 1) * 20 * sizeof(char), "" VAR35, VAR11, VAR2->VAR28[0]->VAR36[VAR16].VAR37);
        if (VAR16 != VAR2->VAR28[0]->VAR34 - 1)
            strncat(VAR11, "", sizeof(char));
    }
    FUN11(&VAR2->VAR28[0]->VAR29, VAR38, VAR11, 0);
    FUN12(VAR11);
    return 0;
}