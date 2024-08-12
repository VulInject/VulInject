static int FUN1(VAR1 *VAR2, struct VAR3 *VAR4)
{
    int VAR5;
    static pa_sample_spec VAR6;
    static pa_buffer_attr VAR7;
    struct audsettings VAR8 = *VAR4;
    VAR9 *VAR10 = (VAR9 *)VAR2;
    VAR6.VAR11 = FUN2(VAR4->VAR12, VAR4->VAR13);
    VAR6.VAR14 = VAR4->VAR15;
    VAR6.VAR16 = VAR4->VAR17;
    VAR7.VAR18 = FUN3(4 * 1000, &VAR6);
    VAR7.VAR19 = FUN3(2 * 1000, &VAR6);
    VAR7.VAR20 = -1;
    VAR7.VAR21 = -1;
    VAR8.VAR12 = FUN4(VAR6.VAR11, &VAR8.VAR13);
    VAR10->VAR22 = FUN5(VAR23.VAR24, "", VAR25, VAR23.VAR26, "", &VAR6, NULL, &VAR7, &VAR5);
    if (!VAR10->VAR22)
    {
        FUN6(VAR5, "");
        goto VAR27;
    }
    FUN7(&VAR2->VAR28, &VAR8);
    VAR2->VAR29 = VAR23.VAR29;
    VAR10->VAR30 = FUN8(VAR31, VAR2->VAR29, 1 << VAR2->VAR28.VAR32);
    VAR10->VAR33 = VAR2->VAR33;
    if (!VAR10->VAR30)
    {
        FUN9("", VAR2->VAR29 << VAR2->VAR28.VAR32);
        goto VAR34;
    }
    if (FUN10(&VAR10->VAR35, VAR36, VAR2, VAR37, VAR31))
    {
        goto VAR38;
    }
    return 0;
VAR38:
    FUN11(VAR10->VAR30);
    VAR10->VAR30 = NULL;
VAR34:
    FUN12(VAR10->VAR22);
    VAR10->VAR22 = NULL;
VAR27:
    return -1;
}