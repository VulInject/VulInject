static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, int *VAR6, const int *VAR7, const int *VAR8)
{
    int VAR9 = 0, VAR10 = 0, VAR11 = 0, VAR12 = 0, VAR13;
    int VAR14 = *VAR8++;
    int *VAR15 = VAR6;
    VAR7--;
    while (VAR10 < VAR5)
    {
        int VAR16 = FUN2(VAR4, VAR17.VAR18, 9, 1);
        if (VAR16 == -1)
        {
            FUN3(VAR2, VAR19, "");
            return -1;
        }
        if (!VAR16)
        {
            VAR14 += *VAR8++;
            VAR11 = VAR14 - VAR10;
            VAR14 += *VAR8++;
            VAR10 += VAR11;
            if (VAR10 > VAR5)
            {
                FUN3(VAR2, VAR19, "");
                return -1;
            }
            VAR12 += VAR11;
        }
        else if (VAR16 == 1)
        {
            int VAR20;
            for (VAR20 = 0; VAR20 < 2; VAR20++)
            {
                VAR11 = 0;
                for (;;)
                {
                    VAR13 = FUN2(VAR4, VAR21[VAR9].VAR18, 9, 2);
                    if (VAR13 == -1)
                    {
                        FUN3(VAR2, VAR19, "");
                        return -1;
                    }
                    VAR11 += VAR13;
                    if (VAR13 < 64)
                        break;
                }
                *VAR6++ = VAR11 + VAR12;
                if (VAR6 >= VAR7)
                {
                    FUN3(VAR2, VAR19, "");
                    return -1;
                }
                VAR12 = 0;
                VAR10 += VAR11;
                if (VAR10 > VAR5)
                {
                    FUN3(VAR2, VAR19, "");
                    return -1;
                }
                VAR9 = !VAR9;
            }
        }
        else if (VAR16 == 9 || VAR16 == 10)
        {
            FUN3(VAR2, VAR19, "");
            return -1;
        }
        else
        {
            VAR11 = VAR14 - VAR10 + (VAR16 - 5);
            if (VAR16 >= 5)
                VAR14 += *VAR8++;
            else
                VAR14 -= *--VAR8;
            VAR10 += VAR11;
            if (VAR10 > VAR5)
            {
                FUN3(VAR2, VAR19, "");
                return -1;
            }
            *VAR6++ = VAR11 + VAR12;
            if (VAR6 >= VAR7)
            {
                FUN3(VAR2, VAR19, "");
                return -1;
            }
            VAR12 = 0;
            VAR9 = !VAR9;
        }
        while (VAR14 <= VAR10)
        {
            VAR14 += *VAR8++;
            VAR14 += *VAR8++;
        }
    }
    *VAR6++ = VAR12;
    *VAR6++ = 0;
    return 0;
}