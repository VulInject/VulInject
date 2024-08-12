static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    int VAR6, VAR7, VAR8[3];
    VAR9 *VAR10, *VAR11 = VAR4->VAR12 + VAR4->VAR13 * VAR4->VAR14;
    enum
    {
        VAR15,
        VAR16,
        VAR17
    };
    VAR4->VAR18 = VAR4->VAR13;
    VAR4->VAR13 = VAR4->VAR13 == VAR4->VAR19 - 1 ? 0 : VAR4->VAR13 + 1;
    VAR10 = VAR4->VAR12 + VAR4->VAR14 * VAR4->VAR13;
    for (VAR6 = 0; VAR6 < VAR4->VAR14; VAR6++)
    {
        if (VAR4->VAR20)
        {
            VAR8[VAR15] = VAR6 - 1 < 0 ? VAR4->VAR14 - 1 : VAR6 - 1;
            VAR8[VAR16] = VAR6;
            VAR8[VAR17] = VAR6 + 1 == VAR4->VAR14 ? 0 : VAR6 + 1;
            VAR7 = VAR11[VAR8[VAR15]] << 2 | VAR11[VAR8[VAR16]] << 1 | VAR11[VAR8[VAR17]];
        }
        else
        {
            VAR7 = 0;
            VAR7 |= VAR6 - 1 >= 0 ? VAR11[VAR6 - 1] << 2 : 0;
            VAR7 |= VAR11[VAR6] << 1;
            VAR7 |= VAR6 + 1 < VAR4->VAR14 ? VAR11[VAR6 + 1] : 0;
        }
        VAR10[VAR6] = !!(VAR4->VAR21 & (1 << VAR7));
        FUN2(VAR2, "", VAR6, VAR7 & 4 ? '' : '', VAR7 & 2 ? '' : '', VAR7 & 1 ? '' : '', VAR10[VAR6]);
    }
    VAR4->VAR22++;
}