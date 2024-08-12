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
    FUN5(VAR11, NULL, "", VAR1);
    FUN6(VAR10, 0, VAR11);
    VAR17 = FUN7(VAR1 / VAR24);
    if (VAR6 == NULL)
    {
        VAR6 = "";
    }
    VAR25 = FUN8(sizeof(VAR7 *) * VAR26);
    for (VAR21 = 0; VAR21 < VAR26; VAR21++)
    {
        VAR7 *VAR27;
        VAR27 = FUN9(VAR6);
        if (!VAR8)
        {
            VAR8 = VAR27;
        }
        VAR25[VAR21] = VAR27;
        VAR27->VAR28 = 1;
        VAR27->VAR29 = VAR30;
        VAR27->VAR17 = VAR17;
    }
    FUN10(VAR8);
    if (VAR3)
    {
        VAR12 = FUN11(VAR3, FUN12(0));
        if (FUN13(VAR31) != 0x0dd0)
        {
            fprintf(VAR32, "");
            FUN14(1);
        }
        VAR8->VAR33.VAR34 = VAR31;
        VAR8->VAR33.VAR35 = 0x0000000180000000ULL;
    }
    else
    {
        ram_addr_t VAR36 = 0;
        char *VAR37;
        if (VAR38 == NULL)
        {
            VAR38 = VAR39;
        }
        VAR37 = FUN15(VAR40, VAR38);
        VAR36 = FUN11(VAR37, FUN12(VAR41));
        FUN16(VAR37);
        if ((long)VAR36 < 0)
        {
            FUN17("", VAR38);
        }
        if (VAR36 > 4096)
        {
            FUN17("");
        }
        VAR8->VAR33.VAR34 = VAR42;
        VAR8->VAR33.VAR35 = 0x0000000180000000ULL;
    }
    if (VAR5)
    {
        VAR13 = VAR43;
        while (VAR12 + 0x100000 > VAR13)
        {
            VAR13 += 0x100000;
        }
        VAR14 = FUN11(VAR5, FUN12(VAR13));
        FUN18(VAR44, VAR13);
        FUN18(VAR45, VAR14);
    }
    if (VAR4)
    {
        FUN19(VAR46, VAR4, strlen(VAR4) + 1);
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
            fprintf(VAR32, "");
            FUN14(1);
        }
        VAR52 = FUN21((VAR54 *)VAR23, "");
        FUN22(VAR52, VAR49);
        FUN23(VAR52);
    }
    for (VAR21 = 0; VAR21 < VAR55; VAR21++)
    {
        VAR56 *VAR57;
        VAR51 *VAR52;
        VAR57 = FUN24(VAR58, 0, VAR21);
        if (!VAR57)
        {
            continue;
        }
        VAR52 = FUN21((VAR54 *)VAR23, "");
        FUN25(VAR52, "", VAR57->VAR59);
        FUN23(VAR52);
    }