static int FUN1(VAR1 *VAR2, VAR3 **VAR4)
{
    int VAR5, VAR6;
    struct VAR7 *VAR8;
    char VAR9[40] = "";
    struct VAR10 *VAR11, *VAR12;
    char VAR13[16];
    for (VAR6 = 0; VAR6 < VAR14; VAR6++)
    {
        VAR2->VAR15[VAR6].VAR16 = 0;
        VAR2->VAR15[VAR6].VAR17 = NULL;
    }
    if (!VAR2->VAR18 || !VAR2->VAR18[0])
    {
        FUN2(VAR4, "");
        VAR2->VAR19 = -VAR20;
        return -1;
    }
    VAR2->VAR21 = FUN3();
    if (!VAR2->VAR21)
    {
        FUN2(VAR4, "");
        VAR2->VAR19 = -VAR20;
        return -1;
    }
    VAR5 = FUN4(VAR2->VAR21, &VAR8, NULL, VAR22);
    if (VAR5)
    {
        FUN2(VAR4, "");
        goto VAR23;
    }
    snprintf(VAR13, 16, "", VAR2->VAR24);
    VAR13[15] = '';
    VAR5 = FUN5(VAR2->VAR18, VAR13, NULL, &VAR11);
    if (VAR5 < 0)
    {
        FUN2(VAR4, "", VAR2->VAR18);
        goto VAR25;
    }
    for (VAR12 = VAR11; VAR12 != NULL; VAR12 = VAR12->VAR26)
    {
        FUN6(VAR12->VAR27, &((struct VAR28 *)VAR12->VAR29)->VAR30, VAR9, sizeof VAR9);
        FUN7(VAR2->VAR18, VAR9);
        VAR5 = FUN8(VAR8, VAR12->VAR29);
        if (VAR5)
        {
            continue;
        }
        if (VAR12->VAR27 == VAR31)
        {
            VAR5 = FUN9(VAR4, VAR8->VAR32);
            if (VAR5)
            {
                continue;
            }
        }
        break;
    }
    if (!VAR12)
    {
        FUN2(VAR4, "");
        goto VAR25;
    }
    VAR2->VAR8 = VAR8;
    FUN10("", VAR8);
    return 0;
VAR25:
    FUN11(VAR8);
VAR23:
    FUN12(VAR2->VAR21);
    VAR2->VAR21 = NULL;
    VAR2->VAR19 = VAR5;
    return VAR5;
}