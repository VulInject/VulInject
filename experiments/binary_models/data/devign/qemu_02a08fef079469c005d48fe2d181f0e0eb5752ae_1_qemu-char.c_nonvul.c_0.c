static VAR1 *FUN1(VAR2 *VAR3)
{
    VAR1 *VAR4 = NULL;
    VAR5 *VAR6 = NULL;
    int VAR7 = -1;
    int VAR8;
    int VAR9;
    int VAR10;
    int VAR11;
    int VAR12;
    VAR8 = FUN2(VAR3, "", 0);
    VAR9 = FUN2(VAR3, "", 1);
    VAR12 = FUN2(VAR3, "", 0);
    VAR10 = !FUN2(VAR3, "", 1);
    VAR11 = FUN3(VAR3, "") != NULL;
    if (!VAR8)
        VAR9 = 0;
    VAR4 = FUN4(sizeof(VAR1));
    VAR6 = FUN4(sizeof(VAR5));
    if (VAR11)
    {
        if (VAR8)
        {
            VAR7 = FUN5(VAR3);
        }
        else
        {
            VAR7 = FUN6(VAR3);
        }
    }
    else
    {
        if (VAR8)
        {
            VAR7 = FUN7(VAR3, 0, NULL);
        }
        else
        {
            VAR7 = FUN8(VAR3, NULL, NULL);
        }
    }
    if (VAR7 < 0)
    {
        goto VAR13;
    }
    if (!VAR9)
        FUN9(VAR7);
    VAR6->VAR14 = 0;
    VAR6->VAR7 = -1;
    VAR6->VAR15 = -1;
    VAR6->VAR16 = -1;
    VAR6->VAR11 = VAR11;
    VAR6->VAR10 = VAR10 && !VAR11;
    VAR4->VAR17 = VAR6;
    VAR4->VAR18 = VAR19;
    VAR4->VAR20 = VAR21;
    VAR4->VAR22 = VAR23;
    VAR4->VAR24 = VAR25;
    if (VAR8)
    {
        VAR6->VAR15 = VAR7;
        FUN10(VAR6->VAR15, NULL, VAR26, NULL, VAR4);
        if (VAR12)
            VAR6->VAR27 = 1;
    }
    else
    {
        VAR6->VAR14 = 1;
        VAR6->VAR7 = VAR7;
        FUN11(VAR7);
        FUN12(VAR4);
    }
    VAR4->VAR28 = FUN13(256);
    if (VAR11)
    {
        snprintf(VAR4->VAR28, 256, "", FUN3(VAR3, ""), FUN2(VAR3, "", 0) ? "" : "");
    }
    else if (VAR12)
    {
        snprintf(VAR4->VAR28, 256, "", FUN3(VAR3, ""), FUN3(VAR3, ""), FUN2(VAR3, "", 0) ? "" : "");
    }
    else
    {
        snprintf(VAR4->VAR28, 256, "", FUN3(VAR3, ""), FUN3(VAR3, ""), FUN2(VAR3, "", 0) ? "" : "");
    }
    if (VAR8 && VAR9)
    {
        FUN14("", VAR4->VAR28);
        FUN15(VAR4);
        FUN9(VAR6->VAR15);
    }
    return VAR4;
VAR13:
    if (VAR7 >= 0)
        FUN16(VAR7);
    FUN17(VAR6);
    FUN17(VAR4);
    return NULL;
}