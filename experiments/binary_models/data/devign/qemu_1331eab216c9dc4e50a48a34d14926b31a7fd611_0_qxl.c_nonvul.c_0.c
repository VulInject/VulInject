static void FUN1(VAR1 *VAR2)
{
    int VAR3;
    if (VAR2->VAR4 != VAR5 && VAR2->VAR4 != VAR6)
    {
        return;
    }
    FUN2(VAR2, VAR2->VAR7.VAR8.VAR9, VAR2->VAR7.VAR8.VAR10, VAR2->VAR7.VAR8.VAR11);
    for (VAR3 = 0; VAR3 < VAR2->VAR12.VAR13; VAR3++)
    {
        VAR14 *VAR15;
        if (VAR2->VAR16.VAR17[VAR3] == 0)
        {
            continue;
        }
        VAR15 = FUN3(VAR2, VAR2->VAR16.VAR17[VAR3], VAR18);
        assert(VAR15);
        assert(VAR15->VAR19 == VAR20);
        FUN2(VAR2, VAR15->VAR21.VAR22.VAR23, VAR15->VAR21.VAR22.VAR10, VAR15->VAR21.VAR22.VAR11);
    }
}