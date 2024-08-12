static void FUN1(VAR1 *VAR2)
{
    intptr_t VAR3;
    int VAR4;
    if (VAR2->VAR5 != VAR6 && VAR2->VAR5 != VAR7)
    {
        return;
    }
    FUN2(&VAR2->VAR8.VAR9, VAR2->VAR10.VAR11, VAR2->VAR10.VAR12);
    VAR3 = (VAR13)FUN3(&VAR2->VAR14);
    for (VAR4 = 0; VAR4 < VAR2->VAR15.VAR16; VAR4++)
    {
        VAR17 *VAR18;
        intptr_t VAR19;
        int VAR20;
        if (VAR2->VAR21.VAR22[VAR4] == 0)
        {
            continue;
        }
        VAR18 = FUN4(VAR2, VAR2->VAR21.VAR22[VAR4], VAR23);
        assert(VAR18);
        assert(VAR18->VAR24 == VAR25);
        VAR19 = (VAR13)FUN4(VAR2, VAR18->VAR26.VAR27.VAR28, VAR23);
        assert(VAR19);
        VAR19 -= VAR3;
        VAR20 = VAR18->VAR26.VAR27.VAR29 * FUN5(VAR18->VAR26.VAR27.VAR30);
        FUN6(VAR2->VAR31, VAR4, (int)VAR19, VAR20);
        FUN2(&VAR2->VAR14, VAR19, VAR20);
    }
}