static int FUN1(VAR1 *VAR2)
{
    int VAR3, VAR4, VAR5, VAR6, VAR7, VAR8 = 0, VAR9 = 0;
    for (VAR4 = 0; VAR4 < VAR2->VAR10; VAR4++)
    {
        for (VAR3 = 0; VAR3 < VAR2->VAR11; VAR3++)
        {
            if (VAR2->VAR12.VAR13[VAR8])
                VAR7 = FUN2(&VAR2->VAR14, 1);
            if (VAR2->VAR15 == 3 && VAR2->VAR16.VAR17)
                VAR9 = FUN2(&VAR2->VAR14, 1);
            FUN3();
        }
        VAR8++;
    }
    return 0;
}