static int FUN1(VAR1 *VAR2, VAR3 *VAR4, double VAR5)
{
    VAR6 *VAR7;
    int VAR8;
    static struct VAR9 *VAR10;
    FUN2(VAR2->VAR11);
    while (VAR2->VAR12 >= VAR13 && !VAR2->VAR14.VAR15)
    {
        FUN3(VAR2->VAR16, VAR2->VAR11);
    }
    FUN4(VAR2->VAR11);
    if (VAR2->VAR14.VAR15)
        return -1;
    VAR7 = &VAR2->VAR17[VAR2->VAR18];
    if (!VAR7->VAR19 || VAR7->VAR20 != VAR2->VAR21->VAR22->VAR20 || VAR7->VAR23 != VAR2->VAR21->VAR22->VAR23)
    {
        SDL_Event VAR24;
        VAR7->VAR25 = 0;
        VAR24.VAR26 = VAR27;
        VAR24.VAR28.VAR29 = VAR2;
        FUN5(&VAR24);
        FUN2(VAR2->VAR11);
        while (!VAR7->VAR25 && !VAR2->VAR14.VAR15)
        {
            FUN3(VAR2->VAR16, VAR2->VAR11);
        }
        FUN4(VAR2->VAR11);
        if (VAR2->VAR14.VAR15)
            return -1;
    }
    if (VAR7->VAR19)
    {
        AVPicture VAR30;
        FUN6(VAR7->VAR19);
        VAR8 = VAR31;
        memset(&VAR30, 0, sizeof(VAR32));
        VAR30.VAR33[0] = VAR7->VAR19->VAR34[0];
        VAR30.VAR33[1] = VAR7->VAR19->VAR34[2];
        VAR30.VAR33[2] = VAR7->VAR19->VAR34[1];
        VAR30.VAR35[0] = VAR7->VAR19->VAR36[0];
        VAR30.VAR35[1] = VAR7->VAR19->VAR36[2];
        VAR30.VAR35[2] = VAR7->VAR19->VAR36[1];
        VAR37 = FUN7(VAR38, "", NULL);
        VAR10 = FUN8(VAR10, VAR2->VAR21->VAR22->VAR20, VAR2->VAR21->VAR22->VAR23, VAR2->VAR21->VAR22->VAR39, VAR2->VAR21->VAR22->VAR20, VAR2->VAR21->VAR22->VAR23, VAR8, VAR37, NULL, NULL, NULL);
        if (VAR10 == NULL)
        {
            fprintf(VAR40, "");
            FUN9(1);
        }
        FUN10(VAR10, VAR4->VAR33, VAR4->VAR35, 0, VAR2->VAR21->VAR22->VAR23, VAR30.VAR33, VAR30.VAR35);
        FUN11(VAR7->VAR19);
        VAR7->VAR5 = VAR5;
        if (++VAR2->VAR18 == VAR13)
            VAR2->VAR18 = 0;
        FUN2(VAR2->VAR11);
        VAR2->VAR12++;
        FUN4(VAR2->VAR11);
    }
    return 0;
}