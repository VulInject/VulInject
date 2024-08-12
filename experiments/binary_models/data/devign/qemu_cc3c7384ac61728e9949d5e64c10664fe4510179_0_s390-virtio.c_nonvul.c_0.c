static void FUN1(ram_addr_t VAR1, const char *VAR2, const char *VAR3, const char *VAR4, const char *VAR5, const char *VAR6)
{
    VAR7 *VAR8 = NULL;
    VAR9 *VAR10 = FUN2();
    VAR9 *VAR11 = FUN3(VAR9, 1);
    ram_addr_t VAR12 = 0;
    ram_addr_t VAR13;
    ram_addr_t VAR14 = 0;
    int VAR15 = 0;
    VAR16 *VAR17;
    void *VAR18;
    target_phys_addr_t VAR19;
    target_phys_addr_t VAR20;
    int VAR21;
    while ((VAR1 >> (20 + VAR15)) > 65535)
    {
        VAR15++;
    }
    VAR1 = VAR1 >> (20 + VAR15) << (20 + VAR15);
    VAR22 = VAR1;
    VAR23 = FUN4(&VAR1);
    FUN5(VAR11, "", VAR1);
    FUN6(VAR11);
    FUN7(VAR10, 0, VAR11);
    VAR19 = VAR1 - VAR22;
    VAR20 = VAR22;
    VAR18 = FUN8(VAR20, &VAR19, true);
    memset(VAR18, 0, VAR19);
    FUN9(VAR18, VAR19, 1, VAR19);
    VAR17 = FUN10(VAR1 / VAR24);
    if (VAR6 == NULL)
    {
        VAR6 = "";
    }
    VAR25 = FUN11(sizeof(VAR7 *) * VAR26);
    for (VAR21 = 0; VAR21 < VAR26; VAR21++)
    {
        VAR7 *VAR27;
        VAR27 = FUN12(VAR6);
        if (!VAR8)
        {
            VAR8 = VAR27;
        }
        VAR25[VAR21] = VAR27;
        VAR27->VAR28 = 1;
        VAR27->VAR29 = VAR30;
        VAR27->VAR17 = VAR17;
    }
    FUN13(VAR8);
    if (VAR3)
    {
        VAR12 = FUN14(VAR3, NULL, NULL, NULL, NULL, NULL, 1, VAR31, 0);
        if (VAR12 == -1UL)
        {
            VAR12 = FUN15(VAR3, 0, VAR22);
        }
        VAR8->VAR32.VAR33 = VAR34;
        VAR8->VAR32.VAR35 = 0x0000000180000000ULL;
    }
    else
    {
        ram_addr_t VAR36 = 0;
        char *VAR37;
        if (VAR38 == NULL)
        {
            VAR38 = VAR39;
        }
        VAR37 = FUN16(VAR40, VAR38);
        VAR36 = FUN15(VAR37, VAR41, 4096);
        FUN17(VAR37);
        if ((long)VAR36 < 0)
        {
            FUN18("", VAR38);
        }
        if (VAR36 > 4096)
        {
            FUN18("");
        }
        VAR8->VAR32.VAR33 = VAR42;
        VAR8->VAR32.VAR35 = 0x0000000180000000ULL;
    }
    if (VAR5)
    {
        VAR13 = VAR43;
        while (VAR12 + 0x100000 > VAR13)
        {
            VAR13 += 0x100000;
        }
        VAR14 = FUN15(VAR5, VAR13, VAR22 - VAR13);
        memcpy(FUN19(VAR44), &VAR13, 8);
        memcpy(FUN19(VAR45), &VAR14, 8);
    }
    if (FUN19(VAR46))
    {
        memcpy(FUN19(VAR46), VAR4, strlen(VAR4) + 1);
    }
    for (VAR21 = 0; VAR21 < VAR47; VAR21++)
    {
        VAR48 *VAR49 = &VAR50[VAR21];
        VAR51 *VAR52;
        if (!VAR49->VAR53)
        {
            VAR49->VAR53 = FUN20("");
        }
        if (strcmp(VAR49->VAR53, ""))
        {
            fprintf(VAR54, "");
            FUN21(1);
        }
        VAR52 = FUN22((VAR55 *)VAR23, "");
        FUN23(VAR52, VAR49);
        FUN24(VAR52);
    }
    for (VAR21 = 0; VAR21 < VAR56; VAR21++)
    {
        VAR57 *VAR58;
        VAR51 *VAR52;
        VAR58 = FUN25(VAR59, 0, VAR21);
        if (!VAR58)
        {
            continue;
        }
        VAR52 = FUN22((VAR55 *)VAR23, "");
        FUN26(VAR52, "", VAR58->VAR60);
        FUN24(VAR52);
    }
}