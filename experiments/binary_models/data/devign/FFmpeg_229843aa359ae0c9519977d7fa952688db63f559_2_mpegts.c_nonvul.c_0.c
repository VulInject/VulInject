static int FUN1(VAR1 *VAR2)
{
    const int VAR3 = VAR2->VAR4;
    int VAR5 = 0;
    int VAR6 = 0;
    int VAR7;
    int VAR8 = VAR3 / VAR9;
    if (VAR8 < VAR10)
        return 0;
    for (VAR7 = 0; VAR7 < VAR8; VAR7 += VAR11)
    {
        int VAR12 = FUN2(VAR8 - VAR7, VAR11);
        int VAR13 = FUN3(VAR2->VAR14 + VAR15 * VAR7, VAR15 * VAR12, VAR15, NULL, 1);
        int VAR16 = FUN3(VAR2->VAR14 + VAR17 * VAR7, VAR17 * VAR12, VAR17, NULL, 1);
        int VAR18 = FUN3(VAR2->VAR14 + VAR9 * VAR7, VAR9 * VAR12, VAR9, NULL, 1);
        VAR13 = FUN4(VAR13, VAR16, VAR18);
        VAR6 += VAR13;
        VAR5 = FUN5(VAR5, VAR13);
    }
    VAR6 = VAR6 * VAR10 / VAR8;
    VAR5 = VAR5 * VAR10 / VAR11;
    FUN6(0, "", VAR6, VAR5);
    if (VAR6 > 6)
        return VAR19 + VAR6 - VAR10;
    else if (VAR5 > 6)
        return VAR19 / 2 + VAR6 - VAR10;
    else
        return 0;
}