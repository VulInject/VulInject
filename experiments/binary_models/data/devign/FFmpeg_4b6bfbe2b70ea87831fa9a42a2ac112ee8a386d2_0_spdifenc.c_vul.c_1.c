static int FUN1(struct VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    int VAR8, VAR9;
    VAR6->VAR10 = VAR4->VAR11;
    VAR6->VAR12 = FUN2(VAR4->VAR11, 2) << 3;
    VAR8 = VAR6->FUN3(VAR2, VAR4);
    if (VAR8 < 0)
        return -1;
    if (!VAR6->VAR13)
        return 0;
    VAR9 = (VAR6->VAR13 - VAR14 - VAR6->VAR10) >> 1;
    if (VAR9 < 0)
    {
        FUN4(VAR2, VAR15, "");
        return -1;
    }
    FUN5(VAR2->VAR16, VAR17);
    FUN5(VAR2->VAR16, VAR18);
    FUN5(VAR2->VAR16, VAR6->VAR19);
    FUN5(VAR2->VAR16, VAR6->VAR12);
    FUN6(VAR2->VAR16, VAR6->VAR20, VAR6->VAR10 & ~1);
    FUN7(&VAR6->VAR21, &VAR6->VAR22, VAR6->VAR10 + VAR23);
    if (!VAR6->VAR21)
        return FUN8(VAR24);
    FUN9((VAR25 *)VAR6->VAR21, (VAR25 *)VAR6->VAR20, VAR6->VAR10 >> 1);
    FUN6(VAR2->VAR16, VAR6->VAR21, VAR6->VAR10 & ~1);
    if (VAR6->VAR10 & 1)
        FUN10(VAR2->VAR16, VAR6->VAR20[VAR6->VAR10 - 1]);
    for (; VAR9 > 0; VAR9--)
        FUN10(VAR2->VAR16, 0);
    FUN4(VAR2, VAR26, "", VAR6->VAR19, VAR6->VAR10, VAR6->VAR13);
    FUN11(VAR2->VAR16);
    return 0;