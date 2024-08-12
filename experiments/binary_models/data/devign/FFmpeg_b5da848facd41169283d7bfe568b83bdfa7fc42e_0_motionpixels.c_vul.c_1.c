static void FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5)
{
    YuvPixel VAR6;
    const int VAR7 = VAR5 * VAR2->VAR8->VAR9;
    int VAR10, VAR11, VAR12 = 0;
    VAR6 = VAR2->VAR13[VAR5];
    if (VAR2->VAR14[VAR7 + VAR12] == 0)
    {
        memset(VAR2->VAR15, 1, sizeof(VAR2->VAR15));
        ++VAR12;
    }
    while (VAR12 < VAR2->VAR8->VAR9)
    {
        VAR10 = VAR2->VAR14[VAR7 + VAR12];
        if (VAR10 != 0)
        {
            if ((VAR5 & 3) == 0)
            {
                if (VAR2->VAR14[VAR7 + VAR12 + VAR2->VAR8->VAR9] < VAR10 || VAR2->VAR14[VAR7 + VAR12 + VAR2->VAR8->VAR9 * 2] < VAR10 || VAR2->VAR14[VAR7 + VAR12 + VAR2->VAR8->VAR9 * 3] < VAR10)
                {
                    for (VAR11 = (VAR12 + 3) & ~3; VAR11 < VAR12 + VAR10; VAR11 += 4)
                    {
                        VAR2->VAR16[((VAR5 / 4) * VAR2->VAR8->VAR9 + VAR11) / 4] = FUN2(VAR2, VAR11, VAR5);
                    }
                }
            }
            VAR12 += VAR10;
            memset(VAR2->VAR15, 1, sizeof(VAR2->VAR15));
            VAR6 = FUN2(VAR2, VAR12 - 1, VAR5);
        }
        else
        {
            VAR6.VAR5 += FUN3(VAR2, 0, FUN4(VAR2, VAR4));
            if ((VAR12 & 3) == 0)
            {
                if ((VAR5 & 3) == 0)
                {
                    VAR6.VAR17 += FUN3(VAR2, 1, FUN4(VAR2, VAR4));
                    VAR6.VAR18 += FUN3(VAR2, 2, FUN4(VAR2, VAR4));
                    VAR2->VAR16[((VAR5 / 4) * VAR2->VAR8->VAR9 + VAR12) / 4] = VAR6;
                }
                else
                {
                    VAR6.VAR17 = VAR2->VAR16[((VAR5 / 4) * VAR2->VAR8->VAR9 + VAR12) / 4].VAR17;
                    VAR6.VAR18 = VAR2->VAR16[((VAR5 / 4) * VAR2->VAR8->VAR9 + VAR12) / 4].VAR18;
                }
            }
            FUN5(VAR2, VAR12, VAR5, &VAR6);
            ++VAR12;
        }
    }