static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = &VAR2->VAR5;
    int VAR6;
    memset(VAR2->VAR7, 0, 2 * VAR2->VAR8 * (VAR2->VAR9 + 1));
    memset(VAR2->VAR10, 0, 2 * VAR2->VAR8 * (VAR2->VAR9 + 1));
    memset(VAR2->VAR11, 0, VAR2->VAR12->VAR13 * VAR2->VAR12->VAR14);
    memset(VAR2->VAR15, 0, VAR2->VAR12->VAR16 * VAR2->VAR12->VAR17);
    VAR4->VAR18 = 0;
    VAR2->VAR19 = 0;
    if (VAR2->VAR20->VAR21)
        VAR4->VAR22 = VAR2->VAR20->VAR23[0] << VAR2->VAR12->VAR24;
    VAR6 = FUN2(VAR2, VAR2->VAR12->VAR25 ? &VAR2->VAR26 : &VAR2->VAR27, VAR2->VAR28);
    if (VAR6 < 0)
        goto VAR29;
    VAR6 = FUN3(VAR2);
    if (VAR6 < 0)
    {
        FUN4(VAR2->VAR30, VAR31, "");
        goto VAR29;
    }
    VAR6 = FUN5(VAR2);
    if (VAR6 < 0)
        goto VAR29;
    FUN6(VAR2->VAR32);
    VAR6 = FUN7(VAR2, VAR2->VAR32, 0);
    if (VAR6 < 0)
        goto VAR29;
    FUN8(VAR2->VAR30);
    return 0;
VAR29:
    if (VAR2->VAR33)
        FUN9(&VAR2->VAR33->VAR34, VAR35, 0);
    VAR2->VAR33 = NULL;
    return VAR6;