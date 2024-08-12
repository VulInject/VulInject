FUN1(ram_addr_t VAR1, int VAR2, const char *VAR3, VAR4 *VAR5, const char *VAR6, const char *VAR7, const char *VAR8, const char *VAR9)
{
    char VAR10[1024];
    unsigned long VAR11;
    VAR12 *VAR13;
    int VAR14;
    if (VAR9 == NULL)
    {
        VAR9 = "";
        VAR9 = "";
    }
    VAR13 = FUN2(VAR9);
    if (!VAR13)
    {
        fprintf(VAR15, "");
        FUN3(1);
    }
    FUN4(VAR16, VAR13);
    FUN5(0, VAR1, VAR17);
    VAR11 = VAR1 + VAR2;
    if (VAR18 == NULL)
        VAR18 = VAR19;
    snprintf(VAR10, sizeof(VAR10), "", VAR20, VAR18);
    VAR14 = FUN6(VAR10, VAR21 + VAR11);
    if ((VAR14 < 0 || VAR14 > VAR22) && !VAR6)
    {
        fprintf(VAR15, "", VAR10);
        FUN3(1);
    }
    else
    {
        FUN5(0x1fc00000LL, VAR14, VAR11 | VAR23);
        VAR13->VAR24.VAR25 = (VAR26)(VAR27)0xbfc00000;
    }
    if (VAR6)
    {
        VAR28.VAR1 = VAR1;
        VAR28.VAR6 = VAR6;
        VAR28.VAR7 = VAR7;
        VAR28.VAR8 = VAR8;
        FUN7(VAR13);
    }
    FUN8(VAR13);
    FUN9(VAR13);
    FUN10(0x1fd00000, 0x00010000);
    if (VAR29[0])
        FUN11(0x3f8, VAR13->VAR30[4], 115200, VAR29[0]);
    if (VAR31[0].VAR32)
        FUN12(0x4200, VAR13->VAR30[2], &VAR31[0]);
}