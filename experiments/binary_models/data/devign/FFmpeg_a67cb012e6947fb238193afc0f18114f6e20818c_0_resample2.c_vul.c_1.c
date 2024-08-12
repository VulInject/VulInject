VAR1 *FUN1(VAR1 *VAR2, int VAR3, int VAR4, int VAR5, int VAR6, int VAR7, double VAR8)
{
    double VAR9 = FUN2(VAR3 * VAR8 / VAR4, 1.0);
    int VAR10 = 1 << VAR6;
    if (!VAR2 || VAR2->VAR6 != VAR6 || VAR2->VAR7 != VAR7 || VAR2->VAR9 != VAR9 || VAR2->VAR11 != FUN3((int)FUN4(VAR5 / VAR9), 1))
    {
        VAR2 = FUN5(sizeof(VAR1));
        if (!VAR2)
            return NULL;
        VAR2->VAR6 = VAR6;
        VAR2->VAR12 = VAR10 - 1;
        VAR2->VAR7 = VAR7;
        VAR2->VAR9 = VAR9;
        VAR2->VAR11 = FUN3((int)FUN4(VAR5 / VAR9), 1);
        VAR2->VAR13 = FUN5(VAR2->VAR11 * (VAR10 + 1) * sizeof(VAR14));
        if (!VAR2->VAR13)
            goto VAR15;
        if (FUN6(VAR2->VAR13, VAR9, VAR2->VAR11, VAR10, 1 << VAR16, VAR17))
            goto VAR15;
        memcpy(&VAR2->VAR13[VAR2->VAR11 * VAR10 + 1], VAR2->VAR13, (VAR2->VAR11 - 1) * sizeof(VAR14));
        VAR2->VAR13[VAR2->VAR11 * VAR10] = VAR2->VAR13[VAR2->VAR11 - 1];
    }
    VAR2->VAR18 = 0;
    VAR2->VAR19 = VAR3;
    VAR2->VAR20 = VAR2->VAR21 = VAR4 * VAR10;
    VAR2->VAR22 = -VAR10 * ((VAR2->VAR11 - 1) / 2);
    VAR2->VAR23 = 0;
    return VAR2;
VAR15:
    FUN7(VAR2->VAR13);
    FUN7(VAR2);
    return NULL;
}