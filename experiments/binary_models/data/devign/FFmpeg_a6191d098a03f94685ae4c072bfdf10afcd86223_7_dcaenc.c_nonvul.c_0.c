static void FUN1(VAR1 *VAR2, int VAR3)
{
    int VAR4, VAR5, VAR6, VAR7;
    FUN2(&VAR2->VAR8, 2, VAR9 - 1);
    FUN2(&VAR2->VAR8, 3, 0);
    for (VAR7 = 0; VAR7 < VAR2->VAR10; VAR7++)
        for (VAR5 = 0; VAR5 < VAR11; VAR5++)
            FUN2(&VAR2->VAR8, 1, 0);
    for (VAR7 = 0; VAR7 < VAR2->VAR10; VAR7++)
        for (VAR5 = 0; VAR5 < VAR11; VAR5++)
            FUN2(&VAR2->VAR8, 5, VAR2->VAR12[VAR7][VAR5]);
    if (VAR9 > 1)
    {
        for (VAR7 = 0; VAR7 < VAR2->VAR10; VAR7++)
            for (VAR5 = 0; VAR5 < VAR11; VAR5++)
                FUN2(&VAR2->VAR8, 1, 0);
    }
    for (VAR7 = 0; VAR7 < VAR2->VAR10; VAR7++)
        for (VAR5 = 0; VAR5 < VAR11; VAR5++)
            FUN2(&VAR2->VAR8, 7, VAR2->VAR13[VAR7][VAR5]);
    if (VAR2->VAR14)
    {
        for (VAR4 = 0; VAR4 < VAR15; VAR4++)
            FUN2(&VAR2->VAR8, 8, FUN3(VAR2->VAR16[VAR4], VAR2->VAR17) & 0xff);
        FUN2(&VAR2->VAR8, 8, VAR2->VAR18);
    }
    for (VAR6 = 0; VAR6 < VAR9; VAR6++)
        for (VAR7 = 0; VAR7 < VAR2->VAR10; VAR7++)
            for (VAR5 = 0; VAR5 < VAR11; VAR5++)
                FUN4(VAR2, VAR6, VAR5, VAR7);
    FUN2(&VAR2->VAR8, 16, 0xffff);
}