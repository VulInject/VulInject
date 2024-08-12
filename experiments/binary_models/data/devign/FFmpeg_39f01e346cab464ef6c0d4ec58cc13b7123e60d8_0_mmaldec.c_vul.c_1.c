static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int *VAR5)
{
    VAR6 *VAR7 = VAR2->VAR8;
    VAR9 *VAR10 = NULL;
    MMAL_STATUS_T VAR11 = 0;
    int VAR12 = 0;
    if (VAR7->VAR13)
        goto VAR14;
    while (1)
    {
        if (VAR7->VAR15 || VAR7->VAR16 > VAR17 || (VAR7->VAR16 && VAR7->VAR18))
        {
            VAR10 = FUN2(VAR7->VAR19, 100);
            if (!VAR10)
            {
                FUN3(VAR2, VAR20, "");
                VAR12 = VAR21;
                goto VAR14;
            }
        }
        else
        {
            VAR10 = FUN4(VAR7->VAR19);
            if (!VAR10)
                goto VAR14;
        }
        VAR7->VAR13 |= !!(VAR10->VAR22 & VAR23);
        if (VAR7->VAR13)
            goto VAR14;
        if (VAR10->VAR24 == VAR25)
        {
            VAR26 *VAR27 = VAR7->VAR27;
            VAR28 *VAR29 = FUN5(VAR10);
            VAR9 *VAR30;
            FUN3(VAR2, VAR31, "");
            if ((VAR11 = FUN6(VAR27->VAR32[0])))
                goto VAR14;
            while ((VAR30 = FUN4(VAR7->VAR19)))
                FUN7(VAR30);
            FUN8(VAR27->VAR32[0]->VAR33, VAR29->VAR33);
            if ((VAR12 = FUN9(VAR2)) < 0)
                goto VAR14;
            if ((VAR11 = FUN10(VAR27->VAR32[0], VAR34)))
                goto VAR14;
            if ((VAR12 = FUN11(VAR2)) < 0)
                goto VAR14;
            if ((VAR12 = FUN12(VAR2)) < 0)
                goto VAR14;
            FUN7(VAR10);
            continue;
        }
        else if (VAR10->VAR24)
        {
            char VAR35[20];
            FUN13(VAR35, sizeof(VAR35), VAR10->VAR24);
            FUN3(VAR2, VAR36, "", VAR35);
            goto VAR14;
        }
        else if (VAR10->VAR37 == 0)
        {
            FUN7(VAR10);
            continue;
        }
        VAR7->VAR15++;
        if ((VAR12 = FUN14(VAR2, VAR4, VAR10)) < 0)
            goto VAR14;
        *VAR5 = 1;
        break;
    }
VAR14:
    if (VAR10)
        FUN7(VAR10);
    if (VAR11 && VAR12 >= 0)
        VAR12 = VAR21;
    return VAR12;
}