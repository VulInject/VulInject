static void FUN1(ram_addr_t VAR1, int VAR2, const char *VAR3, VAR4 *VAR5, const char *VAR6, const char *VAR7, const char *VAR8, const char *VAR9, int VAR10)
{
    VAR11 *VAR12;
    VAR13 *VAR14;
    VAR13 *VAR15;
    void *VAR16;
    VAR17 *VAR18;
    VAR19 *VAR20;
    int VAR21;
    int VAR22 = 0;
    int VAR23;
    if (!VAR9)
        VAR9 = "";
    VAR12 = FUN2(VAR9);
    if (!VAR12)
    {
        fprintf(VAR24, "");
        FUN3(1);
    }
    FUN4(0, VAR1, VAR25);
    FUN5(0x10000000, 0x41007004);
    VAR14 = FUN6(VAR12);
    VAR14 = FUN7(0x10140000, VAR14[0], VAR14[1]);
    VAR15 = FUN8(0x10003000, VAR14, 31);
    FUN9(0x10006000, VAR15[3], 0);
    FUN9(0x10007000, VAR15[4], 1);
    VAR18 = FUN10(VAR15, 27, 0);
    for (VAR21 = 0; VAR21 < VAR26; VAR21++)
    {
        VAR20 = &VAR27[VAR21];
        if ((!VAR20->VAR28 && !VAR22) || strcmp(VAR20->VAR28, "") == 0)
        {
            FUN11(VAR20, 0x10010000, VAR15[25]);
            VAR22 = 1;
        }
        else
        {
            if (!VAR20->VAR28)
                VAR20->VAR28 = "";
            FUN12(VAR18, VAR20, -1);
        }
    }
    if (VAR29)
    {
        FUN13(VAR18, 3, -1);
    }
    if (FUN14(VAR30) > 0)
    {
        fprintf(VAR24, "");
        FUN3(1);
    }
    VAR16 = FUN15(VAR18, -1);
    for (VAR21 = 0; VAR21 < VAR31; VAR21++)
    {
        VAR23 = FUN16(VAR30, 0, VAR21);
        if (VAR23 == -1)
            continue;
        FUN17(VAR16, VAR32[VAR23].VAR33, VAR21);
    }
    FUN18(0x101f1000, VAR14[12], VAR34[0], VAR35);
    FUN18(0x101f2000, VAR14[13], VAR34[1], VAR35);
    FUN18(0x101f3000, VAR14[14], VAR34[2], VAR35);
    FUN18(0x10009000, VAR15[6], VAR34[3], VAR35);
    FUN19(0x10130000, VAR14[17], 8);
    FUN20(0x101e2000, VAR14[4]);
    FUN20(0x101e3000, VAR14[5]);
    FUN21(VAR5, 0x10120000, VAR14[16], 1);
    VAR23 = FUN16(VAR36, 0, 0);
    if (VAR23 == -1)
    {
        fprintf(VAR24, "");
        FUN3(1);
    }
    FUN22(0x10005000, VAR32[VAR23].VAR33, VAR15[22], VAR15[1]);
    FUN22(0x1000b000, NULL, VAR15, 23, 2);
    FUN23(0x101e8000, VAR14[10]);
    VAR37.VAR1 = VAR1;
    VAR37.VAR6 = VAR6;
    VAR37.VAR7 = VAR7;
    VAR37.VAR8 = VAR8;
    VAR37.VAR10 = VAR10;
    FUN24(VAR12, &VAR37);
}