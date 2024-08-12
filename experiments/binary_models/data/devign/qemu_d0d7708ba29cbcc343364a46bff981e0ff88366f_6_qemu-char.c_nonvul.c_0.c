static VAR1 *FUN1(const char *VAR2, VAR3 *VAR4, VAR5 *VAR6, VAR7 **VAR8)
{
    VAR9 *VAR10 = VAR4->VAR11.VAR12;
    VAR1 *VAR13;
    struct sigaction VAR14;
    VAR15 *VAR16 = FUN2(VAR4->VAR11.VAR12);
    if (FUN3())
    {
        FUN4(VAR8, "");
        return NULL;
    }
    if (VAR17)
    {
        FUN4(VAR8, "");
        return NULL;
    }
    VAR17 = true;
    VAR18 = FUN5(0, VAR19);
    FUN6(0, &VAR20);
    FUN7(0);
    FUN8(VAR21);
    memset(&VAR14, 0, sizeof(VAR14));
    VAR14.VAR22 = VAR23;
    FUN9(VAR24, &VAR14, NULL);
    VAR13 = FUN10(0, 1, VAR16, VAR8);
    VAR13->VAR25 = VAR26;
    VAR13->VAR27 = VAR28;
    if (VAR10->VAR29)
    {
        VAR30 = VAR10->signal;
    }
    FUN11(VAR13, false);
    return VAR13;
}