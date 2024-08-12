static int FUN1(VAR1 *VAR2, const VAR3 *VAR4, int VAR5, int VAR6)
{
    VAR3 *VAR7;
    VAR8 *VAR9 = VAR2->VAR10;
    VAR11 *VAR12 = VAR2->VAR12;
    VAR13 *VAR14 = VAR9->VAR15;
    int VAR16;
    VAR7 = FUN2(VAR5 * sizeof(VAR3));
    FUN3(VAR2, VAR14, VAR5, !!(VAR6 & VAR17));
    if (VAR14->VAR18->VAR19 == VAR20)
    {
        for (VAR16 = 0; VAR16 < VAR5; VAR16 += 2)
        {
            VAR7[VAR16] = VAR4[VAR16 + 1];
            VAR7[VAR16 + 1] = VAR4[VAR16];
        }
        FUN4(VAR12, VAR7, VAR5);
    }
    else
    {
        FUN4(VAR12, VAR4, VAR5);
    }
    VAR14->VAR21++;
    FUN5(VAR7);
    return 0;