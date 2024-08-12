int FUN1(const char *VAR1, VAR2 *VAR3, VAR2 *VAR4, int *VAR5)
{
    int VAR6;
    int VAR7;
    uboot_image_header_t VAR8;
    VAR9 *VAR10 = &VAR8;
    VAR11 *VAR12 = NULL;
    int VAR13 = -1;
    VAR6 = open(VAR1, VAR14 | VAR15);
    if (VAR6 < 0)
        return -1;
    VAR7 = read(VAR6, VAR10, sizeof(VAR9));
    if (VAR7 < 0)
        goto VAR16;
    FUN2(VAR10);
    if (VAR10->VAR17 != VAR18)
        goto VAR16;
    if (VAR10->VAR19 == VAR20)
    {
        fprintf(VAR21, "");
        goto VAR16;
    }
    switch (VAR10->VAR22)
    {
    case VAR23:
    case VAR24:
        break;
    default:
        fprintf(VAR21, "", VAR10->VAR22);
        goto VAR16;
    }
    if (VAR5)
    {
        if (VAR10->VAR19 == VAR25 && VAR10->VAR26 == VAR27)
            *VAR5 = 1;
        else
            *VAR5 = 0;
    }
    *VAR3 = VAR10->VAR28;
    VAR12 = FUN3(VAR10->VAR29);
    if (!VAR12)
        goto VAR16;
    if (read(VAR6, VAR12, VAR10->VAR29) != VAR10->VAR29)
    {
        fprintf(VAR21, "");
        goto VAR16;
    }
    if (VAR10->VAR22 == VAR24)
    {
        VAR11 *VAR30;
        size_t VAR31;
        ssize_t VAR32;
        VAR30 = VAR12;
        VAR31 = VAR33;
        VAR12 = FUN3(VAR31);
        VAR32 = FUN4(VAR12, VAR31, VAR30, VAR10->VAR29);
        FUN5(VAR30);
        if (VAR32 < 0)
        {
            fprintf(VAR21, "");
            goto VAR16;
        }
        VAR10->VAR29 = VAR32;
    }
    FUN6(VAR10->VAR34, VAR12, VAR10->VAR29);
    if (VAR4)
        *VAR4 = VAR10->VAR34;
    VAR13 = VAR10->VAR29;
VAR16:
    if (VAR12)
        FUN5(VAR12);
    close(VAR6);
    return VAR13;
}