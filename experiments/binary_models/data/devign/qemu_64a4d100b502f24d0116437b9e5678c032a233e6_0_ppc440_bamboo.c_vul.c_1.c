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
    int VAR17;
    int VAR18;
    VAR11 = FUN2(&VAR1, &VAR9, VAR7, 1, VAR6);
    if (VAR9)
    {
        for (VAR18 = 0; VAR18 < VAR19; VAR18++)
        {
            FUN3(&VAR20[VAR18], "", NULL);
        }
    }
    if (VAR3)
    {
        VAR17 = FUN4(VAR3, &VAR14, &VAR15, NULL);
        if (VAR17 < 0)
        {
            VAR17 = FUN5(VAR3, NULL, NULL, &VAR12, &VAR13, NULL, 1, VAR21, 0);
            VAR14 = VAR12;
            VAR15 = VAR13;
        }
        if (VAR17 < 0)
        {
            fprintf(VAR22, "", VAR3);
            FUN6(1);
        }
    }
    if (VAR5)
    {
        VAR16 = FUN7(VAR5, VAR23, VAR1 - VAR23);
        if (VAR16 < 0)
        {
            fprintf(VAR22, "", VAR5, VAR23);
            FUN6(1);
        }
    }
    if (VAR3)
    {
        if (FUN8(VAR24, VAR1, VAR23, VAR16, VAR4) < 0)
        {
            fprintf(VAR22, "");
            FUN6(1);
        }
        FUN9(VAR11);
        VAR11->VAR25[1] = (16 << 20) - 8;
        VAR11->VAR25[3] = VAR24;
        VAR11->VAR26 = VAR14;
    }
    if (FUN10())
        FUN11();
}