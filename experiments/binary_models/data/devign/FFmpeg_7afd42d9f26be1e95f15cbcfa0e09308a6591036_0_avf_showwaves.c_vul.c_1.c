static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    VAR1 *VAR8 = VAR6->VAR9[0];
    VAR10 *VAR11 = VAR6->VAR12;
    const int VAR13 = VAR4->VAR14->VAR13;
    VAR3 *VAR15 = VAR11->VAR15;
    int VAR16 = VAR15 ? VAR15->VAR16[0] : 0;
    VAR17 *VAR18 = (VAR17 *)VAR4->VAR19[0];
    int VAR20 = FUN2(VAR4->VAR14->VAR21);
    int VAR22, VAR23, VAR24;
    const int VAR25 = VAR11->VAR25;
    const int VAR26 = 255 / (VAR20 * VAR25);
    for (VAR22 = 0; VAR22 < VAR13; VAR22++)
    {
        if (VAR11->VAR27 == 0 && VAR11->VAR28 == 0)
        {
            VAR11->VAR15 = VAR15 = FUN3(VAR8, VAR29 | VAR30, VAR8->VAR31, VAR8->VAR24);
            VAR15->VAR32->VAR31 = VAR8->VAR31;
            VAR15->VAR32->VAR24 = VAR8->VAR24;
            VAR15->VAR33 = VAR4->VAR33 + FUN4((VAR18 - (VAR17 *)VAR4->VAR19[0]) / VAR20, (VAR34){1, VAR2->VAR35}, VAR8->VAR36);
            VAR8->VAR37 = VAR15;
            VAR16 = VAR15->VAR16[0];
            memset(VAR15->VAR19[0], 0, VAR11->VAR24 * VAR16);
        }
        for (VAR23 = 0; VAR23 < VAR20; VAR23++)
        {
            VAR24 = VAR11->VAR24 / 2 - FUN5(*VAR18++, VAR11->VAR24 / 2, VAR38);
            if (VAR24 >= 0 && VAR24 < VAR8->VAR24)
                *(VAR15->VAR19[0] + VAR11->VAR27 + VAR24 * VAR16) += VAR26;
        }
        VAR11->VAR28++;
        if (VAR11->VAR28 == VAR25)
        {
            VAR11->VAR28 = 0;
            VAR11->VAR27++;
        }
        if (VAR11->VAR27 == VAR11->VAR31)
            FUN6(VAR8);
    }
    FUN7(VAR4);
    return 0;
}