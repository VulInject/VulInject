static int FUN1(const char *VAR1, VAR2 *VAR3, VAR2 *VAR4, int *VAR5, uint8_t VAR6, FUN2 (*VAR7)(void *, VAR8), void *VAR9)
{
    int VAR10;
    int VAR11;
    hwaddr VAR12;
    uboot_image_header_t VAR13;
    VAR14 *VAR15 = &VAR13;
    VAR16 *VAR17 = NULL;
    int VAR18 = -1;
    int VAR19 = 0;
    VAR10 = open(VAR1, VAR20 | VAR21);
    if (VAR10 < 0)
        return -1;
    VAR11 = read(VAR10, VAR15, sizeof(VAR14));
    if (VAR11 < 0)
        goto VAR22;
    FUN3(VAR15);
    if (VAR15->VAR23 != VAR24)
        goto VAR22;
    if (VAR15->VAR25 != VAR6)
    {
        fprintf(VAR26, "", VAR15->VAR25, VAR6);
        goto VAR22;
    }
    switch (VAR15->VAR25)
    {
    case VAR27:
        VAR12 = VAR15->VAR28;
        if (VAR7)
        {
            VAR12 = FUN4(VAR9, VAR12);
        }
        if (VAR4)
        {
            *VAR4 = VAR15->VAR28;
        }
        switch (VAR15->VAR29)
        {
        case VAR30:
            break;
        case VAR31:
            VAR19 = 1;
            break;
        default:
            fprintf(VAR26, "", VAR15->VAR29);
            goto VAR22;
        }
        if (VAR3)
        {
            *VAR3 = VAR15->VAR32;
        }
        if (VAR5)
        {
            if (VAR15->VAR33 == VAR34)
            {
                *VAR5 = 1;
            }
            else
            {
                *VAR5 = 0;
            }
        }
        break;
    case VAR35:
        VAR12 = *VAR4;
        break;
    default:
        fprintf(VAR26, "", VAR15->VAR25);
        goto VAR22;
    }
    VAR17 = FUN5(VAR15->VAR36);
    if (read(VAR10, VAR17, VAR15->VAR36) != VAR15->VAR36)
    {
        fprintf(VAR26, "");
        goto VAR22;
    }
    if (VAR19)
    {
        VAR16 *VAR37;
        size_t VAR38;
        ssize_t VAR39;
        VAR37 = VAR17;
        VAR38 = VAR40;
        VAR17 = FUN5(VAR38);
        VAR39 = FUN6(VAR17, VAR38, VAR37, VAR15->VAR36);
        FUN7(VAR37);
        if (VAR39 < 0)
        {
            fprintf(VAR26, "");
            goto VAR22;
        }
        VAR15->VAR36 = VAR39;
    }
    FUN8(VAR1, VAR17, VAR15->VAR36, VAR12);
    VAR18 = VAR15->VAR36;
VAR22:
    FUN7(VAR17);
    close(VAR10);
    return VAR18;
}