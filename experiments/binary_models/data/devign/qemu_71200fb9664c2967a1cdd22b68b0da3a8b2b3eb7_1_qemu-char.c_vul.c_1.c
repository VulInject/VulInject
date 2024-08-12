static VAR1 *FUN1(const char *VAR2, VAR3 *VAR4, VAR5 *VAR6, VAR7 **VAR8)
{
    VAR9 *VAR10 = VAR4->VAR11.VAR12.VAR13;
    VAR1 *VAR14;
    struct sigaction VAR15;
    VAR16 *VAR17 = FUN2(VAR10);
    if (FUN3())
    {
        FUN4(VAR8, "");
        if (VAR18)
        {
            FUN4(VAR8, "");
            VAR18 = true;
            VAR19 = FUN5(0, VAR20);
            FUN6(0, &VAR21);
            FUN7(0);
            FUN8(VAR22);
            memset(&VAR15, 0, sizeof(VAR15));
            VAR15.VAR23 = VAR24;
            FUN9(VAR25, &VAR15, NULL);
            VAR14 = FUN10(0, 1, VAR17, VAR8);
            VAR14->VAR26 = VAR27;
            VAR14->VAR28 = VAR29;
            if (VAR10->VAR30)
            {
                VAR31 = VAR10->signal;
                FUN11(VAR14, false);
                return VAR14;