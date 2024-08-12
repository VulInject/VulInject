static void FUN1(VAR1 *VAR2)
{
    ram_addr_t VAR3 = VAR2->VAR3;
    const char *VAR4 = VAR2->VAR4;
    const char *VAR5 = VAR2->VAR5;
    VAR6 *VAR7;
    int VAR8;
    uint64_t VAR9;
    hwaddr VAR10;
    VAR11 *VAR12 = FUN2();
    VAR11 *VAR13 = FUN3(VAR11, 1);
    VAR11 *VAR14 = FUN3(VAR11, 1);
    if (!VAR4)
        VAR4 = "";
    VAR7 = FUN4(VAR4);
    if (!VAR7)
    {
        FUN5("");
    }
    VAR7->VAR15 = 0;
    VAR7->VAR16 = VAR17 | 1;
    VAR7->VAR18 = VAR19 | 1;
    FUN6(VAR13, "", VAR3);
    FUN7(VAR13);
    FUN8(VAR12, 0, VAR13);
    FUN6(VAR14, "", 512);
    FUN7(VAR14);
    FUN8(VAR12, VAR19, VAR14);
    FUN9(VAR12, VAR17, VAR7);
    if (!VAR5)
    {
        fprintf(VAR20, "");
        FUN10(1);
    }
    VAR8 = FUN11(VAR5, NULL, NULL, &VAR9, NULL, NULL, 1, VAR21, 0);
    VAR10 = VAR9;
    if (VAR8 < 0)
    {
        VAR8 = FUN12(VAR5, &VAR10, NULL, NULL);
    }
    if (VAR8 < 0)
    {
        VAR8 = FUN13(VAR5, VAR22, VAR3 - VAR22);
        VAR10 = VAR22;
    }
    if (VAR8 < 0)
    {
        fprintf(VAR20, "", VAR5);
        FUN10(1);
    }
    VAR7->VAR23 = VAR10;
}