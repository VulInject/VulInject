static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, int VAR6)
{
    int VAR7 = VAR2->VAR8 == 10;
    int VAR9 = VAR4->VAR10[0];
    int VAR11 = VAR4->VAR10[1];
    VAR12 *VAR13, *VAR14, *VAR15;
    int VAR16, VAR17;
    int VAR18, VAR19;
    VAR18 = FUN2(&VAR2->VAR20, 11);
    FUN3(&VAR2->VAR20);
    if (VAR18 != VAR2->VAR21)
    {
        for (VAR19 = 0; VAR19 < 64; VAR19++)
        {
            VAR2->VAR22[VAR19] = VAR18 * VAR2->VAR23->VAR24[VAR19];
            VAR2->VAR25[VAR19] = VAR18 * VAR2->VAR23->VAR26[VAR19];
        }
        VAR2->VAR21 = VAR18;
    }
    for (VAR19 = 0; VAR19 < 8; VAR19++)
    {
        VAR2->VAR27.FUN4(VAR2->VAR28[VAR19]);
        VAR2->FUN5(VAR2, VAR2->VAR28[VAR19], VAR19, VAR18);
    }
    if (VAR2->VAR29)
    {
        for (; VAR19 < 12; VAR19++)
        {
            VAR2->VAR27.FUN4(VAR2->VAR28[VAR19]);
            VAR2->FUN5(VAR2, VAR2->VAR28[VAR19], VAR19, VAR18);
        }
    }
    if (VAR4->VAR30)
    {
        VAR9 <<= 1;
        VAR11 <<= 1;
    }
    VAR13 = VAR4->VAR31[0] + ((VAR6 * VAR9) << 4) + (VAR5 << (4 + VAR7));
    VAR14 = VAR4->VAR31[1] + ((VAR6 * VAR11) << 4) + (VAR5 << (3 + VAR7 + VAR2->VAR29));
    VAR15 = VAR4->VAR31[2] + ((VAR6 * VAR11) << 4) + (VAR5 << (3 + VAR7 + VAR2->VAR29));
    if (VAR4->VAR30 && VAR2->VAR32)
    {
        VAR13 += VAR4->VAR10[0];
        VAR14 += VAR4->VAR10[1];
        VAR15 += VAR4->VAR10[2];
    }
    VAR16 = VAR9 << 3;
    VAR17 = 8 << VAR7;
    if (!VAR2->VAR29)
    {
        VAR2->VAR33.FUN6(VAR13, VAR9, VAR2->VAR28[0]);
        VAR2->VAR33.FUN6(VAR13 + VAR17, VAR9, VAR2->VAR28[1]);
        VAR2->VAR33.FUN6(VAR13 + VAR16, VAR9, VAR2->VAR28[4]);
        VAR2->VAR33.FUN6(VAR13 + VAR16 + VAR17, VAR9, VAR2->VAR28[5]);
        if (!(VAR2->VAR34->VAR35 & VAR36))
        {
            VAR16 = VAR11 << 3;
            VAR2->VAR33.FUN6(VAR14, VAR11, VAR2->VAR28[2]);
            VAR2->VAR33.FUN6(VAR15, VAR11, VAR2->VAR28[3]);
            VAR2->VAR33.FUN6(VAR14 + VAR16, VAR11, VAR2->VAR28[6]);
            VAR2->VAR33.FUN6(VAR15 + VAR16, VAR11, VAR2->VAR28[7]);
        }
    }
    else
    {
        VAR2->VAR33.FUN6(VAR13, VAR9, VAR2->VAR28[0]);
        VAR2->VAR33.FUN6(VAR13 + VAR17, VAR9, VAR2->VAR28[1]);
        VAR2->VAR33.FUN6(VAR13 + VAR16, VAR9, VAR2->VAR28[6]);
        VAR2->VAR33.FUN6(VAR13 + VAR16 + VAR17, VAR9, VAR2->VAR28[7]);
        if (!(VAR2->VAR34->VAR35 & VAR36))
        {
            VAR16 = VAR11 << 3;
            VAR2->VAR33.FUN6(VAR14, VAR11, VAR2->VAR28[2]);
            VAR2->VAR33.FUN6(VAR14 + VAR17, VAR11, VAR2->VAR28[3]);
            VAR2->VAR33.FUN6(VAR14 + VAR16, VAR11, VAR2->VAR28[8]);
            VAR2->VAR33.FUN6(VAR14 + VAR16 + VAR17, VAR11, VAR2->VAR28[9]);
            VAR2->VAR33.FUN6(VAR15, VAR11, VAR2->VAR28[4]);
            VAR2->VAR33.FUN6(VAR15 + VAR17, VAR11, VAR2->VAR28[5]);
            VAR2->VAR33.FUN6(VAR15 + VAR16, VAR11, VAR2->VAR28[10]);
            VAR2->VAR33.FUN6(VAR15 + VAR16 + VAR17, VAR11, VAR2->VAR28[11]);
        }
    }
    return 0;
}