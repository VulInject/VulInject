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
    if (VAR12 && VAR4->VAR21->VAR27 & VAR28)
        VAR12 -= VAR4->VAR21->VAR29 - 1;
    if (VAR12 && VAR6 && VAR6->VAR24 != VAR25)
        VAR11 = 1;
    if (VAR8->VAR18 != VAR19 && VAR8->VAR20 != VAR19 && VAR8->VAR20 - (1LL << (VAR4->VAR30 - 1)) > VAR8->VAR18 && VAR4->VAR30 < 63)
    {
        VAR8->VAR20 -= 1LL << VAR4->VAR30;
    }
    if (VAR12 == 1 && VAR8->VAR20 == VAR8->VAR18 && VAR8->VAR20 != VAR19 && VAR11)
    {
        FUN2(VAR2, VAR31, "" VAR32 "", VAR8->VAR20);
        VAR8->VAR20 = VAR8->VAR18 = VAR19;
    }
    if (VAR8->VAR33 == 0)
    {
        FUN3(&VAR9, &VAR10, VAR4, VAR6, VAR8);
        if (VAR10 && VAR9)
        {
            VAR8->VAR33 = FUN4(1, VAR9 * (VAR34)VAR4->VAR35.VAR10, VAR10 * (VAR34)VAR4->VAR35.VAR9, VAR36);
            if (VAR8->VAR33 != 0 && VAR2->VAR37)
                FUN5(VAR2, VAR4, VAR8);
        }
    }
    if (VAR6 && VAR4->VAR38 == VAR39 && VAR8->VAR40)
    {
        VAR14 = FUN6(VAR6->VAR14, VAR8->VAR33, VAR8->VAR40);
        if (VAR8->VAR18 != VAR19)
            VAR8->VAR18 += VAR14;
        if (VAR8->VAR20 != VAR19)
            VAR8->VAR20 += VAR14;
    }
    if (VAR6 && VAR6->VAR41 >= 0)
    {
        int64_t VAR10 = VAR4->VAR21->VAR35.VAR10 * (VAR34)VAR4->VAR35.VAR9;
        if (VAR10 > 0)
        {
            int64_t VAR9 = VAR4->VAR21->VAR35.VAR9 * (VAR34)VAR4->VAR35.VAR10;
            if (VAR8->VAR20 != VAR19)
            {
                VAR4->VAR42 = VAR8->VAR20 - VAR6->VAR43 * VAR9 / VAR10;
                VAR8->VAR18 = VAR8->VAR20 + VAR6->VAR44 * VAR9 / VAR10;
            }
            else if (VAR4->VAR42 != VAR19)
            {
                VAR8->VAR20 = VAR4->VAR42 + VAR6->VAR43 * VAR9 / VAR10;
                VAR8->VAR18 = VAR8->VAR20 + VAR6->VAR44 * VAR9 / VAR10;
            }
            if (VAR6->VAR41 > 0)
                VAR4->VAR42 = VAR8->VAR20;
        }
    }
    if (VAR8->VAR20 != VAR19 && VAR8->VAR18 != VAR19 && VAR8->VAR18 > VAR8->VAR20)
        VAR11 = 1;
    if ((VAR12 == 0 || (VAR12 == 1 && VAR6)) && VAR4->VAR21->VAR22 != VAR23)
    {
        if (VAR11)
        {
            if (VAR8->VAR20 == VAR19)
                VAR8->VAR20 = VAR4->VAR45;
            FUN7(VAR2, VAR8->VAR46, VAR8->VAR20, VAR8->VAR18);
            if (VAR8->VAR20 == VAR19)
                VAR8->VAR20 = VAR4->VAR47;
            if (VAR4->VAR48 == 0)
                VAR4->VAR48 = VAR8->VAR33;
            if (VAR8->VAR20 != VAR19)
                VAR4->VAR47 = VAR8->VAR20 + VAR4->VAR48;
            VAR4->VAR48 = VAR8->VAR33;
            VAR4->VAR45 = VAR8->VAR18;
        }
        else if (VAR8->VAR18 != VAR19 || VAR8->VAR20 != VAR19 || VAR8->VAR33)
        {
            if (VAR8->VAR18 != VAR19 && VAR8->VAR33)
            {
                int64_t VAR49 = FUN8(VAR4->VAR47 - VAR8->VAR33 - VAR8->VAR18);
                int64_t VAR50 = FUN8(VAR4->VAR47 - VAR8->VAR18);
                if (VAR49 < VAR50 && VAR49 < (VAR8->VAR33 >> 3))
                {
                    VAR8->VAR18 += VAR8->VAR33;
                }
            }
            if (VAR8->VAR18 == VAR19)
                VAR8->VAR18 = VAR8->VAR20;
            FUN7(VAR2, VAR8->VAR46, VAR8->VAR18, VAR8->VAR18);
            if (VAR8->VAR18 == VAR19)
                VAR8->VAR18 = VAR4->VAR47;
            VAR8->VAR20 = VAR8->VAR18;
            if (VAR8->VAR18 != VAR19)
                VAR4->VAR47 = VAR8->VAR18 + VAR8->VAR33;
        }
    }
    if (VAR8->VAR18 != VAR19 && VAR12 <= VAR51)
    {
        VAR4->VAR52[0] = VAR8->VAR18;
        for (VAR13 = 0; VAR13 < VAR12 && VAR4->VAR52[VAR13] > VAR4->VAR52[VAR13 + 1]; VAR13++)
            FUN9(VAR34, VAR4->VAR52[VAR13], VAR4->VAR52[VAR13 + 1]);
        if (VAR8->VAR20 == VAR19)
            VAR8->VAR20 = VAR4->VAR52[0];
        if (VAR4->VAR21->VAR22 == VAR23)
        {
            FUN7(VAR2, VAR8->VAR46, VAR8->VAR20, VAR8->VAR18);
        }
        if (VAR8->VAR20 > VAR4->VAR47)
            VAR4->VAR47 = VAR8->VAR20;
    }
    if (FUN10(VAR4->VAR21))
        VAR8->VAR15 |= VAR53;
    else if (VAR6)
    {
        VAR8->VAR15 = 0;
        if (VAR6->VAR54 == 1)
            VAR8->VAR15 |= VAR53;
        else if (VAR6->VAR54 == -1 && VAR6->VAR24 == VAR55)
            VAR8->VAR15 |= VAR53;
    }
    if (VAR6)
        VAR8->VAR56 = VAR6->VAR56;
}