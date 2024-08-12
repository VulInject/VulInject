int FUN1(VAR1 *VAR2, const char *VAR3, int VAR4)
{
    int VAR5;
    int64_t VAR6;
    struct cow_header_v2 VAR7;
    char template[] = "";
    int VAR8;
    struct stat VAR9;
    VAR2->VAR10 = 0;
    VAR2->VAR5 = -1;
    VAR2->VAR8 = -1;
    VAR2->VAR11 = NULL;
    strcpy(VAR2->VAR3, VAR3);
    VAR5 = open(VAR3, VAR12 | VAR13);
    VAR5 = open(VAR3, VAR12 | VAR14);
    if (VAR5 < 0)
    {
        VAR5 = open(VAR3, VAR15 | VAR13);
        VAR5 = open(VAR3, VAR15 | VAR14);
        if (VAR5 < 0)
        {
            FUN2(VAR3);
            goto VAR16;
        }
        if (!VAR4)
            VAR2->VAR10 = 1;
    }
    VAR2->VAR5 = VAR5;
    if (read(VAR5, &VAR7, sizeof(VAR7)) != sizeof(VAR7))
    {
        fprintf(VAR17, "", VAR3);
        goto VAR16;
    }
    if (FUN3(VAR7.VAR18) == VAR19 && FUN3(VAR7.VAR20) == VAR21)
    {
        VAR6 = VAR7.VAR6;
        VAR6 = FUN4(VAR6);
        VAR2->VAR22 = VAR6 / 512;
        VAR2->VAR8 = VAR5;
        VAR2->VAR5 = -1;
        if (VAR7.VAR23[0] != '')
        {
            if (FUN5(VAR7.VAR23, &VAR9) != 0)
            {
                fprintf(VAR17, "", VAR3, VAR7.VAR23);
                goto VAR16;
            }
            if (VAR9.VAR24 != FUN3(VAR7.VAR25))
            {
                fprintf(VAR17, "", VAR3, VAR7.VAR23);
                goto VAR16;
            }
            VAR5 = open(VAR7.VAR23, VAR15 | VAR14);
            if (VAR5 < 0)
                goto VAR16;
            VAR2->VAR5 = VAR5;
        }
        VAR2->VAR26 = ((VAR2->VAR22 + 7) >> 3) + sizeof(VAR7);
        VAR2->VAR27 = FUN6(FUN7(VAR2->VAR26), VAR2->VAR26, VAR28 | VAR29, VAR30, VAR2->VAR8, 0);
        if (VAR2->VAR27 == VAR31)
            goto VAR16;
        VAR2->VAR11 = VAR2->VAR27 + sizeof(VAR7);
        VAR2->VAR32 = (VAR2->VAR26 + 511) & ~511;
        VAR4 = 0;
    }
    else
    {
        VAR6 = FUN8(VAR5, 0, VAR33);
        VAR2->VAR22 = VAR6 / 512;
        VAR2->VAR5 = VAR5;
    }
    if (VAR4)
    {
        VAR8 = FUN9(template);
        if (VAR8 < 0)
            goto VAR16;
        VAR2->VAR8 = VAR8;
        unlink(template);
        VAR2->VAR26 = (VAR2->VAR22 + 7) >> 3;
        VAR2->VAR27 = FUN6(FUN7(VAR2->VAR26), VAR2->VAR26, VAR28 | VAR29, VAR34 | VAR35, -1, 0);
        if (VAR2->VAR27 == VAR31)
            goto VAR16;
        VAR2->VAR11 = VAR2->VAR27;
        VAR2->VAR32 = 0;
    }
    VAR2->VAR36 = 1;
    if (VAR2->VAR37)
        VAR2->FUN10(VAR2->VAR38);
    return 0;
VAR16:
    FUN11(VAR2);
    return -1;
}