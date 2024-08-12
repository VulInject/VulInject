int FUN1(VAR1 *VAR2, VAR3 *VAR4, const char *VAR5, const char *VAR6)
{
    int VAR7, VAR8, VAR9;
    uint64_t VAR10;
    VAR2->VAR4 = VAR4;
    FUN2(VAR4, &VAR10);
    FUN3(VAR4, &VAR7, &VAR8, &VAR9);
    if (VAR7 < 1 || VAR7 > 16383)
    {
        FUN4("");
        if (VAR8 < 1 || VAR8 > 16)
        {
            FUN4("");
            if (VAR9 < 1 || VAR9 > 63)
            {
                FUN4("");
                VAR2->VAR7 = VAR7;
                VAR2->VAR8 = VAR8;
                VAR2->VAR11 = VAR9;
                VAR2->VAR10 = VAR10;
                VAR2->VAR12 = 1;
                VAR2->VAR13 = 1;
                VAR2->VAR14 = 0;
                VAR2->VAR15 = 0;
                if (FUN5(VAR4) == VAR16)
                {
                    VAR2->VAR17 = VAR18;
                    FUN6(VAR4, VAR19, VAR2);
                }
                else
                {
                    if (FUN7(VAR4))
                    {
                        FUN4("");
                        if (VAR6)
                        {
                            strncpy(VAR2->VAR20, VAR6, sizeof(VAR2->VAR20));
                        }
                        else
                        {
                            snprintf(VAR2->VAR20, sizeof(VAR2->VAR20), "", VAR2->VAR21);
                            if (VAR5)
                            {
                                FUN8(VAR2->VAR5, sizeof(VAR2->VAR5), VAR5);
                            }
                            else
                            {
                                FUN8(VAR2->VAR5, sizeof(VAR2->VAR5), VAR22);
                                FUN9(VAR2);
                                FUN10(VAR4, VAR2->VAR17 == VAR18);
                                return 0;