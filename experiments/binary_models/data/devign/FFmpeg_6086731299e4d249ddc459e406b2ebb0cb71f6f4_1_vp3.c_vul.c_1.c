static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    int VAR5, VAR6, VAR7, VAR8, VAR9, VAR10, VAR11;
    int VAR12 = VAR2->VAR13;
    for (VAR5 = 0; VAR5 < VAR2->VAR14 - 1 && VAR12 > 0; VAR5++)
    {
        VAR6 = VAR10 = VAR11 = 0;
        VAR8 = FUN2(VAR4);
        do
        {
            VAR9 = FUN3(VAR4, VAR2->VAR15.VAR16, 6, 2) + 1;
            if (VAR9 == 34)
                VAR9 += FUN4(VAR4, 12);
            VAR10 += VAR9;
            if (!VAR8)
                VAR11 += VAR9;
            for (VAR7 = 0; VAR7 < VAR9; VAR6++)
            {
                if (VAR6 >= VAR2->VAR13)
                    return -1;
                if (VAR2->VAR17[VAR2->VAR18[0][VAR6]].VAR5 == VAR5)
                {
                    VAR2->VAR17[VAR2->VAR18[0][VAR6]].VAR5 += VAR8;
                    VAR7++;
                }
            }
            if (VAR9 == VAR19)
                VAR8 = FUN2(VAR4);
            else
                VAR8 ^= 1;
        } while (VAR10 < VAR12);
        VAR12 -= VAR11;
    }
    return 0;
}