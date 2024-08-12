static void FUN1(VAR1 *VAR2, VAR3 **VAR4)
{
    int VAR5;
    VAR6 *VAR7 = FUN2(VAR2);
    VAR8 *VAR9 = FUN3(VAR2);
    VAR10 *VAR11 = FUN4(VAR7);
    VAR3 *VAR12 = NULL;
    int VAR13;
    VAR11->FUN5(VAR2, &VAR12);
    if (VAR12)
    {
        FUN6(VAR4, VAR12);
        VAR5 = VAR7->VAR14 - VAR15;
        VAR5 += (VAR15 * VAR7->VAR16);
        FUN7(VAR2, VAR17, VAR5);
        for (VAR5 = 0; VAR5 < VAR7->VAR16; VAR5++)
        {
            FUN8(VAR9, &VAR7->VAR18[VAR5]);
            for (VAR5 = 0; VAR5 < VAR7->VAR16; VAR5++)
            {
                FUN8(VAR9, &VAR7->VAR19[VAR5]);
                VAR7->VAR20 = -1;
                VAR13 = FUN9(VAR21, VAR22, false);
                if (VAR13 >= 0)
                {
                    VAR7->VAR20 = VAR13;
                }
                else if (VAR13 != -VAR23 && VAR13 != -VAR24)
                {
                    FUN10(VAR4, -VAR13, "");
                    if (FUN11(VAR7, VAR25, 0))
                    {
                        uint32_t VAR26 = VAR7->VAR14;
                        FUN12(VAR7, VAR25, 0, 0, &VAR26, 1);
                        if (FUN11(VAR7, VAR27, VAR28))
                        {
                            FUN12(VAR7, VAR27, VAR28, 0, 0, 1);
                            FUN13(&VAR7->VAR29, FUN14(VAR7), "", 0x1000);
                            FUN15(VAR9, &VAR7->VAR29);
                            FUN16(&VAR7->VAR29, (VAR30 << VAR31) | VAR32, VAR33, VAR32, VAR7->VAR20);
                            FUN13(&VAR7->VAR34[0], FUN14(VAR7), "", 0x1000);
                            FUN15(VAR9, &VAR7->VAR34[0]);
                            FUN16(&VAR7->VAR34[0], (VAR30 << VAR31) | VAR35, VAR33, VAR35, VAR7->VAR20)