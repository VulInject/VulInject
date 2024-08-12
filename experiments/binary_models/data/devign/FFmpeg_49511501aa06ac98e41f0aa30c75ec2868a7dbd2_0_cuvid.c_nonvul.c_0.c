static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    VAR6 *VAR7 = (VAR6 *)VAR4->VAR8->VAR9;
    VAR10 *VAR11 = VAR7->VAR12;
    CUcontext VAR13, VAR14 = VAR11->VAR14;
    CUVIDSOURCEDATAPACKET VAR15 = {0};
    int VAR16;
    VAR16 = FUN2(FUN3(VAR14));
    if (VAR16 < 0)
        goto VAR17;
    FUN4(&VAR4->VAR18);
    VAR4->VAR18 = FUN5(VAR19 * sizeof(VAR20));
    if (!VAR4->VAR18)
    {
        FUN6(VAR2, VAR21, "");
        return;
    }
    if (VAR4->VAR22)
    {
        FUN7(VAR4->VAR22);
        VAR4->VAR22 = NULL;
    }
    if (VAR4->VAR23)
    {
        FUN8(VAR4->VAR23);
        VAR4->VAR23 = NULL;
    }
    VAR16 = FUN2(FUN9(&VAR4->VAR23, &VAR4->VAR24));
    if (VAR16 < 0)
        goto VAR17;
    VAR15.VAR25 = VAR4->VAR26.VAR27;
    VAR15.VAR28 = VAR4->VAR26.VAR29.VAR30;
    if (VAR15.VAR25 && VAR15.VAR28)
    {
        VAR16 = FUN2(FUN10(VAR4->VAR23, &VAR15));
        if (VAR16 < 0)
            goto VAR17;
    }
    VAR16 = FUN2(FUN11(&VAR13));
    if (VAR16 < 0)
        goto VAR17;
    VAR4->VAR31 = VAR32;
    VAR4->VAR33 = 0;
    return;
VAR17:
    FUN6(VAR2, VAR21, "");
}