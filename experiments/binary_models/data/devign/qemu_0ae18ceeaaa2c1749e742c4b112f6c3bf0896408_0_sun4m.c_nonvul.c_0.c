static void FUN1(const struct VAR1 *VAR2, ram_addr_t VAR3, const char *VAR4, VAR5 *VAR6, const char *VAR7, const char *VAR8, const char *VAR9, const char *VAR10)
{
    VAR11 *VAR12, *VAR13[VAR14];
    unsigned int VAR15;
    void *VAR16[VAR17], *VAR18, *VAR19, *VAR20, *VAR21, *VAR22;
    VAR23 *VAR24[VAR14], *VAR25, *VAR26, *VAR27, *VAR28;
    VAR23 *VAR29, *VAR30;
    ram_addr_t VAR31, VAR32, VAR33;
    unsigned long VAR34;
    int VAR35;
    char VAR36[1024];
    int VAR37;
    void *VAR38;
    if (!VAR10)
        VAR10 = VAR2->VAR39;
    for (VAR15 = 0; VAR15 < VAR40; VAR15++)
    {
        VAR12 = FUN2(VAR10);
        if (!VAR12)
        {
            fprintf(VAR41, "");
            FUN3(1);
        }
        FUN4(VAR12, VAR15);
        VAR13[VAR15] = VAR12;
        if (VAR15 == 0)
        {
            FUN5(VAR42, VAR12);
        }
        else
        {
            FUN5(VAR43, VAR12);
            VAR12->VAR44 = 1;
        }
        VAR24[VAR15] = FUN6(VAR45, VAR13[VAR15], VAR46);
        VAR12->VAR47 = VAR2->VAR48;
    }
    for (VAR15 = VAR40; VAR15 < VAR14; VAR15++)
        VAR24[VAR15] = FUN6(VAR49, NULL, VAR46);
    if ((VAR50)VAR3 > VAR2->VAR51)
    {
        fprintf(VAR41, "", (unsigned int)(VAR3 / (1024 * 1024)), (unsigned int)(VAR2->VAR51 / (1024 * 1024)));
        FUN3(1);
    }
    VAR31 = FUN7(VAR3);
    FUN8(0, VAR3, VAR31);
    VAR32 = FUN7(VAR52);
    FUN8(VAR2->VAR48, (VAR52 + VAR53 - 1) & VAR54, VAR32 | VAR55);
    if (VAR56 == NULL)
        VAR56 = VAR57;
    snprintf(VAR36, sizeof(VAR36), "", VAR58, VAR56);
    VAR35 = FUN9(VAR36, VAR2->VAR48 - VAR59, NULL, NULL, NULL);
    if (VAR35 < 0 || VAR35 > VAR52)
        VAR35 = FUN10(VAR36, VAR2->VAR48, VAR52);
    if (VAR35 < 0 || VAR35 > VAR52)
    {
        fprintf(VAR41, "", VAR36);
        FUN3(1);
    }
    VAR22 = FUN11(VAR2->VAR60, &VAR25, &VAR26, VAR24);
    for (VAR15 = 0; VAR15 < VAR17; VAR15++)
        if (VAR2->VAR61[VAR15] != (VAR62)-1)
            VAR16[VAR15] = FUN12(VAR2->VAR61[VAR15], VAR2->VAR63, VAR25[VAR2->VAR64]);
    VAR18 = FUN13(VAR2->VAR65, VAR25[VAR2->VAR66], VAR16[0], &VAR27, &VAR29);
    VAR19 = FUN13(VAR2->VAR67, VAR25[VAR2->VAR68], VAR16[0], &VAR28, &VAR30);
    if (VAR69 != 8 && VAR69 != 24)
    {
        fprintf(VAR41, "", VAR69);
        FUN3(1);
    }
    VAR33 = FUN7(VAR2->VAR70);
    FUN14(VAR6, VAR2->VAR71, VAR72 + VAR33, VAR33, VAR2->VAR70, VAR73, VAR74, VAR69);
    FUN15(&VAR75[0], VAR2->VAR76, VAR19, *VAR28, VAR30);
    VAR21 = FUN16(VAR25[0], VAR2->VAR77, 0, VAR2->VAR78, 8);
    FUN17(VAR2->VAR79, VAR25[VAR2->VAR80], VAR26, VAR40);
    FUN18(VAR2->VAR81, VAR25[VAR2->VAR82], VAR83, VAR84, 1);
    FUN19(VAR2->VAR85, VAR25[VAR2->VAR86], VAR87[1], VAR87[0], VAR84, 1);
    if (FUN20(VAR88) > 0)
    {
        fprintf(VAR41, "");
        FUN3(1);
    }
    VAR20 = FUN21(VAR2->VAR89, 2, VAR90, VAR91, VAR18, *VAR27, VAR29);
    for (VAR15 = 0; VAR15 < VAR92; VAR15++)
    {
        VAR37 = FUN22(VAR88, 0, VAR15);
        if (VAR37 == -1)
            continue;
        FUN23(VAR20, VAR93[VAR37].VAR94, VAR15);
    }
    VAR34 = FUN24(VAR7, VAR9, VAR3);
    FUN25(VAR21, (VAR95 *)&VAR75[0].VAR96, VAR8, VAR4, VAR3, VAR34, VAR73, VAR74, VAR69, VAR2->VAR97, "");
    VAR38 = FUN26(0, 0, VAR98, VAR98 + 2);
    FUN27(VAR38, VAR99, 1);
    FUN28(VAR38, VAR100, (VAR50)VAR101);
    FUN29(VAR38, VAR102, VAR2->VAR103);
}