int FUN1(const char *VAR1, VAR2 *VAR3, int *VAR4)
{
    int VAR5;
    int VAR6;
    uboot_image_header_t VAR7;
    VAR8 *VAR9 = &VAR7;
    VAR10 *VAR11 = NULL;
    VAR5 = open(VAR1, VAR12 | VAR13);
    if (VAR5 < 0)
        return -1;
    VAR6 = read(VAR5, VAR9, sizeof(VAR8));
    if (VAR6 < 0)
        goto VAR14;
    FUN2(VAR9);
    if (VAR9->VAR15 != VAR16)
        goto VAR14;
    if (VAR9->VAR17 == VAR18)
    {
        fprintf(VAR19, "");
        goto VAR14;
    }
    if (VAR9->VAR20 != VAR21)
    {
        fprintf(VAR19, "");
        goto VAR14;
    }
    if (VAR4)
    {
        if (VAR9->VAR17 == VAR22 && VAR9->VAR23 == VAR24)
            *VAR4 = 1;
        else
            *VAR4 = 0;
    }
    *VAR3 = VAR9->VAR25;
    VAR11 = FUN3(VAR9->VAR26);
    if (!VAR11)
        goto VAR14;
    if (read(VAR5, VAR11, VAR9->VAR26) != VAR9->VAR26)
    {
        fprintf(VAR19, "");
        goto VAR14;
    }
    FUN4(VAR9->VAR27, VAR11, VAR9->VAR26);
    return VAR9->VAR26;
VAR14:
    if (VAR11)
        FUN5(VAR11);
    close(VAR5);
    return -1;
}