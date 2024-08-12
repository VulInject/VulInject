static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR4;
    int VAR5, VAR6, VAR7;
    int64_t VAR8, VAR9 = 0;
    const VAR10 *VAR11;
    VAR12 *VAR13;
    SliceCoeffs VAR14[VAR15];
    int VAR16 = 0;
    if (VAR2->VAR17 != (VAR2->VAR18 * VAR2->VAR19))
    {
        VAR2->VAR20 = FUN2(VAR2->VAR20, VAR2->VAR18 * VAR2->VAR19, sizeof(VAR12));
        if (!VAR2->VAR20)
        {
            FUN3(VAR2->VAR4, VAR21, "");
            return FUN4(VAR22);
        }
        VAR2->VAR17 = VAR2->VAR18 * VAR2->VAR19;
    }
    VAR13 = VAR2->VAR20;
    VAR8 = FUN5(VAR2, VAR2->VAR18 - 1, VAR2->VAR19 - 1, 0, VAR14) + 8;
    VAR8 = (VAR8 << (1 + VAR2->VAR23)) + 512;
    if (VAR2->VAR24 != VAR4->VAR25 || VAR2->VAR26 != VAR8)
    {
        VAR2->VAR24 = VAR4->VAR25;
        VAR2->VAR26 = VAR8;
        VAR2->VAR27 = FUN2(VAR2->VAR27, VAR4->VAR25, VAR2->VAR26);
        if (!VAR2->VAR27)
        {
            FUN3(VAR2->VAR4, VAR21, "");
            return FUN4(VAR22);
        }
    }
    FUN6(&VAR2->VAR28);
    VAR11 = VAR2->VAR28.VAR29 + FUN7(&VAR2->VAR28) / 8;
    VAR7 = FUN8(&VAR2->VAR28);
    if (VAR2->VAR30)
    {
        int VAR31;
        for (VAR6 = 0; VAR7 > 0 && VAR6 < VAR2->VAR19; VAR6++)
        {
            for (VAR5 = 0; VAR7 > 0 && VAR5 < VAR2->VAR18; VAR5++)
            {
                VAR9 = VAR2->VAR32.VAR33 + 1;
                for (VAR31 = 0; VAR31 < 3; VAR31++)
                {
                    if (VAR9 <= VAR7 / 8)
                        VAR9 += VAR11[VAR9] * VAR2->VAR32.VAR34 + 1;
                }
                if (VAR9 >= VAR35 || VAR9 * 8 > VAR7)
                {
                    FUN3(VAR2->VAR4, VAR21, "");
                    return VAR36;
                }
                VAR13[VAR16].VAR9 = VAR9;
                VAR13[VAR16].VAR5 = VAR5;
                VAR13[VAR16].VAR6 = VAR6;
                FUN9(&VAR13[VAR16].VAR28, VAR11, VAR7);
                VAR16++;
                VAR11 += VAR9;
                if (VAR7 / 8 >= VAR9)
                    VAR7 -= VAR9 * 8;
                else
                    VAR7 = 0;
            }
        }
        if (VAR2->VAR18 * VAR2->VAR19 != VAR16)
        {
            FUN3(VAR2->VAR4, VAR21, "");
            return VAR36;
        }
        VAR4->FUN10(VAR4, VAR37, VAR13, NULL, VAR2->VAR19);
    }
    else
    {
        for (VAR6 = 0; VAR7 > 0 && VAR6 < VAR2->VAR19; VAR6++)
        {
            for (VAR5 = 0; VAR7 > 0 && VAR5 < VAR2->VAR18; VAR5++)
            {
                VAR9 = (VAR16 + 1) * (VAR38)VAR2->VAR39.VAR9.VAR40 / VAR2->VAR39.VAR9.VAR41 - VAR16 * (VAR38)VAR2->VAR39.VAR9.VAR40 / VAR2->VAR39.VAR9.VAR41;
                VAR13[VAR16].VAR9 = VAR9;
                VAR13[VAR16].VAR5 = VAR5;
                VAR13[VAR16].VAR6 = VAR6;
                FUN9(&VAR13[VAR16].VAR28, VAR11, VAR7);
                VAR16++;
                VAR11 += VAR9;
                if (VAR7 / 8 >= VAR9)
                    VAR7 -= VAR9 * 8;
                else
                    VAR7 = 0;
            }
        }
        VAR4->FUN11(VAR4, VAR42, VAR13, NULL, VAR16, sizeof(VAR12));
    }
    if (VAR2->VAR43)
    {
        if (VAR2->VAR23)
        {
            FUN12(&VAR2->VAR44[0].VAR45[0][0]);
            FUN12(&VAR2->VAR44[1].VAR45[0][0]);
            FUN12(&VAR2->VAR44[2].VAR45[0][0]);
        }
        else
        {
            FUN13(&VAR2->VAR44[0].VAR45[0][0]);
            FUN13(&VAR2->VAR44[1].VAR45[0][0]);
            FUN13(&VAR2->VAR44[2].VAR45[0][0]);
        }
    }
    return 0;