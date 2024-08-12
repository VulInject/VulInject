static int FUN1(VAR1 *VAR2, int VAR3)
{
    int VAR4, VAR5 = 1;
    struct VAR6 *VAR6 = VAR2->VAR7;
    struct VAR8 *VAR9 = VAR6->VAR10 + VAR3;
    if ((!VAR9->VAR11 || VAR9->VAR11 == VAR12) && !(VAR9->VAR13 & VAR14))
    {
        for (VAR4 = VAR9->VAR15; VAR4 < VAR9->VAR16; VAR4++)
            if (VAR9->VAR17[VAR4] < 255)
                VAR5++;
        VAR9->VAR11 = VAR9->VAR18 = FUN2(VAR2, VAR3, VAR9->VAR19, NULL) - VAR5;
        if (VAR2->VAR10[VAR3]->VAR20 == VAR12)
        {
            VAR2->VAR10[VAR3]->VAR20 = VAR9->VAR11;
            if (VAR2->VAR10[VAR3]->VAR5)
                VAR2->VAR10[VAR3]->VAR5 -= VAR2->VAR10[VAR3]->VAR20;
        }
    }
    if (VAR9->VAR21 > 0)
        VAR9->VAR22 = 1;
    return 0;
}