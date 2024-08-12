void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    int VAR5;
    VAR6 *VAR7, *VAR8;
    VAR9 *VAR10 = VAR2->VAR11;
    assert(VAR2->VAR12 == VAR13);
    assert(VAR4->VAR14 == VAR15);
    assert(VAR10->VAR16);
    if (VAR10->VAR17)
    {
        VAR7 = NULL;
        for (VAR5 = 0; VAR5 < VAR10->VAR16; VAR5++)
        {
            VAR7 = &VAR10->VAR17[VAR5];
            if (VAR7->VAR18[0] == VAR4->VAR18[0])
                break;
        }
        assert(VAR5 < VAR10->VAR16);
        VAR10->VAR16--;
        VAR8 = &VAR10->VAR17[VAR10->VAR16];
        if (VAR7 != VAR8)
            FUN2(VAR6, *VAR7, *VAR8);
    }
    for (VAR5 = 0; VAR5 < VAR19; VAR5++)
    {
        VAR4->VAR18[VAR5] = NULL;
    }
    if (VAR2->VAR20 & VAR21)
        FUN3(VAR2, VAR22, ""
                                "",
               VAR4, VAR10->VAR16);
}