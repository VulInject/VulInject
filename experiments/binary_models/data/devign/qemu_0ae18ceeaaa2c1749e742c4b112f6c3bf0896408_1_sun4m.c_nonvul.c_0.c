static void FUN1(const struct VAR1 *VAR2, ram_addr_t VAR3, const char *VAR4, VAR5 *VAR6, const char *VAR7, const char *VAR8, const char *VAR9, const char *VAR10)
{
    VAR11 *VAR12, *VAR13[VAR14];
    unsigned int VAR15;
    void *VAR16, *VAR17, *VAR18, *VAR19, *VAR20;
    VAR21 *VAR22[VAR14], *VAR23, *VAR24, *VAR25, *VAR26;
    VAR21 *VAR27, *VAR28;
    VAR21 *VAR29;
    VAR21 *VAR30;
    ram_addr_t VAR31, VAR32, VAR33, VAR34;
    unsigned long VAR35;
    int VAR36;
    char VAR37[1024];
    VAR38 *VAR39[VAR40];
    int VAR41;
    void *VAR42;
    if (!VAR10)
        VAR10 = VAR2->VAR43;
    for (VAR15 = 0; VAR15 < VAR44; VAR15++)
    {
        VAR12 = FUN2(VAR10);
        if (!VAR12)
        {
            fprintf(VAR45, "");
            FUN3(1);
        }
        FUN4(VAR12, VAR15);
        VAR13[VAR15] = VAR12;
        if (VAR15 == 0)
        {
            FUN5(VAR46, VAR12);
        }
        else
        {
            FUN5(VAR47, VAR12);
            VAR12->VAR48 = 1;
        }
        VAR22[VAR15] = FUN6(VAR49, VAR13[VAR15], VAR50);
        VAR12->VAR51 = VAR2->VAR52;
    }
    for (VAR15 = VAR44; VAR15 < VAR14; VAR15++)
        VAR22[VAR15] = FUN6(VAR53, NULL, VAR50);
    if ((VAR54)VAR3 > VAR2->VAR55)
    {
        fprintf(VAR45, "", (unsigned int)(VAR3 / (1024 * 1024)), (unsigned int)(VAR2->VAR55 / (1024 * 1024)));
        FUN3(1);
    }
    VAR31 = FUN7(VAR3);
    FUN8(0, VAR3, VAR31);
    VAR32 = FUN7(VAR56);
    FUN8(VAR2->VAR52, (VAR56 + VAR57 - 1) & VAR58, VAR32 | VAR59);
    if (VAR60 == NULL)
        VAR60 = VAR61;
    snprintf(VAR37, sizeof(VAR37), "", VAR62, VAR60);
    VAR36 = FUN9(VAR37, VAR2->VAR52 - VAR63, NULL, NULL, NULL);
    if (VAR36 < 0 || VAR36 > VAR56)
        VAR36 = FUN10(VAR37, VAR2->VAR52, VAR56);
    if (VAR36 < 0 || VAR36 > VAR56)
    {
        fprintf(VAR45, "", VAR37);
        FUN3(1);
    }
    VAR64 = FUN11(VAR2->VAR65, VAR2->VAR65 + 0x10000ULL, &VAR2->VAR66[0], &VAR23, &VAR24, VAR22, VAR2->VAR67);
    if (VAR2->VAR68)
    {
        static const uint8_t VAR69[] = {0xfe, 0x81, 0x01, 0x03};
        VAR34 = FUN7(sizeof(VAR69));
        FUN8(VAR2->VAR68, sizeof(VAR69), VAR34 | VAR59);
        FUN12(VAR2->VAR68, VAR69, sizeof(VAR69));
    }
    VAR16 = FUN13(VAR2->VAR70, VAR2->VAR71, VAR23[VAR2->VAR72]);
    VAR17 = FUN14(VAR2->VAR73, VAR23[VAR2->VAR74], VAR16, &VAR25, &VAR27);
    VAR18 = FUN14(VAR2->VAR73 + 16ULL, VAR23[VAR2->VAR75], VAR16, &VAR26, &VAR28);
    if (VAR76 != 8 && VAR76 != 24)
    {
        fprintf(VAR45, "", VAR76);
        FUN3(1);
    }
    VAR33 = FUN7(VAR2->VAR77);
    FUN15(VAR6, VAR2->VAR78, VAR79 + VAR33, VAR33, VAR2->VAR77, VAR80, VAR81, VAR76);
    FUN16(&VAR82[0], VAR2->VAR83, VAR18, *VAR26, VAR28);
    VAR20 = FUN17(VAR23[0], VAR2->VAR84, 0, VAR2->VAR85, 8);
    FUN18(VAR2->VAR86, VAR23[VAR2->VAR87], VAR24, VAR44);
    FUN19(VAR2->VAR88, VAR23[VAR2->VAR89], VAR90, VAR91, 1);
    FUN20(VAR2->VAR92, VAR23[VAR2->VAR93], VAR94[1], VAR94[0], VAR91, 1);
    VAR30 = FUN6(VAR95, NULL, 1);
    VAR96 = FUN21(VAR2->VAR52, VAR2->VAR97, VAR2->VAR98, VAR2->VAR99, VAR23[VAR2->VAR72], VAR30[0], &VAR29);
    if (VAR2->VAR100)
    {
        memset(VAR39, 0, sizeof(VAR39));
        VAR41 = FUN22(VAR101, 0, 0);
        if (VAR41 != -1)
            VAR39[0] = VAR102[VAR41].VAR103;
        FUN23(VAR23[VAR2->VAR104], VAR2->VAR100, VAR39, VAR29);
    }
    if (FUN24(VAR105) > 0)
    {
        fprintf(VAR45, "");
        FUN3(1);
    }
    VAR19 = FUN25(VAR2->VAR106, 2, VAR107, VAR108, VAR17, *VAR25, VAR27);
    for (VAR15 = 0; VAR15 < VAR109; VAR15++)
    {
        VAR41 = FUN22(VAR105, 0, VAR15);
        if (VAR41 == -1)
            continue;
        FUN26(VAR19, VAR102[VAR41].VAR103, VAR15);
    }
    if (VAR2->VAR110)
        FUN27(VAR2->VAR110, VAR2->VAR111, VAR64);
    VAR35 = FUN28(VAR7, VAR9, VAR3);
    FUN29(VAR20, (VAR112 *)&VAR82[0].VAR113, VAR8, VAR4, VAR3, VAR35, VAR80, VAR81, VAR76, VAR2->VAR114, "");
    if (VAR2->VAR115)
        FUN30(VAR2->VAR115, VAR23[VAR2->VAR116], VAR2->VAR117);
    VAR42 = FUN31(0, 0, VAR118, VAR118 + 2);
    FUN32(VAR42, VAR119, 1);
    FUN33(VAR42, VAR120, (VAR54)VAR121);
    FUN34(VAR42, VAR122, VAR2->VAR123);
    FUN34(VAR42, VAR124, VAR76);
}