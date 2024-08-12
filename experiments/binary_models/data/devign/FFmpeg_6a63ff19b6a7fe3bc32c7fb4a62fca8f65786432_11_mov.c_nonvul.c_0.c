static int FUN1(VAR1 *VAR2, VAR3 *VAR4, MOVAtom VAR5)
{
    int VAR6;
    int VAR7;
    int VAR8;
    int64_t VAR9[2];
    int VAR10[3][2];
    VAR11 *VAR12;
    VAR13 *VAR14;
    int VAR15;
    if (VAR2->VAR16->VAR17 < 1)
        return 0;
    VAR12 = VAR2->VAR16->VAR18[VAR2->VAR16->VAR17 - 1];
    VAR14 = VAR12->VAR19;
    VAR15 = FUN2(VAR4);
    FUN3(VAR4);
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
    VAR12->VAR20 = (int)FUN5(VAR4);
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
        FUN5(VAR4);
    }
    VAR7 = FUN5(VAR4);
    VAR8 = FUN5(VAR4);
    VAR14->VAR7 = VAR7 >> 16;
    VAR14->VAR8 = VAR8 >> 16;
    if (VAR7 && VAR8 && (VAR10[0][0] != 65536 || VAR10[0][1] || VAR10[1][0] || VAR10[1][1] != 65536 || VAR10[2][0] || VAR10[2][1]))
    {
        for (VAR6 = 0; VAR6 < 2; VAR6++)
            VAR9[VAR6] = (VAR21)VAR7 * VAR10[0][VAR6] + (VAR21)VAR8 * VAR10[1][VAR6] + ((VAR21)VAR10[2][VAR6] << 16);
        VAR12->VAR22 = FUN7(((double)VAR9[0] * VAR8) / ((double)VAR9[1] * VAR7), VAR23);
    }
    return 0;
}