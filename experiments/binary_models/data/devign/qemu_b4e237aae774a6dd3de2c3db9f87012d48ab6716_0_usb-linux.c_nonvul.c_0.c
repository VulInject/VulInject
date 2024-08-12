static int FUN1(void *VAR1, VAR2 *VAR3)
{
    VAR4 *VAR5 = 0;
    char VAR6[1024];
    int VAR7, VAR8, VAR9, VAR10, VAR11, VAR12;
    int VAR13 = 0;
    char VAR14[512];
    struct VAR15 *VAR16;
    VAR5 = FUN2(VAR17 "");
    if (!VAR5)
    {
        FUN3("");
        goto VAR18;
    }
    while ((VAR16 = FUN4(VAR5)))
    {
        if (VAR16->VAR19[0] != '' && !strchr(VAR16->VAR19, ''))
        {
            char *VAR20 = VAR16->VAR19;
            if (!FUN5(VAR16->VAR19, "", 3))
                VAR20 += 3;
            VAR7 = FUN6(VAR20);
            if (!FUN7(VAR6, sizeof(VAR6), "", VAR16->VAR19))
                goto VAR18;
            if (sscanf(VAR6, "", &VAR8) != 1)
                goto VAR18;
            if (!FUN7(VAR6, sizeof(VAR6), "", VAR16->VAR19))
                goto VAR18;
            if (sscanf(VAR6, "", &VAR10) != 1)
                goto VAR18;
            if (!FUN7(VAR6, sizeof(VAR6), "", VAR16->VAR19))
                goto VAR18;
            if (sscanf(VAR6, "", &VAR12) != 1)
                goto VAR18;
            if (!FUN7(VAR6, sizeof(VAR6), "", VAR16->VAR19))
                goto VAR18;
            if (sscanf(VAR6, "", &VAR11) != 1)
                goto VAR18;
            if (!FUN7(VAR6, sizeof(VAR6), "", VAR16->VAR19))
            {
                *VAR14 = 0;
            }
            else
            {
                if (strlen(VAR6) > 0)
                    VAR6[strlen(VAR6) - 1] = '';
                FUN8(VAR14, sizeof(VAR14), VAR6);
            }
            if (!FUN7(VAR6, sizeof(VAR6), "", VAR16->VAR19))
                goto VAR18;
            if (!strcmp(VAR6, ""))
                VAR9 = VAR21;
            else if (!strcmp(VAR6, ""))
                VAR9 = VAR22;
            else
                VAR9 = VAR23;
            VAR13 = FUN9(VAR1, VAR7, VAR8, VAR10, VAR12, VAR11, VAR14, VAR9);
            if (VAR13)
                goto VAR18;
        }
    }
VAR18:
    if (VAR5)
        FUN10(VAR5);
    return VAR13;
}