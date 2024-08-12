static void FUN1(VAR1 *VAR2)
{
    ram_addr_t VAR3 = VAR2->VAR3;
    const char *VAR4 = VAR2->VAR4;
    const char *VAR5 = VAR2->VAR5;
    VAR6 *VAR7 = NULL;
    VAR8 *VAR9;
    VAR10 *VAR11[2];
    qemu_irq VAR12;
    int VAR13;
    if (!VAR4)
    {
        VAR4 = "";
    }
    for (VAR13 = 0; VAR13 < VAR14; VAR13++)
    {
        VAR7 = FUN2(FUN3(VAR15, VAR4));
        if (VAR7 == NULL)
        {
            fprintf(VAR16, "");
            FUN4(1);
        }
        FUN5(VAR7);
        VAR11[VAR13] = (VAR10 *)VAR7->VAR17.VAR18;
        FUN6(VAR7);
        FUN7(VAR19, VAR7);
    }
    VAR9 = FUN8(sizeof(*VAR9));
    FUN9(VAR9, NULL, "", VAR3, &VAR20);
    FUN10(FUN11(), 0, VAR9);
    if (VAR21[0].VAR22)
    {
        FUN12(0x92000000, 0x92000400, VAR14, VAR11, 4, VAR21);
    }
    if (VAR14 > 1)
    {
        FUN13(0x98000000, VAR14, VAR11, 1);
        VAR12 = FUN14(VAR11[0][2], VAR11[1][2]);
    }
    else
    {
        VAR12 = VAR11[0][2];
    }
    FUN15(FUN11(), 0x90000000, 0, VAR12, 115200, VAR23[0], VAR24);
    FUN16(VAR3, VAR5);
}