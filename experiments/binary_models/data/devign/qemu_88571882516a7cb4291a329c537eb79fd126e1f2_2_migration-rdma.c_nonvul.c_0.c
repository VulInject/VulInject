static VAR1 FUN1(VAR2 *VAR3, void *VAR4, ram_addr_t VAR5, ram_addr_t VAR6, size_t VAR7, int *VAR8)
{
    VAR9 *VAR10 = VAR4;
    VAR11 *VAR12 = VAR10->VAR12;
    int VAR13;
    FUN2();
    FUN3(VAR3);
    if (VAR7 > 0)
    {
        VAR13 = FUN4(VAR3, VAR12, VAR5, VAR6, VAR7);
        if (VAR13 < 0)
        {
            fprintf(VAR14, "", VAR13);
            goto VAR15;
        }
        if (VAR8)
        {
            *VAR8 = 1;
        }
    }
    else
    {
        uint64_t VAR16, VAR17;
        VAR13 = FUN5(VAR12, VAR5, VAR6, VAR7, &VAR16, &VAR17);
        if (VAR13)
        {
            fprintf(VAR14, "");
            goto VAR15;
        }
        FUN6(VAR12, VAR16, VAR17, 0);
    }
    while (1)
    {
        uint64_t VAR18, VAR19;
        int VAR13 = FUN7(VAR12, &VAR19, NULL);
        if (VAR13 < 0)
        {
            fprintf(VAR14, "", VAR13);
            goto VAR15;
        }
        VAR18 = VAR19 & VAR20;
        if (VAR18 == VAR21)
        {
            break;
        }
    }
    return VAR22;
VAR15:
    VAR12->VAR23 = VAR13;
    return VAR13;
}