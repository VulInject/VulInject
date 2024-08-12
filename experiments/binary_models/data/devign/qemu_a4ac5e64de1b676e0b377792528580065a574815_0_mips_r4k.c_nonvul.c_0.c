void FUN1(ram_addr_t VAR1, const char *VAR2, const char *VAR3, const char *VAR4, const char *VAR5, const char *VAR6)
{
    char *VAR7;
    VAR8 *VAR9 = FUN2();
    VAR8 *VAR10 = FUN3(VAR8, 1);
    VAR8 *VAR11;
    VAR8 *VAR12 = FUN3(VAR8, 1);
    int VAR13;
    VAR14 *VAR15;
    VAR16 *VAR17;
    int VAR18;
    VAR19 *VAR20;
    VAR21 *VAR22[VAR23 * VAR24];
    VAR21 *VAR25;
    int VAR26;
    if (VAR6 == NULL)
    {
        VAR6 = "";
        VAR6 = "";
    }
    VAR15 = FUN4(VAR6);
    if (!VAR15)
    {
        fprintf(VAR27, "");
        FUN5(1);
    }
    VAR17 = FUN6(sizeof(VAR16));
    VAR17->VAR15 = VAR15;
    VAR17->VAR28 = VAR15->VAR29.VAR30;
    FUN7(VAR31, VAR17);
    if (VAR1 > (256 << 20))
    {
        fprintf(VAR27, "", ((unsigned int)VAR1 / (1 << 20)));
        FUN5(1);
    }
    FUN8(VAR10, NULL, "", VAR1);
    FUN9(VAR9, 0, VAR10);
    FUN10(VAR12, &VAR32, NULL, "", 0x10000);
    FUN9(VAR9, 0x1fbf0000, VAR12);
    if (VAR33 == NULL)
        VAR33 = VAR34;
    VAR7 = FUN11(VAR35, VAR33);
    if (VAR7)
    {
        VAR13 = FUN12(VAR7);
    }
    else
    {
        VAR13 = -1;
    }
    VAR26 = 1;
    VAR26 = 0;
    if ((VAR13 > 0) && (VAR13 <= VAR36))
    {
        VAR11 = FUN3(VAR8, 1);
        FUN8(VAR11, NULL, "", VAR36);
        FUN13(VAR11, true);
        FUN9(FUN2(), 0x1fc00000, VAR11);
        FUN14(VAR7, 0x1fc00000, VAR36);
    }
    else if ((VAR25 = FUN15(VAR37, 0, 0)) != NULL)
    {
        uint32_t VAR38 = 0x00400000;
        if (!FUN16(0x1fc00000, NULL, "", VAR38, VAR25->VAR39, VAR40, VAR38 / VAR40, 4, 0, 0, 0, 0, VAR26))
        {
            fprintf(VAR27, "");
        }
    }
    else
    {
        fprintf(VAR27, "", VAR33);
    }
    if (VAR7)
    {
        FUN17(VAR7);
    }
    if (VAR3)
    {
        VAR41.VAR1 = VAR1;
        VAR41.VAR3 = VAR3;
        VAR41.VAR4 = VAR4;
        VAR41.VAR5 = VAR5;
        VAR17->VAR28 = FUN18();
    }
    FUN19(VAR15);
    FUN20(VAR15);
    FUN21(NULL, FUN22());
    VAR20 = FUN23(VAR15->VAR42[2]);
    FUN24(VAR20);
    FUN25(2000, NULL);
    FUN26(0x14000000, 0x00010000);
    VAR43 = 0x10000000;
    VAR44 = FUN27(0x40, 0);
    for (VAR18 = 0; VAR18 < VAR45; VAR18++)
    {
        if (VAR46[VAR18])
        {
            FUN28(VAR18, VAR46[VAR18]);
        }
    }
    FUN29();
    if (VAR47[0].VAR48)
        FUN30(0x300, 9, &VAR47[0]);
    FUN31(VAR22, VAR23);
    for (VAR18 = 0; VAR18 < VAR23; VAR18++)
        FUN32(VAR49[VAR18], VAR50[VAR18], VAR51[VAR18], VAR22[VAR24 * VAR18], VAR22[VAR24 * VAR18 + 1]);
    FUN33("");
}