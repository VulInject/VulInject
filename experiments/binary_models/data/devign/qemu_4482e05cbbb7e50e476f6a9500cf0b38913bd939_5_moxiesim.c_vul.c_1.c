static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = NULL;
    ram_addr_t VAR5 = VAR2->VAR5;
    const char *VAR6 = VAR2->VAR6;
    const char *VAR7 = VAR2->VAR7;
    const char *VAR8 = VAR2->VAR8;
    const char *VAR9 = VAR2->VAR9;
    VAR10 *VAR11;
    VAR12 *VAR13 = FUN2();
    VAR12 *VAR14 = FUN3(VAR12, 1);
    VAR12 *VAR15 = FUN3(VAR12, 1);
    hwaddr VAR16 = 0x200000;
    LoaderParams VAR17;
    if (VAR6 == NULL)
    {
        VAR6 = "";
    }
    VAR4 = FUN4(FUN5(VAR18, VAR6));
    if (!VAR4)
    {
        fprintf(VAR19, "");
        FUN6(1);
    }
    VAR11 = &VAR4->VAR11;
    FUN7(VAR20, VAR4);
    FUN8(VAR14, NULL, "", VAR5, &VAR21);
    FUN9(VAR13, VAR16, VAR14);
    FUN8(VAR15, NULL, "", 128 * 0x1000, &VAR21);
    FUN9(FUN2(), 0x1000, VAR15);
    if (VAR7)
    {
        VAR17.VAR5 = VAR5;
        VAR17.VAR7 = VAR7;
        VAR17.VAR8 = VAR8;
        VAR17.VAR9 = VAR9;
        FUN10(VAR4, &VAR17);
    }
    if (VAR22[0])
    {
        FUN11(VAR13, 0x3f8, 0, VAR11->VAR23[4], 8000000 / 16, VAR22[0], VAR24);
    }
}