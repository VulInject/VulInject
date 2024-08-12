FUN1(VAR1 *VAR2, struct VAR3 *VAR4)
{
    int VAR5 = VAR4->VAR5;
    int VAR6 = VAR4->VAR6;
    int VAR7 = VAR4->VAR7;
    int VAR8 = VAR4->VAR8;
    VAR9 *VAR10 = VAR4->VAR10;
    VAR11 *VAR12;
    int VAR13, VAR14;
    int VAR15, VAR16;
    int VAR17, VAR18;
    int VAR19, VAR20;
    VAR12 = FUN2(VAR10);
    VAR13 = VAR12->VAR13 - VAR12->VAR21;
    VAR14 = VAR12->VAR14 - VAR12->VAR22;
    VAR17 = FUN3((VAR14 + VAR12->VAR8), (VAR8 + VAR6));
    VAR18 = FUN3((VAR13 + VAR12->VAR7), (VAR7 + VAR5));
    for (VAR15 = FUN4(VAR14, VAR6); VAR15 < VAR17; VAR15++)
    {
        for (VAR16 = FUN4(VAR13, VAR5); VAR16 < VAR18; VAR16++)
        {
            VAR20 = (VAR15 - VAR14) * VAR12->VAR7 + VAR16 - VAR13;
            if ((unsigned char)(VAR12->VAR23[VAR20] >> 24) != 0)
            {
                VAR19 = ((VAR15 - VAR6) * VAR7 + VAR16 - VAR5) * 4;
                VAR2->VAR24[VAR19] = (unsigned char)(VAR12->VAR23[VAR20] >> 0);
                VAR2->VAR24[VAR19 + 1] = (unsigned char)(VAR12->VAR23[VAR20] >> 8);
                VAR2->VAR24[VAR19 + 2] = (unsigned char)(VAR12->VAR23[VAR20] >> 16);
            }
        }
    }
    FUN5(VAR12);
    VAR12 = NULL;
}