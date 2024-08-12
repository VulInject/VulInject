void FUN1(VAR1 *VAR2)
{
    int VAR3;
    for (VAR3 = 0; VAR3 < VAR4; VAR3++)
    {
        VAR5[VAR3].VAR6 = FUN2(VAR7);
    }
    if (FUN3(FUN4(""), VAR8, NULL, NULL))
    {
        FUN5(1);
    }
    assert(VAR9 <= VAR4);
    for (VAR3 = VAR9 - 1; VAR3 >= 0; VAR3--)
    {
        if (!VAR5[VAR3].VAR10)
        {
            FUN6("", VAR3);
            FUN5(1);
        }
    }
    assert(VAR11 == VAR9);
    if (VAR11 > 0)
    {
        uint64_t VAR12;
        if (VAR11 > VAR4)
        {
            VAR11 = VAR4;
        }
        for (VAR3 = 0; VAR3 < VAR11; VAR3++)
        {
            if (VAR5[VAR3].VAR13 != 0)
            {
                break;
            }
        }
        if (VAR3 == VAR11)
        {
            uint64_t VAR14 = 0;
            for (VAR3 = 0; VAR3 < VAR11 - 1; VAR3++)
            {
                VAR5[VAR3].VAR13 = (VAR15 / VAR11) & ~((1 << 23UL) - 1);
                VAR14 += VAR5[VAR3].VAR13;
            }
            VAR5[VAR3].VAR13 = VAR15 - VAR14;
        }
        VAR12 = 0;
        for (VAR3 = 0; VAR3 < VAR11; VAR3++)
        {
            VAR12 += VAR5[VAR3].VAR13;
        }
        if (VAR12 != VAR15)
        {
            FUN6("" VAR16 ""
                         "" VAR17 "",
                         VAR12, VAR15);
            FUN5(1);
        }
        for (VAR3 = 0; VAR3 < VAR11; VAR3++)
        {
            FUN7(&VAR5[VAR3].VAR18);
        }
        FUN8();
        for (VAR3 = 0; VAR3 < VAR11; VAR3++)
        {
            if (!FUN9(VAR5[VAR3].VAR6, VAR7))
            {
                break;
            }
        }
        if (VAR3 == VAR11)
        {
            for (VAR3 = 0; VAR3 < VAR7; VAR3++)
            {
                unsigned VAR19 = VAR3 % VAR11;
                if (VAR2->VAR20)
                {
                    VAR19 = VAR2->FUN10(VAR3) % VAR11;
                }
                FUN11(VAR3, VAR5[VAR19].VAR6);
            }
        }
        FUN12();
    }
    else
    {
        FUN13(0, VAR15, 0);
    }
}