static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    VAR6 *VAR7;
    if (FUN2(VAR2) <= 0)
        return FUN3(VAR8);
    if (FUN4(VAR2, &VAR4->VAR9) || FUN4(VAR2, &VAR4->VAR10))
        return FUN3(VAR11);
    if (VAR4->VAR12)
    {
        if (VAR4->VAR13 <= 0 || VAR4->VAR13 > 2)
        {
            FUN5(VAR2, VAR14, "", VAR4->VAR13);
            VAR4->VAR12 = 0;
            return 1;
        }
        if (VAR4->VAR15 <= 0)
        {
            FUN5(VAR2, VAR16, "", VAR4->VAR15);
            VAR4->VAR12 = 0;
            return 1;
        }
        if (VAR4->VAR17 <= 0)
        {
            FUN5(VAR2, VAR16, "", VAR4->VAR17);
            VAR4->VAR12 = VAR18;
            return 1;
        }
        VAR7 = FUN6(VAR2, NULL);
        if (!VAR7)
            return FUN3(VAR11);
        FUN7(VAR7, 33, 1, VAR4->VAR15);
        VAR7->VAR19->VAR20 = VAR21;
        VAR7->VAR19->VAR22 = VAR4->VAR12;
        VAR7->VAR19->VAR23 = 0;
        VAR7->VAR19->VAR24 = VAR4->VAR13;
        VAR7->VAR19->VAR15 = VAR4->VAR15;
        VAR7->VAR19->VAR25 = VAR4->VAR17 * 8;
        VAR7->VAR19->VAR26 = (VAR27)VAR7->VAR19->VAR24 * VAR7->VAR19->VAR15 * VAR7->VAR19->VAR25 / 4;
        VAR7->VAR19->VAR28 = VAR7->VAR19->VAR24 * VAR7->VAR19->VAR25;
        VAR4->VAR29 = VAR7->VAR30;
        VAR7->VAR31 = 0;
    }
    return 1;
}