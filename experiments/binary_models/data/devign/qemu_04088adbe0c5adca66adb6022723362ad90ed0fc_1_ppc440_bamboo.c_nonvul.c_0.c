static void FUN1(ram_addr_t VAR1, const char *VAR2, const char *VAR3, const char *VAR4, const char *VAR5, const char *VAR6)
{
    unsigned int VAR7[4] = {28, 27, 26, 25};
    VAR8 *VAR9;
    VAR10 *VAR11;
    uint64_t VAR12;
    uint64_t VAR13;
    target_phys_addr_t VAR14 = 0;
    target_phys_addr_t VAR15 = 0;
    target_long VAR16 = 0;
    target_ulong VAR17 = 0;
    target_long VAR18 = 0;
    target_ulong VAR19 = 0;
    int VAR20;
    VAR11 = FUN2(&VAR1, &VAR9, VAR7, 1, VAR6);
    if (VAR9)
    {
        for (VAR20 = 0; VAR20 < VAR21; VAR20++)
        {
            FUN3(&VAR22[VAR20], "", NULL);
        }
    }
    if (VAR3)
    {
        VAR16 = FUN4(VAR3, &VAR14, &VAR15, NULL);
        if (VAR16 < 0)
        {
            VAR16 = FUN5(VAR3, 0, &VAR12, &VAR13, NULL, 1, VAR23, 0);
            VAR14 = VAR12;
            VAR15 = VAR13;
        }
        if (VAR16 < 0)
        {
            fprintf(VAR24, "", VAR3);
            FUN6(1);
        }
    }
    if (VAR5)
    {
        VAR17 = VAR16 + VAR15;
        VAR18 = FUN7(VAR5, VAR17, VAR1 - VAR17);
        if (VAR18 < 0)
        {
            fprintf(VAR24, "", VAR5);
            FUN6(1);
        }
    }
    if (VAR3)
    {
        if (VAR17)
            VAR19 = VAR17 + VAR18;
        else
            VAR19 = VAR16 + VAR15;
        if (FUN8(VAR19, VAR1, VAR17, VAR18, VAR4) < 0)
        {
            fprintf(VAR24, "");
            FUN6(1);
        }
        FUN9(VAR11);
        VAR11->VAR25[1] = (16 << 20) - 8;
        VAR11->VAR25[3] = VAR19;
        VAR11->VAR26 = VAR14;
    }
    if (FUN10())
        FUN11();
}