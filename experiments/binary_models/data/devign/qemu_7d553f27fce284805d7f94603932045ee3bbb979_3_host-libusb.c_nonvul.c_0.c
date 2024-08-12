static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = FUN2(VAR2);
    int VAR7 = FUN3(VAR4);
    int VAR8 = FUN4(VAR4);
    int VAR9;
    VAR10 *VAR11 = NULL;
    FUN5(VAR7, VAR8);
    if (VAR2->VAR12 != NULL)
    {
        goto VAR13;
    }
    VAR9 = FUN6(VAR4, &VAR2->VAR12);
    if (VAR9 != 0)
    {
        goto VAR13;
    }
    VAR2->VAR4 = VAR4;
    VAR2->VAR7 = VAR7;
    VAR2->VAR8 = VAR8;
    FUN7(VAR2);
    FUN8(VAR4, &VAR2->VAR14);
    FUN9(VAR2->VAR4, VAR2->VAR15, sizeof(VAR2->VAR15));
    FUN10(VAR6);
    FUN11(VAR2);
    VAR6->VAR16 = VAR17[FUN12(VAR4)];
    FUN13(VAR2);
    if (VAR2->VAR14.VAR18)
    {
        FUN14(VAR2->VAR12, VAR2->VAR14.VAR18, (unsigned char *)VAR6->VAR19, sizeof(VAR6->VAR19));
    }
    else
    {
        snprintf(VAR6->VAR19, sizeof(VAR6->VAR19), "", VAR7, VAR8);
    }
    FUN15(VAR6, &VAR11);
    if (VAR11)
    {
        FUN16("", FUN17(VAR11));
        FUN18(VAR11);
        goto VAR13;
    }
    FUN19(VAR7, VAR8);
    return 0;
VAR13:
    FUN20(VAR7, VAR8);
    if (VAR2->VAR12 != NULL)
    {
        FUN21(VAR2->VAR12);
        VAR2->VAR12 = NULL;
        VAR2->VAR4 = NULL;
    }
    return -1;
}