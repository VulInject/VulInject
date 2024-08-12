static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5->VAR6;
    VAR7 *VAR8 = FUN2(VAR2, VAR9, VAR4->VAR10, VAR4->VAR11);
    VAR7 *VAR12;
    int VAR13;
    VAR8->VAR14->VAR15 = (VAR16){1, 1};
    VAR8->VAR17 = VAR4->VAR17++;
    VAR8->VAR18 = -1;
    VAR12 = FUN3(VAR8, ~0);
    if (!VAR12)
    {
        VAR13 = FUN4(VAR19);
        goto VAR20;
    }
    VAR13 = FUN5(VAR2, VAR12);
    if (VAR13 < 0)
        goto VAR20;
    FUN6(VAR8->VAR21, VAR8->VAR22, VAR4->VAR23, VAR4->VAR24, VAR4->VAR25, VAR4->VAR26, 0, 0, VAR4->VAR10, VAR4->VAR11);
    VAR13 = FUN7(VAR2, 0, VAR4->VAR11, 1);
    if (VAR13 < 0)
        goto VAR20;
    VAR13 = FUN8(VAR2);
VAR20:
    FUN9(VAR8);
    return VAR13;
}