VAR1 *FUN1(int VAR2, int VAR3, int VAR4, int VAR5, int VAR6, double VAR7)
{
    VAR1 *VAR8 = FUN2(sizeof(VAR1));
    double VAR9 = FUN3(VAR2 * VAR7 / VAR3, 1.0);
    int VAR10 = 1 << VAR5;
    if (!VAR8)
        return NULL;
    VAR8->VAR5 = VAR5;
    VAR8->VAR11 = VAR10 - 1;
    VAR8->VAR6 = VAR6;
    VAR8->VAR12 = FUN4((int)FUN5(VAR4 / VAR9), 1);
    VAR8->VAR13 = FUN2(VAR8->VAR12 * (VAR10 + 1) * sizeof(VAR14));
    if (!VAR8->VAR13)
        goto VAR15;
    if (FUN6(VAR8->VAR13, VAR9, VAR8->VAR12, VAR10, 1 << VAR16, VAR17))
        goto VAR15;
    memcpy(&VAR8->VAR13[VAR8->VAR12 * VAR10 + 1], VAR8->VAR13, (VAR8->VAR12 - 1) * sizeof(VAR14));
    VAR8->VAR13[VAR8->VAR12 * VAR10] = VAR8->VAR13[VAR8->VAR12 - 1];
    VAR8->VAR18 = VAR2;
    VAR8->VAR19 = VAR8->VAR20 = VAR3 * VAR10;
    VAR8->VAR21 = -VAR10 * ((VAR8->VAR12 - 1) / 2);
    return VAR8;
VAR15:
    FUN7(VAR8->VAR13);
    FUN7(VAR8);
    return NULL;
}