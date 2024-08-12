static int FUN1(VAR1 *VAR2, int VAR3, const VAR1 **VAR4, int VAR5, int VAR6, VAR1 *VAR7)
{
    GetBitContext VAR8;
    int VAR9;
    int VAR10;
    int VAR11 = 0;
    FUN2(&VAR8, *VAR4, VAR5 << 3);
    while (FUN3(&VAR8) < VAR5 << 3 && VAR11 < VAR3)
    {
        VAR9 = FUN4(&VAR8, 2);
        if (VAR9)
        {
            if (VAR6 != 1 || VAR9 != 1)
            {
                if (VAR7)
                    *VAR2++ = VAR7[VAR9];
                else
                    *VAR2++ = VAR9;
            }
            VAR11++;
        }
        else
        {
            VAR9 = FUN5(&VAR8);
            if (VAR9 == 1)
            {
                VAR10 = FUN4(&VAR8, 3) + 3;
                VAR9 = FUN4(&VAR8, 2);
                if (VAR6 == 1 && VAR9 == 1)
                    VAR11 += VAR10;
                else
                {
                    if (VAR7)
                        VAR9 = VAR7[VAR9];
                    while (VAR10-- > 0 && VAR11 < VAR3)
                    {
                        *VAR2++ = VAR9;
                        VAR11++;
                    }
                }
            }
            else
            {
                VAR9 = FUN5(&VAR8);
                if (VAR9 == 0)
                {
                    VAR9 = FUN4(&VAR8, 2);
                    if (VAR9 == 2)
                    {
                        VAR10 = FUN4(&VAR8, 4) + 12;
                        VAR9 = FUN4(&VAR8, 2);
                        if (VAR6 == 1 && VAR9 == 1)
                            VAR11 += VAR10;
                        else
                        {
                            if (VAR7)
                                VAR9 = VAR7[VAR9];
                            while (VAR10-- > 0 && VAR11 < VAR3)
                            {
                                *VAR2++ = VAR9;
                                VAR11++;
                            }
                        }
                    }
                    else if (VAR9 == 3)
                    {
                        VAR10 = FUN4(&VAR8, 8) + 29;
                        VAR9 = FUN4(&VAR8, 2);
                        if (VAR6 == 1 && VAR9 == 1)
                            VAR11 += VAR10;
                        else
                        {
                            if (VAR7)
                                VAR9 = VAR7[VAR9];
                            while (VAR10-- > 0 && VAR11 < VAR3)
                            {
                                *VAR2++ = VAR9;
                                VAR11++;
                            }
                        }
                    }
                    else if (VAR9 == 1)
                    {
                        if (VAR7)
                            VAR9 = VAR7[0];
                        else
                            VAR9 = 0;
                        VAR10 = 2;
                        while (VAR10-- > 0 && VAR11 < VAR3)
                        {
                            *VAR2++ = VAR9;
                            VAR11++;
                        }
                    }
                    else
                    {
                        (*VAR4) += (FUN3(&VAR8) + 7) >> 3;
                        return VAR11;
                    }
                }
                else
                {
                    if (VAR7)
                        VAR9 = VAR7[0];
                    else
                        VAR9 = 0;
                    *VAR2++ = VAR9;
                    VAR11++;
                }
            }
        }
    }
    if (FUN4(&VAR8, 6))
        FUN6(0, VAR12, "");
    (*VAR4) += (FUN3(&VAR8) + 7) >> 3;
    return VAR11;
}