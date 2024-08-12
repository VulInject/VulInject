static void FUN1(VAR1 *VAR2)
{
    ram_addr_t VAR3 = VAR2->VAR3;
    const char *VAR4 = VAR2->VAR4;
    const char *VAR5 = VAR2->VAR5;
    VAR6 *VAR7;
    VAR8 *VAR9 = FUN2();
    VAR8 *VAR10 = FUN3(VAR8, 1);
    int VAR11;
    uint64_t VAR12;
    hwaddr VAR13;
    if (!VAR4)
        VAR4 = "";
    VAR7 = FUN4(VAR4);
    if (!VAR7)
    {
        fprintf(VAR14, "");
        FUN5(1);
    }
    VAR7->VAR15 = 0;
    FUN6(VAR10, "", VAR3);
    FUN7(VAR10);
    FUN8(VAR9, 0, VAR10);
    if (VAR5)
    {
        VAR11 = FUN9(VAR5, NULL, NULL, &VAR12, NULL, NULL, 1, VAR16, 0);
        VAR13 = VAR12;
        if (VAR11 < 0)
        {
            VAR11 = FUN10(VAR5, &VAR13, NULL, NULL);
        }
        if (VAR11 < 0)
        {
            VAR11 = FUN11(VAR5, VAR17, VAR3 - VAR17);
            VAR13 = VAR17;
        }
        if (VAR11 < 0)
        {
            fprintf(VAR14, "", VAR5);
            FUN5(1);
        }
    }
    else
    {
        VAR13 = 0;
    }
    VAR7->VAR18 = VAR13;
}