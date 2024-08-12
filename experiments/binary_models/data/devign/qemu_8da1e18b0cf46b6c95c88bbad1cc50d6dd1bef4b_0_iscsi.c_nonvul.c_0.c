static int FUN1(VAR1 *VAR2, const char *VAR3, int VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    struct VAR8 *VAR9 = NULL;
    struct VAR10 *VAR10 = NULL;
    struct IscsiTask VAR11;
    char *VAR12 = NULL;
    int VAR13;
    if ((VAR14 % 512) != 0)
    {
        FUN2(""
                     ""
                     "",
                     VAR14);
        return -VAR15;
    }
    VAR10 = FUN3(VAR9, VAR3);
    if (VAR10 == NULL)
    {
        FUN2("", VAR3);
        VAR13 = -VAR15;
        goto VAR16;
    }
    memset(VAR6, 0, sizeof(VAR5));
    VAR12 = FUN4(VAR10->VAR17);
    VAR9 = FUN5(VAR12);
    if (VAR9 == NULL)
    {
        FUN2("");
        VAR13 = -VAR18;
        goto VAR16;
    }
    if (FUN6(VAR9, VAR10->VAR17))
    {
        FUN2("");
        VAR13 = -VAR15;
        goto VAR16;
    }
    if (VAR10->VAR19 != NULL)
    {
        VAR13 = FUN7(VAR9, VAR10->VAR19, VAR10->VAR20);
        if (VAR13 != 0)
        {
            FUN2("");
            VAR13 = -VAR15;
            goto VAR16;
        }
    }
    if (FUN8(VAR9, VAR10->VAR17) != 0)
    {
        FUN2("");
        VAR13 = -VAR15;
        goto VAR16;
    }
    if (FUN9(VAR9, VAR21) != 0)
    {
        FUN2("");
        VAR13 = -VAR15;
        goto VAR16;
    }
    FUN10(VAR9, VAR22);
    FUN11(VAR9, VAR10->VAR17);
    VAR11.VAR6 = VAR6;
    VAR11.VAR23 = 0;
    VAR11.VAR24 = 0;
    VAR11.VAR2 = VAR2;
    VAR6->VAR9 = VAR9;
    VAR6->VAR25 = VAR10->VAR25;
    if (FUN12(VAR9, VAR10->VAR26, VAR10->VAR25, VAR27, &VAR11) != 0)
    {
        FUN2("");
        VAR13 = -VAR15;
        goto VAR16;
    }
    while (!VAR11.VAR24)
    {
        FUN13(VAR6);
        FUN14();
    }
    if (VAR11.VAR23 != 0)
    {
        FUN2("", FUN15(VAR9));
        VAR13 = -VAR15;
        goto VAR16;
    }
    if (VAR6->VAR28 == VAR29 || VAR6->VAR28 == VAR30)
    {
        VAR2->VAR31 = 1;
    }
    VAR13 = 0;
VAR16:
    if (VAR12 != NULL)
    {
        FUN16(VAR12);
    }
    if (VAR10 != NULL)
    {
        FUN17(VAR10);
    }
    if (VAR13)
    {
        if (VAR9 != NULL)
        {
            FUN18(VAR9);
        }
        memset(VAR6, 0, sizeof(VAR5));
    }
    return VAR13;
}