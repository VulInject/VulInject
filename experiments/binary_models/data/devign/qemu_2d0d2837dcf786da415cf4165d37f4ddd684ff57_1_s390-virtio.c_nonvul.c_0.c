static void FUN1(VAR1 *VAR2)
{
    ram_addr_t VAR3 = VAR2->VAR4;
    const char *VAR5 = VAR2->VAR5;
    const char *VAR6 = VAR2->VAR6;
    const char *VAR7 = VAR2->VAR7;
    const char *VAR8 = VAR2->VAR8;
    VAR9 *VAR10 = NULL;
    VAR11 *VAR12 = FUN2();
    VAR11 *VAR13 = FUN3(VAR11, 1);
    ram_addr_t VAR14 = 0;
    ram_addr_t VAR15;
    ram_addr_t VAR16 = 0;
    int VAR17 = 0;
    VAR18 *VAR19;
    void *VAR20;
    hwaddr VAR21;
    hwaddr VAR22;
    int VAR23;
    while ((VAR3 >> (20 + VAR17)) > 65535)
    {
        VAR17++;
    }
    VAR3 = VAR3 >> (20 + VAR17) << (20 + VAR17);
    VAR4 = VAR3;
    VAR24 = FUN4(&VAR3);
    FUN5();
    FUN6(VAR13, "", VAR3);
    FUN7(VAR13);
    FUN8(VAR12, 0, VAR13);
    VAR21 = VAR3 - VAR4;
    VAR22 = VAR4;
    VAR20 = FUN9(VAR22, &VAR21, true);
    memset(VAR20, 0, VAR21);
    FUN10(VAR20, VAR21, 1, VAR21);
    VAR19 = FUN11(VAR3 / VAR25);
    if (VAR5 == NULL)
    {
        VAR5 = "";
    }
    VAR26 = FUN12(sizeof(VAR27 *) * VAR28);
    for (VAR23 = 0; VAR23 < VAR28; VAR23++)
    {
        VAR27 *VAR29;
        VAR9 *VAR30;
        VAR29 = FUN13(VAR5);
        VAR30 = &VAR29->VAR10;
        if (!VAR10)
        {
            VAR10 = VAR30;
        }
        VAR26[VAR23] = VAR29;
        VAR30->VAR31 = 1;
        VAR30->VAR32 = VAR33;
        VAR30->VAR19 = VAR19;
    }
    FUN14(VAR10);
    if (VAR6)
    {
        VAR14 = FUN15(VAR6, NULL, NULL, NULL, NULL, NULL, 1, VAR34, 0);
        if (VAR14 == -1UL)
        {
            VAR14 = FUN16(VAR6, 0, VAR4);
        }
        if (VAR14 == -1UL)
        {
            fprintf(VAR35, "", VAR6);
            FUN17(1);
        }
        VAR10->VAR36.VAR37 = VAR38;
        VAR10->VAR36.VAR39 = 0x0000000180000000ULL;
    }
    else
    {
        ram_addr_t VAR40 = 0;
        char *VAR41;
        if (VAR42 == NULL)
        {
            VAR42 = VAR43;
        }
        VAR41 = FUN18(VAR44, VAR42);
        VAR40 = FUN16(VAR41, VAR45, 4096);
        FUN19(VAR41);
        if ((long)VAR40 < 0)
        {
            FUN20("", VAR42);
        }
        if (VAR40 > 4096)
        {
            FUN20("");
        }
        VAR10->VAR36.VAR37 = VAR46;
        VAR10->VAR36.VAR39 = 0x0000000180000000ULL;
    }
    if (VAR8)
    {
        VAR15 = VAR47;
        while (VAR14 + 0x100000 > VAR15)
        {
            VAR15 += 0x100000;
        }
        VAR16 = FUN16(VAR8, VAR15, VAR4 - VAR15);
        if (VAR16 == -1UL)
        {
            fprintf(VAR35, "", VAR8);
            FUN17(1);
        }
        FUN21(FUN22(VAR48), VAR15);
        FUN21(FUN22(VAR49), VAR16);
    }
    if (FUN22(VAR50))
    {
        memcpy(FUN22(VAR50), VAR7, strlen(VAR7) + 1);
    }
    for (VAR23 = 0; VAR23 < VAR51; VAR23++)
    {
        VAR52 *VAR53 = &VAR54[VAR23];
        VAR55 *VAR56;
        if (!VAR53->VAR57)
        {
            VAR53->VAR57 = FUN23("");
        }
        if (strcmp(VAR53->VAR57, ""))
        {
            fprintf(VAR35, "");
            FUN17(1);
        }
        VAR56 = FUN24((VAR58 *)VAR24, "");
        FUN25(VAR56, VAR53);
        FUN26(VAR56);
    }
}