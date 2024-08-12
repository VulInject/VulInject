static int FUN1(VAR1 *VAR2, VAR3 *VAR4, MOVAtom VAR5)
{
    int VAR6;
    int VAR7;
    int VAR8;
    int VAR9[3][3];
    VAR10 *VAR11;
    VAR12 *VAR13;
    int VAR14;
    int VAR15;
    if (VAR2->VAR16->VAR17 < 1)
        return 0;
    VAR11 = VAR2->VAR16->VAR18[VAR2->VAR16->VAR17 - 1];
    VAR13 = VAR11->VAR19;
    VAR14 = FUN2(VAR4);
    VAR15 = FUN3(VAR4);
    VAR11->VAR20 |= (VAR15 & VAR21) ? VAR22 : 0;
    if (VAR14 == 1)
    {
        FUN4(VAR4);
        FUN4(VAR4);
    }
    else
    {
        FUN5(VAR4);
        FUN5(VAR4);
    }
    VAR11->VAR23 = (int)FUN5(VAR4);
    FUN5(VAR4);
    (VAR14 == 1) ? FUN4(VAR4) : FUN5(VAR4);
    FUN5(VAR4);
    FUN5(VAR4);
    FUN6(VAR4);
    FUN6(VAR4);
    FUN6(VAR4);
    FUN6(VAR4);
    for (VAR6 = 0; VAR6 < 3; VAR6++)
    {
        VAR9[VAR6][0] = FUN5(VAR4);
        VAR9[VAR6][1] = FUN5(VAR4);
        VAR9[VAR6][2] = FUN5(VAR4);
    }
    VAR7 = FUN5(VAR4);
    VAR8 = FUN5(VAR4);
    VAR13->VAR7 = VAR7 >> 16;
    VAR13->VAR8 = VAR8 >> 16;
    if (VAR9[0][0] != (1 << 16) || VAR9[1][1] != (1 << 16) || VAR9[2][2] != (1 << 30) || VAR9[0][1] || VAR9[0][2] || VAR9[1][0] || VAR9[1][2] || VAR9[2][0] || VAR9[2][1])
    {
        int VAR6, VAR24;
        double VAR25;
        FUN7(&VAR13->VAR9);
        VAR13->VAR9 = FUN8(sizeof(VAR26) * 9);
        if (!VAR13->VAR9)
            return FUN9(VAR27);
        for (VAR6 = 0; VAR6 < 3; VAR6++)
            for (VAR24 = 0; VAR24 < 3; VAR24++)
                VAR13->VAR9[VAR6 * 3 + VAR24] = VAR9[VAR24][VAR6];
        VAR25 = FUN10(VAR13->VAR9);
        if (!FUN11(VAR25))
        {
            char VAR28[64];
            VAR25 = -VAR25;
            if (VAR25 < 0)
                VAR25 += 360;
            snprintf(VAR28, sizeof(VAR28), "", VAR25);
            FUN12(&VAR11->VAR29, "", VAR28, 0);
        }
    }
    if (VAR7 && VAR8 && VAR13->VAR9)
    {
        double VAR30[2];
        for (VAR6 = 0; VAR6 < 2; VAR6++)
            VAR30[VAR6] = FUN13(FUN14(VAR9[VAR6][0]) + FUN14(VAR9[VAR6][1]));
        if (VAR30[0] > 0 && VAR30[1] > 0 && FUN15((VAR30[0] / VAR30[1]) - 1.0) > 0.01)
            VAR11->VAR31 = FUN16(VAR30[0] / VAR30[1], VAR32);
    }
    return 0;
}