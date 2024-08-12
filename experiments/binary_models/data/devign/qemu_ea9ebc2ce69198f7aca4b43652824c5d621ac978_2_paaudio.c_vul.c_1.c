static int FUN1(VAR1 *VAR2, struct VAR3 *VAR4)
{
    int VAR5;
    static pa_sample_spec VAR6;
    struct audsettings VAR7 = *VAR4;
    VAR8 *VAR9 = (VAR8 *)VAR2;
    VAR6.VAR10 = FUN2(VAR4->VAR11, VAR4->VAR12);
    VAR6.VAR13 = VAR4->VAR14;
    VAR6.VAR15 = VAR4->VAR16;
    VAR7.VAR11 = FUN3(VAR6.VAR10, &VAR7.VAR12);
    VAR9->VAR17 = FUN4(VAR18.VAR19, "", VAR20, VAR18.VAR21, "", &VAR6, NULL, NULL, &VAR5);
    if (!VAR9->VAR17)
    {
        FUN5(VAR5, "");
        goto VAR22;
    }
    FUN6(&VAR2->VAR23, &VAR7);
    VAR2->VAR24 = VAR18.VAR24;
    VAR9->VAR25 = FUN7(VAR26, VAR2->VAR24, 1 << VAR2->VAR23.VAR27);
    VAR9->VAR28 = VAR2->VAR28;
    if (!VAR9->VAR25)
    {
        FUN8("", VAR2->VAR24 << VAR2->VAR23.VAR27);
        goto VAR29;
    }
    if (FUN9(&VAR9->VAR30, VAR31, VAR2, VAR32, VAR26))
    {
        goto VAR33;
    }
    return 0;
VAR33:
    FUN10(VAR9->VAR25);
    VAR9->VAR25 = NULL;
VAR29:
    FUN11(VAR9->VAR17);
    VAR9->VAR17 = NULL;
VAR22:
    return -1;
}