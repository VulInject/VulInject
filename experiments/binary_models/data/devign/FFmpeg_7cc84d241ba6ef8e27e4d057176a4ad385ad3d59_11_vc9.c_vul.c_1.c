static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = &VAR2->VAR4;
    VAR5 *VAR6 = &VAR2->VAR4.VAR6;
    int VAR7, VAR8, VAR9 = 0, VAR10 = 0;
    for (VAR4->VAR11 = 0; VAR4->VAR11 < VAR4->VAR12; VAR4->VAR11++)
    {
        for (VAR4->VAR13 = 0; VAR4->VAR13 < VAR4->VAR14; VAR4->VAR13++)
        {
            if (VAR2->VAR15.VAR16)
                VAR4->VAR17 = FUN2(VAR6, 1);
            else
                VAR4->VAR17 = VAR2->VAR15.VAR18[VAR9];
            if (VAR2->VAR19 == 3 && VAR2->VAR20.VAR16)
                VAR10 = FUN2(VAR6, 1);
            FUN3();
        }
        VAR9++;
    }
    return 0;
}