static void FUN1(ram_addr_t VAR1, const char *VAR2, const char *VAR3, const char *VAR4, const char *VAR5, const char *VAR6)
{
    VAR7 *VAR8 = NULL;
    ram_addr_t VAR9;
    ram_addr_t VAR10 = 0;
    ram_addr_t VAR11;
    ram_addr_t VAR12 = 0;
    int VAR13;
    if (!FUN2())
    {
        fprintf(VAR14, "");
        FUN3(1);
    }
    VAR15 = FUN4(&VAR1);
    VAR9 = FUN5(VAR1);
    FUN6(0, VAR1, VAR9);
    if (VAR6 == NULL)
    {
        VAR6 = "";
    }
    VAR16 = FUN7(sizeof(VAR7 *) * VAR17);
    for (VAR13 = 0; VAR13 < VAR17; VAR13++)
    {
        VAR7 *VAR18;
        VAR18 = FUN8(VAR6);
        if (!VAR8)
        {
            VAR8 = VAR18;
        }
        VAR16[VAR13] = VAR18;
        VAR18->VAR19 = 1;
        VAR18->VAR20 = VAR21;
    }
    VAR8->VAR19 = 0;
    VAR8->VAR20 = 0;
    if (VAR3)
    {
        VAR10 = FUN9(VAR3, FUN10(0));
        if (FUN11(VAR22) != 0x0dd0)
        {
            fprintf(VAR14, "");
            FUN3(1);
        }
        VAR8->VAR23.VAR24 = VAR22;
        VAR8->VAR23.VAR25 = 0x0000000180000000ULL;
    }
    else
    {
        ram_addr_t VAR26 = 0;
        char *VAR27;
        if (VAR28 == NULL)
        {
            VAR28 = VAR29;
        }
        VAR27 = FUN12(VAR30, VAR28);
        VAR26 = FUN9(VAR27, FUN10(VAR31));
        if ((long)VAR26 < 0)
        {
            FUN13("", VAR28);
        }
        if (VAR26 > 4096)
        {
            FUN13("");
        }
        VAR8->VAR23.VAR24 = VAR32;
        VAR8->VAR23.VAR25 = 0x0000000180000000ULL;
    }
    if (VAR5)
    {
        VAR11 = VAR33;
        while (VAR10 + 0x100000 > VAR11)
        {
            VAR11 += 0x100000;
        }
        VAR12 = FUN9(VAR5, FUN10(VAR11));
        FUN14(VAR34, VAR11);
        FUN14(VAR35, VAR12);
    }
    if (VAR4)
    {
        FUN15(VAR36, (VAR37 *)VAR4, strlen(VAR4), 1);
    }
    for (VAR13 = 0; VAR13 < VAR38; VAR13++)
    {
        VAR39 *VAR40 = &VAR41[VAR13];
        VAR42 *VAR43;
        if (!VAR40->VAR44)
        {
            VAR40->VAR44 = FUN16("");
        }
        if (strcmp(VAR40->VAR44, ""))
        {
            fprintf(VAR14, "");
            FUN3(1);
        }
        VAR43 = FUN17((VAR45 *)VAR15, "");
        FUN18(VAR43, VAR40);
        FUN19(VAR43);
    }
    for (VAR13 = 0; VAR13 < VAR46; VAR13++)
    {
        VAR47 *VAR48;
        VAR42 *VAR43;
        VAR48 = FUN20(VAR49, 0, VAR13);
        if (!VAR48)
        {
            continue;
        }
        VAR43 = FUN17((VAR45 *)VAR15, "");
        FUN21(VAR43, "", VAR48->VAR50);
        FUN19(VAR43);
    }
}