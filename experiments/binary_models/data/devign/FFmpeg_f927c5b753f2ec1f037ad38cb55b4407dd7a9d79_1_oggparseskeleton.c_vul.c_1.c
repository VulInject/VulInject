static int FUN1(VAR1 *VAR2, int VAR3)
{
    struct VAR4 *VAR4 = VAR2->VAR5;
    struct VAR6 *VAR7 = VAR4->VAR8 + VAR3;
    VAR9 *VAR10 = VAR2->VAR8[VAR3];
    VAR11 *VAR12 = VAR7->VAR12 + VAR7->VAR13;
    int VAR14, VAR15;
    int64_t VAR16, VAR17, VAR18;
    int VAR19, VAR20;
    strcpy(VAR10->VAR21->VAR22, "");
    VAR10->VAR21->VAR23 = VAR24;
    if (VAR7->VAR25 < 8)
        return -1;
    if (!FUN2(VAR12, "", 8))
    {
        if (VAR7->VAR25 < 64)
            return -1;
        VAR14 = FUN3(VAR12 + 8);
        VAR15 = FUN3(VAR12 + 10);
        if (VAR14 != 3 && VAR14 != 4)
        {
            FUN4(VAR2, VAR26, "", VAR14, VAR15);
            return -1;
        }
        VAR16 = FUN5(VAR12 + 12);
        VAR17 = FUN5(VAR12 + 20);
        if (VAR17)
        {
            int VAR27;
            FUN6(&VAR20, &VAR27, VAR16, VAR17, VAR28);
            FUN7(VAR10, 64, 1, VAR27);
            VAR7->VAR29 = VAR10->VAR20 = VAR20;
        }
    }
    else if (!FUN2(VAR12, "", 8))
    {
        if (VAR7->VAR25 < 52)
            return -1;
        VAR19 = FUN8(VAR4, FUN9(VAR12 + 12));
        VAR18 = FUN5(VAR12 + 36);
        if (VAR19 >= 0 && VAR18 != -1)
        {
            VAR4->VAR8[VAR19].VAR29 = VAR2->VAR8[VAR19]->VAR20 = FUN10(VAR2, VAR19, VAR18, NULL);
        }
    }
    return 1;
}