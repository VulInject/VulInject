static void FUN1(VAR1 *VAR2, int VAR3)
{
    VAR4 *VAR5 = &VAR2->VAR5[VAR3];
    VAR6 *VAR7 = VAR5->VAR8.VAR9;
    VAR6 *new;
    hwaddr VAR10, VAR11;
    int VAR12;
    int64_t VAR13;
    VAR12 = FUN2(VAR5->VAR2, VAR14) ? 2 : 0;
    VAR10 = VAR5->VAR8.VAR15;
    if (!VAR10)
    {
        return;
    }
    new = FUN3(VAR6, 1);
    VAR11 = FUN4(VAR2, VAR3);
    VAR13 = FUN5(&new->VAR15, VAR2->VAR16, VAR10, VAR11, false);
    if (VAR13 < VAR11)
    {
        FUN6(VAR2, "");
        goto VAR17;
    }
    VAR11 = FUN7(VAR2, VAR3) + VAR12;
    VAR13 = FUN5(&new->VAR18, VAR2->VAR16, VAR5->VAR8.VAR18, VAR11, true);
    if (VAR13 < VAR11)
    {
        FUN6(VAR2, "");
        goto VAR19;
    }
    VAR11 = FUN8(VAR2, VAR3) + VAR12;
    VAR13 = FUN5(&new->VAR20, VAR2->VAR16, VAR5->VAR8.VAR20, VAR11, false);
    if (VAR13 < VAR11)
    {
        FUN6(VAR2, "");
        goto VAR21;
    }
    FUN9(&VAR5->VAR8.VAR9, new);
    if (VAR7)
    {
        FUN10(VAR7, VAR22, VAR23);
    }
    return;
VAR21:
    FUN11(&new->VAR18);
VAR19:
    FUN11(&new->VAR15);
VAR17:
    FUN12(new);
}