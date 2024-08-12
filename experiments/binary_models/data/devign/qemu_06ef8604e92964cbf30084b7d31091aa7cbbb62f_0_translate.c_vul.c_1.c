void FUN1(void)
{
    typedef struct
    {
        VAR1 *VAR2;
        const char *VAR3;
        int VAR4;
    } VAR5;
    static const GlobalVar VAR6[] = {
        FUN2(VAR7),
        FUN2(VAR8),
        FUN2(VAR9),
        FUN2(VAR10),
        FUN2(VAR11),
        FUN2(VAR12),
        FUN2(VAR13),
    };
    static const char VAR14[31][4] = {"", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", ""};
    static const char VAR15[31][4] = {"", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", ""};
    static bool VAR16 = 0;
    int VAR17;
    if (VAR16)
    {
        return;
    }
    VAR16 = 1;
    VAR18 = FUN3(VAR19, "");
    for (VAR17 = 0; VAR17 < 31; VAR17++)
    {
        VAR20[VAR17] = FUN4(VAR19, FUN5(VAR21, VAR22[VAR17]), VAR14[VAR17]);
    }
    for (VAR17 = 0; VAR17 < 31; VAR17++)
    {
        VAR23[VAR17] = FUN4(VAR19, FUN5(VAR21, VAR24[VAR17]), VAR15[VAR17]);
    }
    for (VAR17 = 0; VAR17 < FUN6(VAR6); ++VAR17)
    {
        const VAR5 *VAR25 = &VAR6[VAR17];
        *VAR25->VAR2 = FUN4(VAR19, VAR25->VAR4, VAR25->VAR3);
    }
}