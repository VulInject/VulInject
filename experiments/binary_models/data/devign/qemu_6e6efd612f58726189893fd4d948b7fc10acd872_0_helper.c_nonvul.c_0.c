void FUN1(VAR1 *VAR2, const VAR3 *VAR4, void *VAR5)
{
    int VAR6, VAR7, VAR8;
    int VAR9 = (VAR4->VAR6 == VAR10) ? 0 : VAR4->VAR6;
    int VAR11 = (VAR4->VAR6 == VAR10) ? 15 : VAR4->VAR6;
    int VAR12 = (VAR4->VAR7 == VAR10) ? 0 : VAR4->VAR7;
    int VAR13 = (VAR4->VAR7 == VAR10) ? 7 : VAR4->VAR7;
    int VAR14 = (VAR4->VAR8 == VAR10) ? 0 : VAR4->VAR8;
    int VAR15 = (VAR4->VAR8 == VAR10) ? 7 : VAR4->VAR8;
    assert(!((VAR4->VAR16 & VAR17) && (VAR4->VAR8 || VAR4->VAR18)));
    if (!(VAR4->VAR16 & (VAR19 | VAR20)))
    {
        if (VAR4->VAR21 & VAR22)
        {
            assert(VAR4->VAR23 || VAR4->VAR24);
        }
        if (VAR4->VAR21 & VAR25)
        {
            assert(VAR4->VAR23 || VAR4->VAR26);
        }
    }
    assert(FUN2(VAR4->VAR16));
    for (VAR6 = VAR9; VAR6 <= VAR11; VAR6++)
    {
        for (VAR7 = VAR12; VAR7 <= VAR13; VAR7++)
        {
            for (VAR8 = VAR14; VAR8 <= VAR15; VAR8++)
            {
                FUN3(VAR2, VAR4, VAR5, VAR6, VAR7, VAR8);
            }
        }
    }
}