int FUN1(VAR1 *VAR2, const char *VAR3)
{
    VAR4 *VAR5 = &VAR2->VAR5;
    x86_def_t VAR6, *VAR7 = &VAR6;
    VAR8 *VAR9 = NULL;
    char *VAR10, *VAR11;
    VAR12 **VAR13;
    memset(VAR7, 0, sizeof(*VAR7));
    VAR13 = FUN2(VAR3, "", 2);
    if (!VAR13[0])
    {
        FUN3(&VAR9, "");
        goto VAR14;
    }
    VAR10 = VAR13[0];
    VAR11 = VAR13[1];
    if (FUN4(VAR7, VAR10) < 0)
    {
        FUN3(&VAR9, "", VAR10);
        goto VAR14;
    }
    if (FUN5())
    {
        VAR7->VAR15 |= VAR16;
    }
    VAR7->VAR17 |= VAR18;
    FUN6(FUN7(VAR2), VAR7->VAR19, "", &VAR9);
    FUN8(FUN7(VAR2), VAR7->VAR20, "", &VAR9);
    FUN8(FUN7(VAR2), VAR7->VAR21, "", &VAR9);
    FUN8(FUN7(VAR2), VAR7->VAR22, "", &VAR9);
    FUN8(FUN7(VAR2), VAR7->VAR23, "", &VAR9);
    VAR5->VAR24 = VAR7->VAR11;
    VAR5->VAR25 = VAR7->VAR17;
    VAR5->VAR26 = VAR7->VAR27;
    VAR5->VAR28 = VAR7->VAR29;
    FUN8(FUN7(VAR2), VAR7->VAR30, "", &VAR9);
    VAR5->VAR31 = VAR7->VAR15;
    VAR5->VAR32 = VAR7->VAR33;
    VAR5->VAR34 = VAR7->VAR35;
    VAR5->VAR36 = VAR7->VAR36;
    VAR5->VAR37 = VAR7->VAR38;
    FUN8(FUN7(VAR2), (VAR39)VAR7->VAR40 * 1000, "", &VAR9);
    FUN6(FUN7(VAR2), VAR7->VAR41, "", &VAR9);
    if (VAR9)
    {
        goto VAR14;
    }
    FUN9(VAR2, VAR11, &VAR9);
VAR14:
    FUN10(VAR13);
    if (VAR9)
    {
        fprintf(VAR42, "", FUN11(VAR9));
        FUN12(VAR9);
        return -1;
    }
    return 0;
}