static int FUN1(const VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, int VAR7, int VAR8)
{
    int VAR9 = VAR2->VAR10 >= 10;
    int VAR11 = VAR6->VAR12[0];
    int VAR13 = VAR6->VAR12[1];
    VAR14 *VAR15, *VAR16, *VAR17;
    int VAR18, VAR19;
    int VAR20, VAR21, VAR22;
    int VAR23 = 0;
    if (VAR2->VAR24)
    {
        VAR23 = FUN2(&VAR4->VAR25);
        VAR20 = FUN3(&VAR4->VAR25, 10);
    }
    else
    {
        VAR20 = FUN3(&VAR4->VAR25, 11);
    }
    VAR22 = FUN2(&VAR4->VAR25);
    if (VAR22)
    {
        if (!VAR2->VAR22)
        {
            static int VAR26;
            if (!VAR26)
            {
                VAR26 = 1;
                FUN4(VAR2->VAR27, VAR28, "");
            }
        }
        else if (VAR4->VAR29 == -1)
        {
            VAR4->VAR29 = VAR22;
        }
        else if (VAR4->VAR29 != VAR22)
        {
            VAR4->VAR29 = 2;
        }
    }
    if (VAR20 != VAR4->VAR30)
    {
        for (VAR21 = 0; VAR21 < 64; VAR21++)
        {
            VAR4->VAR31[VAR21] = VAR20 * VAR2->VAR32->VAR33[VAR21];
            VAR4->VAR34[VAR21] = VAR20 * VAR2->VAR32->VAR35[VAR21];
        }
        VAR4->VAR30 = VAR20;
    }
    for (VAR21 = 0; VAR21 < 8 + 4 * VAR2->VAR36; VAR21++)
    {
        if (VAR2->FUN5(VAR2, VAR4, VAR21) < 0)
            return VAR37;
    }
    if (VAR6->VAR38)
    {
        VAR11 <<= 1;
        VAR13 <<= 1;
    }
    VAR15 = VAR6->VAR39[0] + ((VAR8 * VAR11) << 4) + (VAR7 << (4 + VAR9));
    VAR16 = VAR6->VAR39[1] + ((VAR8 * VAR13) << 4) + (VAR7 << (3 + VAR9 + VAR2->VAR36));
    VAR17 = VAR6->VAR39[2] + ((VAR8 * VAR13) << 4) + (VAR7 << (3 + VAR9 + VAR2->VAR36));
    if (VAR6->VAR38 && VAR2->VAR40)
    {
        VAR15 += VAR6->VAR12[0];
        VAR16 += VAR6->VAR12[1];
        VAR17 += VAR6->VAR12[2];
    }
    if (VAR23)
    {
        VAR11 <<= 1;
        VAR13 <<= 1;
    }
    VAR18 = VAR23 ? VAR6->VAR12[0] : (VAR11 << 3);
    VAR19 = 8 << VAR9;
    if (!VAR2->VAR36)
    {
        VAR2->VAR41.FUN6(VAR15, VAR11, VAR4->VAR42[0]);
        VAR2->VAR41.FUN6(VAR15 + VAR19, VAR11, VAR4->VAR42[1]);
        VAR2->VAR41.FUN6(VAR15 + VAR18, VAR11, VAR4->VAR42[4]);
        VAR2->VAR41.FUN6(VAR15 + VAR18 + VAR19, VAR11, VAR4->VAR42[5]);
        if (!(VAR2->VAR27->VAR43 & VAR44))
        {
            VAR18 = VAR23 ? VAR6->VAR12[1] : (VAR13 << 3);
            VAR2->VAR41.FUN6(VAR16, VAR13, VAR4->VAR42[2]);
            VAR2->VAR41.FUN6(VAR17, VAR13, VAR4->VAR42[3]);
            VAR2->VAR41.FUN6(VAR16 + VAR18, VAR13, VAR4->VAR42[6]);
            VAR2->VAR41.FUN6(VAR17 + VAR18, VAR13, VAR4->VAR42[7]);
        }
    }
    else
    {
        VAR2->VAR41.FUN6(VAR15, VAR11, VAR4->VAR42[0]);
        VAR2->VAR41.FUN6(VAR15 + VAR19, VAR11, VAR4->VAR42[1]);
        VAR2->VAR41.FUN6(VAR15 + VAR18, VAR11, VAR4->VAR42[6]);
        VAR2->VAR41.FUN6(VAR15 + VAR18 + VAR19, VAR11, VAR4->VAR42[7]);
        if (!(VAR2->VAR27->VAR43 & VAR44))
        {
            VAR18 = VAR23 ? VAR6->VAR12[1] : (VAR13 << 3);
            VAR2->VAR41.FUN6(VAR16, VAR13, VAR4->VAR42[2]);
            VAR2->VAR41.FUN6(VAR16 + VAR19, VAR13, VAR4->VAR42[3]);
            VAR2->VAR41.FUN6(VAR16 + VAR18, VAR13, VAR4->VAR42[8]);
            VAR2->VAR41.FUN6(VAR16 + VAR18 + VAR19, VAR13, VAR4->VAR42[9]);
            VAR2->VAR41.FUN6(VAR17, VAR13, VAR4->VAR42[4]);
            VAR2->VAR41.FUN6(VAR17 + VAR19, VAR13, VAR4->VAR42[5]);
            VAR2->VAR41.FUN6(VAR17 + VAR18, VAR13, VAR4->VAR42[10]);
            VAR2->VAR41.FUN6(VAR17 + VAR18 + VAR19, VAR13, VAR4->VAR42[11]);
        }
    }
    return 0;
}