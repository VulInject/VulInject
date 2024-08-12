static int FUN1(VAR1 *VAR2, void *VAR3)
{
    VAR4 *VAR5 = VAR3;
    VAR6 *VAR7 = VAR5->VAR8;
    const int VAR9 = VAR5->VAR10;
    const int VAR11 = VAR5->VAR12;
    int VAR13[2], VAR14[2], VAR15 = VAR7->VAR16, VAR17 = VAR7->VAR16 / 3;
    const int64_t VAR18 = VAR5->VAR19;
    const double VAR20 = VAR7->VAR21;
    const double VAR22 = VAR18 - VAR18 * (VAR20 / 100.0f);
    int VAR23 = FUN2(VAR7, VAR9, VAR11, VAR15);
    VAR17 -= VAR17 & 1;
    while ((VAR23 > VAR18) || (VAR23 < VAR22))
    {
        VAR17 *= VAR23 > VAR18 ? +1 : -1;
        VAR15 = FUN3(VAR15 + VAR17, 0, VAR7->VAR24);
        VAR23 = FUN2(VAR7, VAR9, VAR11, VAR15);
        VAR17 = FUN3(VAR17 / 2, 1, VAR7->VAR24);
        if (VAR13[1] == VAR15)
        {
            VAR15 = VAR14[0] < VAR23 ? VAR13[0] : VAR15;
            VAR23 = VAR14[0] < VAR23 ? VAR14[0] : VAR23;
            break;
        }
        VAR13[1] = VAR13[0];
        VAR13[0] = VAR15;
        VAR14[1] = VAR14[0];
        VAR14[0] = VAR23;
    }
    VAR5->VAR25 = FUN3(VAR15, 0, VAR7->VAR24);
    VAR5->VAR26 = FUN4((VAR23 >> 3), VAR7->VAR27) + 4 + VAR7->VAR28;
    return 0;
}