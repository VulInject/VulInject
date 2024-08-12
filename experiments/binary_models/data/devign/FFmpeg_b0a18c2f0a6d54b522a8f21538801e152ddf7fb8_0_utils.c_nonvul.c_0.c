static void FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, VAR7 *VAR8)
{
    int VAR9, VAR10, VAR11, VAR12, VAR13;
    int64_t VAR14;
    if (VAR2->VAR15 & VAR16)
        return;
    if ((VAR2->VAR15 & VAR17) && VAR8->VAR18 != VAR19)
        VAR8->VAR20 = VAR19;
    if (VAR4->VAR21->VAR22 != VAR23 && VAR6 && VAR6->VAR24 == VAR25)
        VAR4->VAR21->VAR26 = 1;
    VAR12 = VAR4->VAR21->VAR26;
    VAR11 = 0;
    if (VAR12 && VAR6 && VAR6->VAR24 != VAR25)
        VAR11 = 1;
    if (VAR8->VAR18 != VAR19 && VAR8->VAR20 != VAR19 && VAR8->VAR20 > VAR8->VAR18 && VAR4->VAR27 < 63)
    {
        VAR8->VAR20 -= 1LL << VAR4->VAR27;
    }
    if (VAR12 == 1 && VAR8->VAR20 == VAR8->VAR18 && VAR8->VAR20 != VAR19 && VAR11)
    {
        FUN2(VAR2, VAR28, "");
        VAR8->VAR20 = VAR8->VAR18 = VAR19;
    }
    if (VAR8->VAR29 == 0)
    {
        FUN3(&VAR9, &VAR10, VAR4, VAR6, VAR8);
        if (VAR10 && VAR9)
        {
            VAR8->VAR29 = FUN4(1, VAR9 * (VAR30)VAR4->VAR31.VAR10, VAR10 * (VAR30)VAR4->VAR31.VAR9, VAR32);
            if (VAR8->VAR29 != 0 && VAR2->VAR33)
                FUN5(VAR2, VAR4, VAR8);
        }
    }
    if (VAR6 && VAR4->VAR34 == VAR35 && VAR8->VAR36)
    {
        VAR14 = FUN6(VAR6->VAR14, VAR8->VAR29, VAR8->VAR36);
        if (VAR8->VAR18 != VAR19)
            VAR8->VAR18 += VAR14;
        if (VAR8->VAR20 != VAR19)
            VAR8->VAR20 += VAR14;
    }
    if (VAR6 && VAR6->VAR37 >= 0)
    {
        int64_t VAR10 = VAR4->VAR21->VAR31.VAR10 * (VAR30)VAR4->VAR31.VAR9;
        if (VAR10 > 0)
        {
            int64_t VAR9 = VAR4->VAR21->VAR31.VAR9 * (VAR30)VAR4->VAR31.VAR10;
            if (VAR8->VAR20 != VAR19)
            {
                VAR4->VAR38 = VAR8->VAR20 - VAR6->VAR39 * VAR9 / VAR10;
                VAR8->VAR18 = VAR8->VAR20 + VAR6->VAR40 * VAR9 / VAR10;
            }
            else if (VAR4->VAR38 != VAR19)
            {
                VAR8->VAR20 = VAR4->VAR38 + VAR6->VAR39 * VAR9 / VAR10;
                VAR8->VAR18 = VAR8->VAR20 + VAR6->VAR40 * VAR9 / VAR10;
            }
            if (VAR6->VAR37 > 0)
                VAR4->VAR38 = VAR8->VAR20;
        }
    }
    if (VAR8->VAR20 != VAR19 && VAR8->VAR18 != VAR19 && VAR8->VAR18 > VAR8->VAR20)
        VAR11 = 1;
    if ((VAR12 == 0 || (VAR12 == 1 && VAR6)) && VAR4->VAR21->VAR22 != VAR23)
    {
        if (VAR11)
        {
            if (VAR8->VAR20 == VAR19)
                VAR8->VAR20 = VAR4->VAR41;
            FUN7(VAR2, VAR8->VAR42, VAR8->VAR20, VAR8->VAR18);
            if (VAR8->VAR20 == VAR19)
                VAR8->VAR20 = VAR4->VAR43;
            if (VAR4->VAR44 == 0)
                VAR4->VAR44 = VAR8->VAR29;
            if (VAR8->VAR20 != VAR19)
                VAR4->VAR43 = VAR8->VAR20 + VAR4->VAR44;
            VAR4->VAR44 = VAR8->VAR29;
            VAR4->VAR41 = VAR8->VAR18;
        }
        else if (VAR8->VAR18 != VAR19 || VAR8->VAR20 != VAR19 || VAR8->VAR29)
        {
            if (VAR8->VAR18 != VAR19 && VAR8->VAR29)
            {
                int64_t VAR45 = FUN8(VAR4->VAR43 - VAR8->VAR29 - VAR8->VAR18);
                int64_t VAR46 = FUN8(VAR4->VAR43 - VAR8->VAR18);
                if (VAR45 < VAR46 && VAR45 < (VAR8->VAR29 >> 3))
                {
                    VAR8->VAR18 += VAR8->VAR29;
                }
            }
            if (VAR8->VAR18 == VAR19)
                VAR8->VAR18 = VAR8->VAR20;
            FUN7(VAR2, VAR8->VAR42, VAR8->VAR18, VAR8->VAR18);
            if (VAR8->VAR18 == VAR19)
                VAR8->VAR18 = VAR4->VAR43;
            VAR8->VAR20 = VAR8->VAR18;
            if (VAR8->VAR18 != VAR19)
                VAR4->VAR43 = VAR8->VAR18 + VAR8->VAR29;
        }
    }
    if (VAR8->VAR18 != VAR19 && VAR12 <= VAR47)
    {
        VAR4->VAR48[0] = VAR8->VAR18;
        for (VAR13 = 0; VAR13 < VAR12 && VAR4->VAR48[VAR13] > VAR4->VAR48[VAR13 + 1]; VAR13++)
            FUN9(VAR30, VAR4->VAR48[VAR13], VAR4->VAR48[VAR13 + 1]);
        if (VAR8->VAR20 == VAR19)
            VAR8->VAR20 = VAR4->VAR48[0];
        if (VAR4->VAR21->VAR22 == VAR23)
        {
            FUN7(VAR2, VAR8->VAR42, VAR8->VAR20, VAR8->VAR18);
        }
        if (VAR8->VAR20 > VAR4->VAR43)
            VAR4->VAR43 = VAR8->VAR20;
    }
    if (FUN10(VAR4->VAR21))
        VAR8->VAR15 |= VAR49;
    else if (VAR6)
    {
        VAR8->VAR15 = 0;
        if (VAR6->VAR50 == 1)
            VAR8->VAR15 |= VAR49;
        else if (VAR6->VAR50 == -1 && VAR6->VAR24 == VAR51)
            VAR8->VAR15 |= VAR49;
    }
    if (VAR6)
        VAR8->VAR52 = VAR6->VAR52;
}