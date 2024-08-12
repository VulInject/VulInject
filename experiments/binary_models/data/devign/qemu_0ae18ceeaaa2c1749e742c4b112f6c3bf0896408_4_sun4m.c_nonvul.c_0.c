static void FUN1(const struct VAR1 *VAR2, ram_addr_t VAR3, const char *VAR4, VAR5 *VAR6, const char *VAR7, const char *VAR8, const char *VAR9, const char *VAR10)
{
    VAR11 *VAR12;
    unsigned int VAR13;
    void *VAR14, *VAR15, *VAR16, *VAR17, *VAR18;
    VAR19 *VAR20, *VAR21, *VAR22, *VAR23;
    VAR19 *VAR24, *VAR25;
    VAR19 *VAR26;
    ram_addr_t VAR27, VAR28, VAR29;
    unsigned long VAR30;
    int VAR31;
    char VAR32[1024];
    VAR33 *VAR34[VAR35];
    int VAR36;
    void *VAR37;
    if (!VAR10)
        VAR10 = VAR2->VAR38;
    VAR12 = FUN2(VAR10);
    if (!VAR12)
    {
        fprintf(VAR39, "");
        FUN3(1);
    }
    FUN4(VAR12, 0);
    FUN5(VAR40, VAR12);
    VAR20 = FUN6(VAR41, VAR12, VAR42);
    VAR12->VAR43 = VAR2->VAR44;
    if ((VAR45)VAR3 > VAR2->VAR46)
    {
        fprintf(VAR39, "", (unsigned int)(VAR3 / (1024 * 1024)), (unsigned int)(VAR2->VAR46 / (1024 * 1024)));
        FUN3(1);
    }
    VAR27 = FUN7(VAR3);
    FUN8(0, VAR3, VAR27);
    VAR28 = FUN7(VAR47);
    FUN8(VAR2->VAR44, (VAR47 + VAR48 - 1) & VAR49, VAR28 | VAR50);
    if (VAR51 == NULL)
        VAR51 = VAR52;
    snprintf(VAR32, sizeof(VAR32), "", VAR53, VAR51);
    VAR31 = FUN9(VAR32, VAR2->VAR44 - VAR54, NULL, NULL, NULL);
    if (VAR31 < 0 || VAR31 > VAR47)
        VAR31 = FUN10(VAR32, VAR2->VAR44, VAR47);
    if (VAR31 < 0 || VAR31 > VAR47)
    {
        fprintf(VAR39, "", VAR32);
        FUN3(1);
    }
    VAR55 = FUN11(VAR2->VAR56, &VAR21, VAR20);
    VAR14 = FUN12(VAR2->VAR57, VAR2->VAR58, VAR21[VAR2->VAR59]);
    VAR15 = FUN13(VAR2->VAR60, VAR21[VAR2->VAR61], VAR14, &VAR22, &VAR24);
    VAR16 = FUN13(VAR2->VAR60 + 16ULL, VAR21[VAR2->VAR62], VAR14, &VAR23, &VAR25);
    if (VAR63 != 8 && VAR63 != 24)
    {
        fprintf(VAR39, "", VAR63);
        FUN3(1);
    }
    VAR29 = FUN7(VAR2->VAR64);
    FUN14(VAR6, VAR2->VAR65, VAR66 + VAR29, VAR29, VAR2->VAR64, VAR67, VAR68, VAR63);
    FUN15(&VAR69[0], VAR2->VAR70, VAR16, *VAR23, VAR25);
    VAR18 = FUN16(VAR21[0], VAR2->VAR71, 0, VAR2->VAR72, 2);
    FUN17(VAR2->VAR73, VAR21[VAR2->VAR74], VAR75, VAR76, 1);
    FUN18(VAR2->VAR77, VAR21[VAR2->VAR78], VAR79[0], VAR79[1], VAR76, 1);
    VAR80 = FUN19(0, 0, VAR2->VAR81, 0, VAR21[VAR2->VAR59], NULL, &VAR26);
    if (VAR2->VAR82 != (VAR83)-1)
    {
        memset(VAR34, 0, sizeof(VAR34));
        VAR36 = FUN20(VAR84, 0, 0);
        if (VAR36 != -1)
            VAR34[0] = VAR85[VAR36].VAR86;
        FUN21(VAR21[VAR2->VAR87], VAR2->VAR82, VAR34, VAR26);
    }
    if (FUN22(VAR88) > 0)
    {
        fprintf(VAR39, "");
        FUN3(1);
    }
    VAR17 = FUN23(VAR2->VAR89, 2, VAR90, VAR91, VAR15, *VAR22, VAR24);
    for (VAR13 = 0; VAR13 < VAR92; VAR13++)
    {
        VAR36 = FUN20(VAR88, 0, VAR13);
        if (VAR36 == -1)
            continue;
        FUN24(VAR17, VAR85[VAR36].VAR86, VAR13);
    }
    VAR30 = FUN25(VAR7, VAR9, VAR3);
    FUN26(VAR18, (VAR93 *)&VAR69[0].VAR94, VAR8, VAR4, VAR3, VAR30, VAR67, VAR68, VAR63, VAR2->VAR95, "");
    VAR37 = FUN27(0, 0, VAR96, VAR96 + 2);
    FUN28(VAR37, VAR97, 1);
    FUN29(VAR37, VAR98, (VAR45)VAR99);
    FUN30(VAR37, VAR100, VAR2->VAR101);
}