static int FUN1(VAR1 *VAR2, VAR3 *VAR4, const VAR3 *VAR5, int VAR6)
{
    VAR7 *VAR8 = (VAR7 *)VAR5->VAR9[3];
    VAR10 *VAR11;
    D3DSURFACE_DESC VAR12;
    D3DLOCKED_RECT VAR13;
    HRESULT VAR14;
    int VAR15, VAR16, VAR17;
    int VAR18 = 0;
    VAR17 = FUN2(VAR4->VAR19);
    VAR14 = FUN3(VAR8, &VAR12);
    if (FUN4(VAR14))
    {
        FUN5(VAR2, VAR20, "");
        return VAR21;
    }
    if (!(VAR6 & VAR22))
        VAR18 |= VAR23;
    if (VAR6 & VAR24)
        VAR18 |= VAR25;
    VAR14 = FUN6(VAR8, &VAR13, NULL, VAR18);
    if (FUN4(VAR14))
    {
        FUN5(VAR2, VAR20, "");
        return VAR21;
    }
    VAR11 = FUN7(sizeof(*VAR11));
    if (!VAR11)
        goto VAR26;
    VAR16 = FUN8(VAR5->VAR27, VAR4, VAR5, VAR28, VAR11);
    if (VAR16 < 0)
    {
        FUN9(&VAR11);
        goto VAR26;
    }
    for (VAR15 = 0; VAR15 < VAR17; VAR15++)
        VAR4->VAR29[VAR15] = VAR13.VAR30;
    FUN10(VAR4->VAR9, VAR4->VAR19, VAR12.VAR31, (VAR32 *)VAR13.VAR33, VAR4->VAR29);
    if (VAR4->VAR19 == VAR34)
        VAR4->VAR9[1] = (VAR32 *)VAR11->VAR35;
    return 0;
VAR26:
    FUN11(VAR8);
    return VAR16;
}