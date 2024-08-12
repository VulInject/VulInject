static void FUN1(VAR1 *VAR2, const char *VAR3)
{
    size_t VAR4;
    VAR5 *VAR6;
    VAR7 *VAR8 = NULL;
    VAR4 = strlen(VAR3);
    FUN2(VAR2, VAR4);
    while ((VAR8 = FUN3(VAR8, &VAR6)))
    {
        VAR9 *VAR10, *VAR11;
        VAR12 *VAR13 = FUN4(VAR6);
        bool VAR14 = false;
        FUN5(VAR13);
        if (FUN6(VAR6))
        {
            VAR14 = FUN7(VAR6, &VAR10, NULL) == 0;
        }
        FUN8(VAR13);
        if (!VAR14)
        {
            continue;
        }
        VAR11 = VAR10;
        while (VAR11)
        {
            char *VAR15 = VAR11->VAR16->VAR17;
            if (!FUN9(VAR3, VAR15, VAR4))
            {
                FUN10(VAR2, VAR15);
            }
            VAR15 = VAR11->VAR16->VAR18;
            if (!FUN9(VAR3, VAR15, VAR4))
            {
                FUN10(VAR2, VAR15);
            }
            VAR11 = VAR11->VAR19;
        }
        FUN11(VAR10);
    }
}