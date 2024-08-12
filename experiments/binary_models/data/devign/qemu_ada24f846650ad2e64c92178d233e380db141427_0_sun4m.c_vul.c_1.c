static void FUN1(const struct VAR1 *VAR1, ram_addr_t VAR2, const char *VAR3, VAR4 *VAR5, const char *VAR6, const char *VAR7, const char *VAR8, const char *VAR9)
{
    VAR10 *VAR11;
    unsigned int VAR12;
    void *VAR13, *VAR14, *VAR15, *VAR16, *VAR17;
    VAR18 *VAR19, *VAR20, *VAR21, *VAR22;
    VAR18 *VAR23, *VAR24;
    VAR18 *VAR25;
    unsigned long VAR26, VAR27;
    int VAR28;
    char VAR29[1024];
    VAR30 *VAR31[VAR32];
    int VAR33;
    void *VAR34;
    if (!VAR9)
        VAR9 = VAR1->VAR35;
    VAR11 = FUN2(VAR9);
    if (!VAR11)
    {
        fprintf(VAR36, "");
        FUN3(1);
    }
    FUN4(VAR11, 0);
    FUN5(VAR37, VAR11);
    VAR19 = FUN6(VAR38, VAR11, VAR39);
    VAR11->VAR40 = VAR1->VAR41;
    if ((VAR42)VAR2 > VAR1->VAR43)
    {
        fprintf(VAR36, "", (unsigned int)(VAR2 / (1024 * 1024)), (unsigned int)(VAR1->VAR43 / (1024 * 1024)));
        FUN3(1);
    }
    FUN7(0, VAR2, 0);
    VAR26 = VAR2 + VAR1->VAR44;
    FUN7(VAR1->VAR41, (VAR45 + VAR46 - 1) & VAR47, VAR26 | VAR48);
    if (VAR49 == NULL)
        VAR49 = VAR50;
    snprintf(VAR29, sizeof(VAR29), "", VAR51, VAR49);
    VAR28 = FUN8(VAR29, VAR1->VAR41 - VAR52, NULL, NULL, NULL);
    if (VAR28 < 0 || VAR28 > VAR45)
        VAR28 = FUN9(VAR29, VAR1->VAR41, VAR45);
    if (VAR28 < 0 || VAR28 > VAR45)
    {
        fprintf(VAR36, "", VAR29);
        FUN3(1);
    }
    VAR26 += (VAR28 + VAR46 - 1) & VAR47;
    VAR53 = FUN10(VAR1->VAR54, &VAR20, VAR19);
    VAR13 = FUN11(VAR1->VAR55, VAR1->VAR56, VAR20[VAR1->VAR57]);
    VAR14 = FUN12(VAR1->VAR58, VAR20[VAR1->VAR59], VAR13, &VAR21, &VAR23);
    VAR15 = FUN12(VAR1->VAR58 + 16ULL, VAR20[VAR1->VAR60], VAR13, &VAR22, &VAR24);
    if (VAR61 != 8 && VAR61 != 24)
    {
        fprintf(VAR36, "", VAR61);
        FUN3(1);
    }
    FUN13(VAR5, VAR1->VAR62, VAR63 + VAR2, VAR2, VAR1->VAR44, VAR64, VAR65, VAR61);
    if (VAR66[0].VAR67 == NULL || strcmp(VAR66[0].VAR67, "") == 0)
    {
        FUN14(&VAR66[0], VAR1->VAR68, VAR15, *VAR22, VAR24);
    }
    else if (strcmp(VAR66[0].VAR67, "") == 0)
    {
        fprintf(VAR36, "");
        FUN3(1);
    }
    else
    {
        fprintf(VAR36, "", VAR66[0].VAR67);
        FUN3(1);
    }
    VAR17 = FUN15(VAR20[0], VAR1->VAR69, 0, VAR1->VAR70, 2);
    FUN16(VAR1->VAR71, VAR20[VAR1->VAR72], VAR73);
    FUN17(VAR1->VAR74, VAR20[VAR1->VAR75], VAR76[1], VAR76[0]);
    VAR77 = FUN18(-1, VAR1->VAR78, VAR1->VAR79, VAR1->VAR80, VAR20[VAR1->VAR57], VAR11, &VAR25);
    if (VAR1->VAR81 != (VAR82)-1)
    {
        VAR31[1] = VAR31[0] = NULL;
        VAR33 = FUN19(VAR83, 0, 0);
        if (VAR33 != -1)
            VAR31[0] = VAR84[VAR33].VAR85;
        FUN20(VAR20[VAR1->VAR86], VAR1->VAR81, VAR31, VAR25);
    }
    if (FUN21(VAR87) > 0)
    {
        fprintf(VAR36, "");
        FUN3(1);
    }
    VAR16 = FUN22(VAR1->VAR88, 2, VAR89, VAR90, VAR14, *VAR21, VAR23);
    for (VAR12 = 0; VAR12 < VAR91; VAR12++)
    {
        VAR33 = FUN19(VAR87, 0, VAR12);
        if (VAR33 == -1)
            continue;
        FUN23(VAR16, VAR84[VAR33].VAR85, VAR12);
    }
    VAR27 = FUN24(VAR6, VAR8, VAR2);
    FUN25(VAR17, (VAR92 *)&VAR66[0].VAR93, VAR7, VAR3, VAR2, VAR27, VAR64, VAR65, VAR61, VAR1->VAR94, "");
    VAR34 = FUN26(0, 0, VAR95, VAR95 + 2);
    FUN27(VAR34, VAR96, 1);
    FUN28(VAR34, VAR97, (VAR42)VAR98);
    FUN29(VAR34, VAR99, VAR1->VAR100);
}