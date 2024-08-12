static int FUN1(VAR1 *VAR2, VAR3 *VAR4, unsigned int VAR5, int *VAR6, const int *VAR7, const int *VAR8)
{
    int VAR9 = 0, VAR10 = 0, VAR11;
    int VAR12 = *VAR8++;
    unsigned int VAR13 = 0, VAR14 = 0;
    VAR7--;
    while (VAR13 < VAR5)
    {
        int VAR15 = FUN2(VAR4, VAR16.VAR17, 9, 1);
        if (VAR15 == -1)
        {
            FUN3(VAR2, VAR18, "");
            return -1;
        }
        if (!VAR15)
        {
            VAR12 += *VAR8++;
            VAR14 = VAR12 - VAR13;
            VAR13 = VAR12;
            VAR12 += *VAR8++;
            if (VAR13 > VAR5)
            {
                FUN3(VAR2, VAR18, "");
                return -1;
            }
            VAR10 += VAR14;
        }
        else if (VAR15 == 1)
        {
            int VAR19;
            for (VAR19 = 0; VAR19 < 2; VAR19++)
            {
                VAR14 = 0;
                for (;;)
                {
                    VAR11 = FUN2(VAR4, VAR20[VAR9].VAR17, 9, 2);
                    if (VAR11 == -1)
                    {
                        FUN3(VAR2, VAR18, "");
                        return -1;
                    }
                    VAR14 += VAR11;
                    if (VAR11 < 64)
                        break;
                }
                *VAR6++ = VAR14 + VAR10;
                if (VAR6 >= VAR7)
                {
                    FUN3(VAR2, VAR18, "");
                    return -1;
                }
                VAR10 = 0;
                VAR13 += VAR14;
                if (VAR13 > VAR5 || VAR14 > VAR5)
                {
                    FUN3(VAR2, VAR18, "");
                    return -1;
                }
                VAR9 = !VAR9;
            }
        }
        else if (VAR15 == 9 || VAR15 == 10)
        {
            FUN3(VAR2, VAR18, "");
            return -1;
        }
        else
        {
            VAR14 = VAR12 - VAR13 + (VAR15 - 5);
            VAR12 -= *--VAR8;
            VAR13 += VAR14;
            if (VAR13 > VAR5 || VAR14 > VAR5)
            {
                FUN3(VAR2, VAR18, "");
                return -1;
            }
            *VAR6++ = VAR14 + VAR10;
            if (VAR6 >= VAR7)
            {
                FUN3(VAR2, VAR18, "");
                return -1;
            }
            VAR10 = 0;
            VAR9 = !VAR9;
        }
        while (VAR13 < VAR5 && VAR12 <= VAR13)
        {
            VAR12 += *VAR8++;
            VAR12 += *VAR8++;
        }
    }
    *VAR6++ = VAR10;
    *VAR6++ = 0;
    return 0;
}