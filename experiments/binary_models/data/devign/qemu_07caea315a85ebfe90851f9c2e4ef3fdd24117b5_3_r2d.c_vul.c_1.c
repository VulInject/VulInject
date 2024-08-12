static void FUN1(ram_addr_t VAR1, const char *VAR2, const char *VAR3, const char *VAR4, const char *VAR5, const char *VAR6)
{
    VAR7 *VAR8;
    struct VAR9 *VAR10;
    ram_addr_t VAR11;
    VAR12 *VAR13;
    VAR14 *VAR15;
    VAR16 *VAR17;
    int VAR18;
    if (!VAR6)
        VAR6 = "";
    VAR8 = FUN2(VAR6);
    if (!VAR8)
    {
        fprintf(VAR19, "");
        FUN3(1);
    }
    VAR11 = FUN4(VAR20);
    FUN5(VAR21, VAR20, VAR11);
    VAR10 = FUN6(VAR8);
    VAR13 = FUN7(0x04000000, FUN8(VAR10));
    VAR15 = FUN9(VAR22, VAR23, VAR13, 0, 4);
    FUN10(0x10000000, VAR24, VAR13[VAR25], VAR26[2]);
    if ((VAR17 = FUN11(VAR27, 0, 0)) != NULL)
        FUN12(0x14001000, 0x1400080c, VAR13[VAR28], 1, VAR17, NULL);
    for (VAR18 = 0; VAR18 < VAR29; VAR18++)
        FUN13(&VAR30[VAR18], "", VAR18 == 0 ? "" : NULL);
    if (VAR3)
    {
        int VAR31;
        FUN14(VAR32, 1 << 3);
        FUN15(VAR33, 3 << (3 * 2));
        if (VAR4)
        {
            VAR31 = FUN16(VAR3, VAR21 + VAR34, VAR20 - VAR34);
            VAR8->VAR35 = (VAR21 + VAR34) | 0xa0000000;
            FUN17(VAR21 + 0x10100, 256, VAR4);
        }
        else
        {
            VAR31 = FUN16(VAR3, VAR21, VAR20);
            VAR8->VAR35 = VAR21 | 0xa0000000;
        }
        if (VAR31 < 0)
        {
            fprintf(VAR19, "", VAR3);
            FUN3(1);
        }
    }
}