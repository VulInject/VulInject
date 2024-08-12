int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, int VAR6)
{
    VAR7 *VAR8 = VAR2->VAR9;
    VAR10 *VAR11 = &VAR8->VAR12[VAR5];
    VAR1 *VAR13 = VAR11->VAR13;
    VAR14 *VAR15 = NULL;
    int VAR16;
    VAR17 *VAR18 = NULL;
    AVPacket VAR19;
    int VAR20 = 0, VAR21;
    if (!VAR13)
        return FUN2(VAR22);
    if (!VAR13->VAR23)
        return FUN2(VAR24);
    FUN3(&VAR11->VAR25, VAR4, VAR6);
    FUN4(VAR13, 0, VAR4, VAR2);
    VAR16 = FUN5(VAR13->VAR23, &VAR15);
    if ((VAR20 = FUN6(&VAR13->VAR23, VAR26)) < 0)
        goto VAR27;
    if (VAR16 <= 0)
        goto VAR27;
    if ((VAR20 = FUN7(&VAR18)) < 0)
        goto VAR27;
    FUN8(&VAR19);
    VAR21 = FUN9(VAR18, VAR15, VAR16, VAR11, &VAR19.VAR28);
    FUN10(&VAR15);
    VAR19.VAR16 = VAR16 = FUN5(VAR18, &VAR15);
    VAR19.VAR29 = VAR15;
    VAR19.VAR30 = VAR19.VAR28;
    VAR19.VAR31 = VAR5;
    if (VAR4->VAR32 & VAR33)
        VAR19.VAR32 |= VAR33;
    if (VAR21 > 0)
        FUN11(VAR2, &VAR19);
VAR27:
    FUN12(VAR15);
    FUN13(&VAR11->VAR25);
    return VAR20;
}