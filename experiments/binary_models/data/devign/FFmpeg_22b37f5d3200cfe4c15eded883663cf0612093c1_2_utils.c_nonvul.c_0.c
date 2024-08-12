static void FUN1(VAR1 *VAR2)
{
    AVPacket VAR3, *VAR4 = &VAR3;
    VAR5 *VAR6;
    int VAR7, VAR8, VAR9;
    int64_t VAR10, VAR11, VAR12;
    int64_t VAR13, VAR14, VAR15;
    FUN2(&VAR2->VAR16, 0, VAR17);
    VAR7 = 0;
    for (;;)
    {
        if (VAR7 >= VAR18)
            break;
        for (VAR8 = 0; VAR8 < VAR2->VAR19; VAR8++)
        {
            VAR6 = VAR2->VAR20[VAR8];
            if (VAR6->VAR10 == VAR21)
                break;
        }
        if (VAR8 == VAR2->VAR19)
            break;
        VAR9 = FUN3(VAR2, VAR4);
        if (VAR9 != 0)
            break;
        VAR7 += VAR4->VAR22;
        VAR6 = VAR2->VAR20[VAR4->VAR23];
        if (VAR4->VAR24 != VAR21)
        {
            if (VAR6->VAR10 == VAR21)
                VAR6->VAR10 = (VAR25)((double)VAR4->VAR24 * VAR2->VAR26 * (double)VAR27 / VAR2->VAR28);
        }
        FUN4(VAR4);
    }
    VAR10 = VAR29;
    for (VAR8 = 0; VAR8 < VAR2->VAR19; VAR8++)
    {
        VAR6 = VAR2->VAR20[VAR8];
        if (VAR6->VAR10 != VAR21 && VAR6->VAR10 < VAR10)
            VAR10 = VAR6->VAR10;
    }
    if (VAR10 != VAR29)
        VAR2->VAR10 = VAR10;
    VAR13 = VAR2->VAR30;
    VAR14 = VAR13 - VAR18;
    if (VAR14 < 0)
        VAR14 = 0;
    FUN5(VAR2);
    FUN2(&VAR2->VAR16, VAR14, VAR17);
    VAR7 = 0;
    for (;;)
    {
        if (VAR7 >= VAR18)
            break;
        for (VAR8 = 0; VAR8 < VAR2->VAR19; VAR8++)
        {
            VAR6 = VAR2->VAR20[VAR8];
            if (VAR6->VAR15 == VAR21)
                break;
        }
        if (VAR8 == VAR2->VAR19)
            break;
        VAR9 = FUN3(VAR2, VAR4);
        if (VAR9 != 0)
            break;
        VAR7 += VAR4->VAR22;
        VAR6 = VAR2->VAR20[VAR4->VAR23];
        if (VAR4->VAR24 != VAR21)
        {
            VAR11 = (VAR25)((double)VAR4->VAR24 * VAR2->VAR26 * (double)VAR27 / VAR2->VAR28);
            VAR15 = VAR11 - VAR6->VAR10;
            if (VAR15 > 0)
            {
                if (VAR6->VAR15 == VAR21 || VAR6->VAR15 < VAR15)
                    VAR6->VAR15 = VAR15;
            }
        }
        FUN4(VAR4);
    }
    VAR11 = VAR31;
    for (VAR8 = 0; VAR8 < VAR2->VAR19; VAR8++)
    {
        VAR6 = VAR2->VAR20[VAR8];
        if (VAR6->VAR15 != VAR21)
        {
            VAR12 = VAR6->VAR10 + VAR6->VAR15;
            if (VAR12 > VAR11)
                VAR11 = VAR12;
        }
    }
    if (VAR2->VAR10 != VAR21)
    {
        for (VAR8 = 0; VAR8 < VAR2->VAR19; VAR8++)
        {
            VAR6 = VAR2->VAR20[VAR8];
            if (VAR6->VAR10 == VAR21)
                VAR6->VAR10 = VAR2->VAR10;
        }
    }
    if (VAR11 != VAR31)
    {
        for (VAR8 = 0; VAR8 < VAR2->VAR19; VAR8++)
        {
            VAR6 = VAR2->VAR20[VAR8];
            if (VAR6->VAR15 == VAR21 && VAR6->VAR10 != VAR21)
                VAR6->VAR15 = VAR11 - VAR6->VAR10;
        }
        VAR2->VAR15 = VAR11 - VAR2->VAR10;
    }
    FUN2(&VAR2->VAR16, 0, VAR17);
}