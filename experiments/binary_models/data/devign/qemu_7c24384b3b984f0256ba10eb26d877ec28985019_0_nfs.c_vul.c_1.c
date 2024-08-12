static VAR1 FUN1(VAR2 *VAR3, const char *VAR4, int VAR5, VAR6 **VAR7)
{
    int VAR8 = -VAR9, VAR10;
    struct stat VAR11;
    VAR12 *VAR13;
    VAR14 *VAR15 = NULL;
    char *VAR16 = NULL, *VAR17 = NULL;
    VAR13 = FUN2(VAR4);
    if (!VAR13)
    {
        FUN3(VAR7, "");
        goto VAR18;
    }
    if (!VAR13->VAR19)
    {
        FUN3(VAR7, "");
        goto VAR18;
    }
    VAR17 = strrchr(VAR13->VAR20, '');
    if (VAR17 == NULL)
    {
        FUN3(VAR7, "");
        goto VAR18;
    }
    VAR16 = FUN4(VAR17);
    *VAR17 = 0;
    VAR3->VAR21 = FUN5();
    if (VAR3->VAR21 == NULL)
    {
        FUN3(VAR7, "");
        goto VAR18;
    }
    VAR15 = FUN6(VAR13->VAR22);
    for (VAR10 = 0; VAR10 < VAR15->VAR23; VAR10++)
    {
        if (!VAR15->VAR24[VAR10].VAR25)
        {
            FUN3(VAR7, "", VAR15->VAR24[VAR10].VAR26);
            goto VAR18;
        }
        if (!FUN7(VAR15->VAR24[VAR10].VAR26, "", 3))
        {
            FUN8(VAR3->VAR21, FUN9(VAR15->VAR24[VAR10].VAR25));
        }
        else if (!FUN7(VAR15->VAR24[VAR10].VAR26, "", 3))
        {
            FUN10(VAR3->VAR21, FUN9(VAR15->VAR24[VAR10].VAR25));
        }
        else if (!FUN7(VAR15->VAR24[VAR10].VAR26, "", 10))
        {
            FUN11(VAR3->VAR21, FUN9(VAR15->VAR24[VAR10].VAR25));
        }
        else
        {
            FUN3(VAR7, "", VAR15->VAR24[VAR10].VAR26);
            goto VAR18;
        }
    }
    VAR8 = FUN12(VAR3->VAR21, VAR13->VAR19, VAR13->VAR20);
    if (VAR8 < 0)
    {
        FUN3(VAR7, "", FUN13(VAR3->VAR21));
        goto VAR18;
    }
    if (VAR5 & VAR27)
    {
        VAR8 = FUN14(VAR3->VAR21, VAR16, 0600, &VAR3->VAR28);
        if (VAR8 < 0)
        {
            FUN3(VAR7, "", FUN13(VAR3->VAR21));
            goto VAR18;
        }
    }
    else
    {
        VAR8 = FUN15(VAR3->VAR21, VAR16, VAR5, &VAR3->VAR28);
        if (VAR8 < 0)
        {
            FUN3(VAR7, "", FUN13(VAR3->VAR21));
            goto VAR18;
        }
    }
    VAR8 = FUN16(VAR3->VAR21, VAR3->VAR28, &VAR11);
    if (VAR8 < 0)
    {
        FUN3(VAR7, "", FUN13(VAR3->VAR21));
        goto VAR18;
    }
    VAR8 = FUN17(VAR11.VAR29, VAR30);
    VAR3->VAR31 = FUN18(VAR11.VAR32);
    goto VAR33;
VAR18:
    FUN19(VAR3);
VAR33:
    if (VAR15)
    {
        FUN20(VAR15);
    }
    FUN21(VAR13);
    FUN22(VAR16);
    return VAR8;
}