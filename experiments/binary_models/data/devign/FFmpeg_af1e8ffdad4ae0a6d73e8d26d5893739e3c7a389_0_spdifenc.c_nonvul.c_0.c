static int FUN1(struct VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    int VAR8, VAR9;
    VAR6->VAR10 = VAR4->VAR11;
    VAR6->VAR12 = VAR4->VAR13;
    VAR6->VAR14 = FUN2(VAR4->VAR13, 2) << 3;
    VAR6->VAR15 = 1;
    VAR6->VAR16 = 0;
    VAR8 = VAR6->FUN3(VAR2, VAR4);
    if (VAR8 < 0)
        return VAR8;
    if (!VAR6->VAR17)
        return 0;
    VAR9 = (VAR6->VAR17 - VAR6->VAR15 * VAR18 - VAR6->VAR12) & ~1;
    if (VAR9 < 0)
    {
        FUN4(VAR2, VAR19, "");
        return FUN5(VAR20);
    }
    if (VAR6->VAR15)
    {
        FUN6(VAR6, VAR2->VAR21, VAR22);
        FUN6(VAR6, VAR2->VAR21, VAR23);
        FUN6(VAR6, VAR2->VAR21, VAR6->VAR24);
        FUN6(VAR6, VAR2->VAR21, VAR6->VAR14);
    }
    if (VAR6->VAR16 ^ (VAR6->VAR25 & VAR26))
    {
        FUN7(VAR2->VAR21, VAR6->VAR10, VAR6->VAR12 & ~1);
    }
    else
    {
        FUN8(&VAR6->VAR27, &VAR6->VAR28, VAR6->VAR12 + VAR29);
        if (!VAR6->VAR27)
            return FUN5(VAR30);
        FUN9((VAR31 *)VAR6->VAR27, (VAR31 *)VAR6->VAR10, VAR6->VAR12 >> 1);
        FUN7(VAR2->VAR21, VAR6->VAR27, VAR6->VAR12 & ~1);
    }
    if (VAR6->VAR12 & 1)
        FUN6(VAR6, VAR2->VAR21, VAR6->VAR10[VAR6->VAR12 - 1] << 8);
    FUN10(VAR2->VAR21, 0, VAR9);
    FUN4(VAR2, VAR32, "", VAR6->VAR24, VAR6->VAR12, VAR6->VAR17);
    FUN11(VAR2->VAR21);
    return 0;
}