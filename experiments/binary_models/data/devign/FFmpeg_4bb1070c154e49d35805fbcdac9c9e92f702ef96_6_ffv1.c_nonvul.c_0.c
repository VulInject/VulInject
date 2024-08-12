int FUN1(VAR1 *VAR2, VAR1 *VAR3)
{
    int VAR4;
    VAR3->VAR5 = VAR2->VAR5;
    VAR3->VAR6 = VAR2->VAR6;
    for (VAR4 = 0; VAR4 < VAR2->VAR5; VAR4++)
    {
        VAR7 *const VAR8 = &VAR3->VAR9[VAR4];
        if (VAR3->VAR10 != VAR11)
        {
            if (!VAR8->VAR12)
                VAR8->VAR12 = FUN2(VAR13 * VAR8->VAR14 * sizeof(VAR15));
            if (!VAR8->VAR12)
                return FUN3(VAR16);
        }
        else
        {
            if (!VAR8->VAR17)
                VAR8->VAR17 = FUN2(VAR8->VAR14 * sizeof(VAR18));
            if (!VAR8->VAR17)
                return FUN3(VAR16);
        }
    }
    if (VAR3->VAR10 == VAR19)
    {
        for (VAR4 = 1; VAR4 < 256; VAR4++)
        {
            VAR3->VAR20.VAR21[VAR4] = VAR2->VAR22[VAR4];
            VAR3->VAR20.VAR23[256 - VAR4] = 256 - VAR3->VAR20.VAR21[VAR4];
        }
    }
    return 0;
}