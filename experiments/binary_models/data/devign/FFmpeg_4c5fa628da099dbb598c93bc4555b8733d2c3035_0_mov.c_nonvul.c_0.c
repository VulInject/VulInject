static int FUN1(VAR1 *VAR2, VAR3 *VAR4, MOVAtom VAR5)
{
    int VAR6;
    int VAR7;
    int VAR8;
    int64_t VAR9[2];
    int VAR10[3][3];
    VAR11 *VAR12;
    VAR13 *VAR14;
    int VAR15;
    int VAR16;
    if (VAR2->VAR17->VAR18 < 1)
        return 0;
    VAR12 = VAR2->VAR17->VAR19[VAR2->VAR17->VAR18 - 1];
    VAR14 = VAR12->VAR20;
    VAR15 = FUN2(VAR4);
    VAR16 = FUN3(VAR4);
    VAR12->VAR21 |= (VAR16 & VAR22) ? VAR23 : 0;
    if (VAR15 == 1)
    {
        FUN4(VAR4);
        FUN4(VAR4);
    }
    else
    {
        FUN5(VAR4);
        FUN5(VAR4);
    }
    VAR12->VAR24 = (int)FUN5(VAR4);
    FUN5(VAR4);
    (VAR15 == 1) ? FUN4(VAR4) : FUN5(VAR4);
    FUN5(VAR4);
    FUN5(VAR4);
    FUN6(VAR4);
    FUN6(VAR4);
    FUN6(VAR4);
    FUN6(VAR4);
    for (VAR6 = 0; VAR6 < 3; VAR6++)
    {
        VAR10[VAR6][0] = FUN5(VAR4);
        VAR10[VAR6][1] = FUN5(VAR4);
        VAR10[VAR6][2] = FUN5(VAR4);
    }
    VAR7 = FUN5(VAR4);
    VAR8 = FUN5(VAR4);
    VAR14->VAR7 = VAR7 >> 16;
    VAR14->VAR8 = VAR8 >> 16;
    if (VAR10[0][0] != (1 << 16) || VAR10[1][1] != (1 << 16) || VAR10[2][2] != (1 << 30) || VAR10[0][1] || VAR10[0][2] || VAR10[1][0] || VAR10[1][2] || VAR10[2][0] || VAR10[2][1])
    {
        int VAR6, VAR25;
        FUN7(&VAR14->VAR10);
        VAR14->VAR10 = FUN8(sizeof(VAR26) * 9);
        if (!VAR14->VAR10)
            return FUN9(VAR27);
        for (VAR6 = 0; VAR6 < 3; VAR6++)
            for (VAR25 = 0; VAR25 < 3; VAR25++)
                VAR14->VAR10[VAR6 * 3 + VAR25] = VAR10[VAR25][VAR6];
    }
    if (VAR7 && VAR8 && VAR14->VAR10)
    {
        for (VAR6 = 0; VAR6 < 2; VAR6++)
            VAR9[VAR6] = (VAR28)VAR7 * VAR10[0][VAR6] + (VAR28)VAR8 * VAR10[1][VAR6] + ((VAR28)VAR10[2][VAR6] << 16);
        if (VAR9[0] > 0 && VAR9[1] > 0)
            VAR12->VAR29 = FUN10(((double)VAR9[0] * VAR8) / ((double)VAR9[1] * VAR7), VAR30);
    }
    return 0;
}