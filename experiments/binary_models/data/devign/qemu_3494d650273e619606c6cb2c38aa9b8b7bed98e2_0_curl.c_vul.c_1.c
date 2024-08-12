static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5)
{
    VAR6 *VAR7 = VAR2->VAR8;
    VAR9 *VAR10 = NULL;
    VAR11 *VAR12;
    VAR13 *VAR14 = NULL;
    const char *VAR15;
    double VAR16;
    static int VAR17 = 0;
    if (VAR5 & VAR18)
    {
        FUN2(VAR19, "");
        return -VAR20;
    }
    VAR12 = FUN3(&VAR21);
    FUN4(VAR12, VAR4, &VAR14);
    if (FUN5(&VAR14))
    {
        FUN6(VAR14);
        FUN7(VAR14);
        goto VAR22;
    }
    VAR7->VAR23 = FUN8(VAR12, "", VAR24);
    if ((VAR7->VAR23 & 0x1ff) != 0)
    {
        fprintf(VAR25, "", VAR7->VAR23);
        goto VAR22;
    }
    VAR15 = FUN9(VAR12, "");
    if (VAR15 == NULL)
    {
        FUN2(VAR19, ""
                                                 "");
        goto VAR22;
    }
    if (!VAR17)
    {
        FUN10(VAR26);
        VAR17 = 1;
    }
    FUN11("", VAR15);
    VAR7->VAR27 = FUN12(VAR15);
    VAR10 = FUN13(VAR7);
    if (!VAR10)
        goto VAR22;
    FUN14(VAR10->VAR28, VAR29, 1);
    FUN14(VAR10->VAR28, VAR30, (void *)VAR31);
    if (FUN15(VAR10->VAR28))
        goto VAR32;
    FUN16(VAR10->VAR28, VAR33, &VAR16);
    if (VAR16)
        VAR7->VAR34 = (VAR35)VAR16;
    else if (!VAR7->VAR34)
        goto VAR32;
    FUN11("", VAR7->VAR34);
    FUN17(VAR10);
    FUN18(VAR10->VAR28);
    VAR10->VAR28 = NULL;
    VAR7->VAR36 = FUN19();
    FUN20(VAR7->VAR36, VAR37, VAR7);
    FUN20(VAR7->VAR36, VAR38, VAR39);
    FUN21(VAR7);
    FUN22(VAR12);
    return 0;
VAR32:
    fprintf(VAR25, "", VAR10->VAR40);
    FUN18(VAR10->VAR28);
    VAR10->VAR28 = NULL;
VAR22:
    FUN23(VAR7->VAR27);
    FUN22(VAR12);
    return -VAR41;
}