void FUN1(VAR1 *VAR2)
{
    int VAR3;
    const VAR4 *VAR5;
    VAR6 *VAR7 = FUN2(VAR2);
    if (FUN3(FUN4(""), VAR8, VAR2, NULL))
    {
        FUN5(1);
    }
    assert(VAR9 <= VAR10);
    for (VAR3 = VAR9 - 1; VAR3 >= 0; VAR3--)
    {
        if (!VAR11[VAR3].VAR12)
        {
            FUN6("", VAR3);
            FUN5(1);
        }
    }
    assert(VAR13 == VAR9);
    if (VAR13 > 0)
    {
        uint64_t VAR14;
        if (VAR13 > VAR10)
        {
            VAR13 = VAR10;
        }
        for (VAR3 = 0; VAR3 < VAR13; VAR3++)
        {
            if (VAR11[VAR3].VAR15 != 0)
            {
                break;
            }
        }
        if (VAR3 == VAR13)
        {
            assert(VAR7->VAR16);
            VAR7->FUN7(VAR7, VAR11, VAR13, VAR17);
        }
        VAR14 = 0;
        for (VAR3 = 0; VAR3 < VAR13; VAR3++)
        {
            VAR14 += VAR11[VAR3].VAR15;
        }
        if (VAR14 != VAR17)
        {
            FUN6("" VAR18 ""
                         "" VAR19 "",
                         VAR14, VAR17);
            FUN5(1);
        }
        for (VAR3 = 0; VAR3 < VAR13; VAR3++)
        {
            FUN8(&VAR11[VAR3].VAR20);
        }
        FUN9();
        if (!VAR7->VAR21 || !VAR7->VAR22)
        {
            FUN6("");
            FUN5(1);
        }
        VAR5 = VAR7->FUN10(VAR2);
        for (VAR3 = 0; VAR3 < VAR5->VAR23; VAR3++)
        {
            if (VAR5->VAR24[VAR3].VAR25.VAR26)
            {
                break;
            }
        }
        if (VAR3 == VAR5->VAR23)
        {
            for (VAR3 = 0; VAR3 < VAR27; VAR3++)
            {
                CpuInstanceProperties VAR25;
                VAR25 = VAR7->FUN11(VAR2, VAR3);
                VAR25.VAR26 = true;
                FUN12(VAR2, &VAR25, &VAR28);
            }
        }
        if (VAR29)
        {
            FUN13();
            FUN14();
        }
    }
    else
    {
        FUN15(0, VAR17, 0);
    }
}