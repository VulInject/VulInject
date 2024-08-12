static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    VAR6 *VAR7;
    int VAR8, VAR9;
    const struct VAR10 *VAR11 = NULL;
    const struct VAR12 *VAR13 = NULL;
    if (FUN2(VAR2, &VAR11, &VAR13) != 0)
        return -1;
    VAR4->VAR14 = FUN3();
    if (FUN4(VAR4->VAR14, &VAR7) != VAR15 || !VAR7)
    {
        FUN5(VAR2, VAR16, "");
        if (VAR7->VAR17 == 0)
        {
            FUN5(VAR2, VAR16, "");
            VAR4->VAR18 = FUN6(VAR4->VAR14, VAR7->VAR19[0].VAR20);
            if (VAR7->VAR17 > 1)
            {
                FUN5(VAR2, VAR21, "");
                FUN7(VAR7);
                if (VAR4->VAR18->VAR22 > 0)
                {
                    FUN8(VAR4->VAR18, VAR23);
                    VAR9 = VAR24;
                }
                else
                {
                    VAR9 = VAR25;
                    for (VAR8 = VAR26; VAR9 >= VAR27 && VAR8 != VAR15; VAR9--)
                    {
                        VAR8 = FUN9(VAR4->VAR18, VAR9);
                        if (VAR8 != VAR15)
                        {
                            FUN5(VAR2, VAR16, "");
                            goto VAR28;
                            if (FUN10(VAR4->VAR18, VAR11->VAR29) != VAR15)
                            {
                                FUN5(VAR2, VAR16, "");
                                goto VAR28;
                                if (FUN11(VAR4->VAR18, VAR13->VAR30) != VAR15)
                                {
                                    FUN5(VAR2, VAR16, "", VAR13->VAR31);
                                    goto VAR28;
                                    if (FUN12(VAR4->VAR18, 10, VAR32) != VAR15)
                                    {
                                        FUN5(VAR2, VAR16, "");
                                        goto VAR28;
                                        if (FUN13(VAR4->VAR18, VAR33) != VAR15)
                                        {
                                            FUN5(VAR2, VAR16, "");
                                            goto VAR28;
                                            return 0;
                                        VAR28:
                                            FUN14(VAR4->VAR18);
                                            FUN13(VAR4->VAR18, VAR34);
                                            FUN15(VAR4->VAR18);
                                        VAR35:
                                            FUN16(VAR4->VAR14);
                                            return -1