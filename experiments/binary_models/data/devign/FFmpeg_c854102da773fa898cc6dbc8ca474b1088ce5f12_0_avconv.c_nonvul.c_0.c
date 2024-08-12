static int FUN1(int VAR1, char *VAR2, int VAR3)
{
    int VAR4, VAR5;
    VAR6 *VAR7 = VAR8[VAR1];
    if (VAR7->VAR9)
    {
        VAR10 *VAR11 = VAR7->VAR12;
        if (!VAR11)
        {
            snprintf(VAR2, VAR3, "", VAR7->VAR13->VAR11->VAR14, VAR7->VAR15, VAR7->VAR13->VAR16);
            return FUN2(VAR17);
        }
        for (VAR4 = 0; VAR4 < VAR18; VAR4++)
        {
            VAR19 *VAR20 = VAR21[VAR4];
            if (VAR20->VAR22 == VAR1)
            {
                FUN3(VAR7->VAR13->VAR11, VAR11, VAR20->VAR13->VAR11);
                break;
            }
        }
        if (VAR11->VAR23 == VAR24 && VAR11->VAR25 & VAR26)
        {
            VAR7->VAR13->VAR11->VAR27 = VAR28;
            VAR7->VAR13->VAR11->VAR29 = VAR30;
            VAR7->VAR13->VAR11->VAR31 = &VAR7->VAR32;
        }
        if (!FUN4(VAR7->VAR33, "", NULL, 0))
            FUN5(&VAR7->VAR33, "", "", 0);
        if ((VAR5 = FUN6(VAR7->VAR13->VAR11, VAR11, &VAR7->VAR33)) < 0)
        {
            if (VAR5 == VAR34)
                FUN7(VAR11, 0);
            snprintf(VAR2, VAR3, "", VAR7->VAR15, VAR7->VAR13->VAR16);
            return VAR5;
        }
        FUN8(VAR7->VAR33);
    }
    VAR7->VAR35 = VAR7->VAR13->VAR36.VAR37 ? -VAR7->VAR13->VAR11->VAR38 * VAR39 / FUN9(VAR7->VAR13->VAR36) : 0;
    VAR7->VAR40 = VAR41;
    FUN10(&VAR7->VAR42);
    VAR7->VAR43 = 1;
    return 0;
}