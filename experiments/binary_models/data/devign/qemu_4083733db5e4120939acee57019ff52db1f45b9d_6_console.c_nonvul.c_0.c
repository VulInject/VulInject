static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR2);
    VAR5 *VAR6;
    int VAR7, VAR8, VAR9;
    if (VAR2->VAR10->VAR11)
    {
        VAR2->VAR12[0] = 0;
        VAR2->VAR13[0] = 0;
        VAR2->VAR12[1] = VAR2->VAR14 - 1;
        VAR2->VAR13[1] = VAR2->VAR15 - 1;
        VAR2->VAR16 = 1;
    }
    FUN3(VAR2, 0, 0, FUN4(VAR4), FUN5(VAR4), VAR17[0][VAR18]);
    VAR9 = VAR2->VAR19;
    for (VAR8 = 0; VAR8 < VAR2->VAR15; VAR8++)
    {
        VAR6 = VAR2->VAR20 + VAR9 * VAR2->VAR14;
        for (VAR7 = 0; VAR7 < VAR2->VAR14; VAR7++)
        {
            FUN6(VAR2, VAR7, VAR8, VAR6->VAR21, &(VAR6->VAR22));
            VAR6++;
        }
        if (++VAR9 == VAR2->VAR23)
        {
            VAR9 = 0;
        }
    }
    FUN7(VAR2, 1);
    FUN8(VAR2, 0, 0, FUN4(VAR4), FUN5(VAR4));
}