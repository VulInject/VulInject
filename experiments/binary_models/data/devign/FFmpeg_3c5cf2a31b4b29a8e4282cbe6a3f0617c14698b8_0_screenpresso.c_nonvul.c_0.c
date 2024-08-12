static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    VAR7 *VAR8 = VAR2->VAR9;
    VAR10 *VAR11 = VAR3;
    uLongf VAR12 = VAR8->VAR13;
    int VAR14;
    int VAR15;
    if (VAR6->VAR16 < 3)
    {
        FUN2(VAR2, VAR17, "", VAR6->VAR16);
        return VAR18;
    }
    if ((VAR6->VAR3[0] != 0x73 && VAR6->VAR3[0] != 0x72) || VAR6->VAR3[1] != 8)
    {
        FUN2(VAR2, VAR19, "", VAR6->VAR3[0], VAR6->VAR3[1]);
    }
    VAR14 = (VAR6->VAR3[0] == 0x73);
    VAR15 = FUN3(VAR8->VAR20, &VAR12, VAR6->VAR3 + 2, VAR6->VAR16 - 2);
    if (VAR15)
    {
        FUN2(VAR2, VAR17, "", VAR15);
        return VAR21;
    }
    VAR15 = FUN4(VAR2, VAR8->VAR22);
    if (VAR15 < 0)
        return VAR15;
    if (VAR14)
        FUN5(VAR8->VAR22->VAR3[0] + VAR8->VAR22->VAR23[0] * (VAR2->VAR24 - 1), -1 * VAR8->VAR22->VAR23[0], VAR8->VAR20, VAR2->VAR25 * 3, VAR2->VAR25 * 3, VAR2->VAR24);
    else
        FUN6(VAR8->VAR22->VAR3[0], VAR8->VAR22->VAR23[0], VAR8->VAR20, VAR2->VAR25 * 3, VAR2->VAR25 * 3, VAR2->VAR24);
    VAR15 = FUN7(VAR11, VAR8->VAR22);
    if (VAR15 < 0)
        return VAR15;
    if (VAR14)
    {
        VAR11->VAR26 = VAR27;
        VAR11->VAR28 = 1;
    }
    else
    {
        VAR11->VAR26 = VAR29;
    }
    *VAR4 = 1;
    return 0;
}