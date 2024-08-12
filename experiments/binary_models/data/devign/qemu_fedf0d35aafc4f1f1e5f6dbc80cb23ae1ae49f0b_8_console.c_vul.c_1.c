static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4, *VAR5, *VAR6;
    int VAR7, VAR8, VAR9, VAR10;
    VAR10 = VAR2->VAR11;
    VAR2->VAR11 = FUN2(VAR2->VAR12) / VAR13;
    VAR2->VAR14 = FUN3(VAR2->VAR12) / VAR15;
    VAR7 = VAR10;
    if (VAR2->VAR11 < VAR7)
        VAR7 = VAR2->VAR11;
    VAR4 = FUN4(VAR2->VAR11 * VAR2->VAR16 * sizeof(VAR3));
    for (VAR9 = 0; VAR9 < VAR2->VAR16; VAR9++)
    {
        VAR5 = &VAR4[VAR9 * VAR2->VAR11];
        if (VAR7 > 0)
        {
            VAR6 = &VAR2->VAR4[VAR9 * VAR10];
            for (VAR8 = 0; VAR8 < VAR7; VAR8++)
            {
                *VAR5++ = *VAR6++;
            }
        }
        for (VAR8 = VAR7; VAR8 < VAR2->VAR11; VAR8++)
        {
            VAR5->VAR17 = '';
            VAR5->VAR18 = VAR2->VAR19;
            VAR5++;
        }
    }
    FUN5(VAR2->VAR4);
    VAR2->VAR4 = VAR4;
}