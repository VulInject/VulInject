static void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7->VAR6;
    VAR1 *VAR8 = VAR2->VAR7->VAR9[0];
    VAR3 *VAR10;
    int VAR11;
    VAR8->VAR12 = FUN2(VAR8, VAR13, VAR8->VAR14, VAR8->VAR15);
    VAR10 = VAR8->VAR12;
    FUN3(VAR10, VAR4);
    for (VAR11 = 0; VAR11 < 4; VAR11++)
    {
        int VAR15 = VAR8->VAR15;
        VAR15 = VAR11 == 1 || VAR11 == 2 ? VAR15 >> VAR6->VAR16->VAR17 : VAR15;
        if (VAR10->VAR18[VAR11])
        {
            VAR19 *VAR18 = VAR10->VAR18[VAR11] + (VAR10->VAR20[VAR11] > 0 ? 0 : VAR10->VAR20[VAR11] * (VAR15 - 1));
            memset(VAR18, 0, FUN4(VAR10->VAR20[VAR11]) * VAR15);
        }
    }
    if (VAR6->VAR16->VAR21 & VAR22)
        memcpy(VAR10->VAR18[1], VAR10->VAR18[1], 256 * 4);
    FUN5(VAR8, FUN6(VAR10, ~0));
}