void FUN1(VAR1 *VAR2, VAR3 *VAR4, const char *VAR5)
{
    int VAR6, VAR7, VAR8;
    uint64_t VAR9;
    VAR2->VAR10 = VAR4->VAR11;
    FUN2(VAR2->VAR10, &VAR9);
    FUN3(VAR2->VAR10, &VAR6, &VAR7, &VAR8);
    VAR2->VAR6 = VAR6;
    VAR2->VAR7 = VAR7;
    VAR2->VAR12 = VAR8;
    VAR2->VAR9 = VAR9;
    VAR2->VAR13 = 1;
    VAR2->VAR14 = 1;
    VAR2->VAR15 = 0;
    VAR2->VAR16 = 0;
    if (FUN4(VAR2->VAR10) == VAR17)
    {
        VAR2->VAR18 = 1;
        FUN5(VAR2->VAR10, VAR19, VAR2);
    }
    strncpy(VAR2->VAR20, FUN6(VAR2->VAR10), sizeof(VAR2->VAR20));
    if (!*VAR2->VAR20)
    {
        snprintf(VAR2->VAR20, sizeof(VAR2->VAR20), "", VAR2->VAR21);
    }
    if (VAR5)
    {
        FUN7(VAR2->VAR5, sizeof(VAR2->VAR5), VAR5);
    }
    else
    {
        FUN7(VAR2->VAR5, sizeof(VAR2->VAR5), VAR22);
    }
    FUN8(VAR2);
}