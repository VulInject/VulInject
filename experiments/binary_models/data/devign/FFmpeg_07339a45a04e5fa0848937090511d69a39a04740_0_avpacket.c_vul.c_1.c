int FUN1(VAR1 *VAR2)
{
    if (!VAR2->VAR3 && VAR2->VAR4 > 12 && FUN2(VAR2->VAR5 + VAR2->VAR4 - 8) == VAR6)
    {
        int VAR7;
        unsigned int VAR4;
        VAR8 *VAR9;
        VAR9 = VAR2->VAR5 + VAR2->VAR4 - 8 - 5;
        for (VAR7 = 1;; VAR7++)
        {
            VAR4 = FUN3(VAR9);
            if (VAR4 > VAR10 - 5 || VAR9 - VAR2->VAR5 < VAR4)
                if (VAR9[4] & 128)
                    break;
            if (VAR9 - VAR2->VAR5 < VAR4 + 5)
                VAR9 -= VAR4 + 5;
        }
        VAR2->VAR4 = VAR9 - VAR2->VAR5 - VAR4;
        FUN4(VAR2->VAR4 >= 0);
        return 1;
    }