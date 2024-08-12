static void FUN1(VAR1 *VAR2)
{
    ram_addr_t VAR3 = VAR2->VAR3;
    const char *VAR4 = VAR2->VAR4;
    const char *VAR5 = VAR2->VAR5;
    VAR6 *VAR7 = NULL;
    VAR8 *VAR9;
    int VAR10;
    if (!VAR4)
    {
        VAR4 = "";
    }
    for (VAR10 = 0; VAR10 < VAR11; VAR10++)
    {
        VAR7 = FUN2(FUN3(VAR12, VAR4));
        if (VAR7 == NULL)
        {
            fprintf(VAR13, "");
            FUN4(1);
        }
        FUN5(VAR14, VAR7);
        FUN6(VAR7);
    }
    VAR9 = FUN7(sizeof(*VAR9));
    FUN8(VAR9, NULL, "", VAR3, &VAR15);
    FUN9(FUN10(), 0, VAR9);
    FUN11(VAR7);
    FUN12(VAR7);
    FUN13(FUN10(), 0x90000000, 0, VAR7->VAR16.VAR17[2], 115200, VAR18[0], VAR19);
    if (VAR20[0].VAR21)
    {
        FUN14(FUN10(), 0x92000000, 0x92000400, VAR7->VAR16.VAR17[4], VAR20);
    }
    FUN15(VAR3, VAR5, VAR7);
}