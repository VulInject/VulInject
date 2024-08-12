static int FUN1(VAR1 *VAR2, int VAR3)
{
    int VAR4, VAR5, VAR6;
    const VAR7 *VAR8;
    float VAR9, VAR10;
    VAR11 *VAR12, *VAR13, VAR14;
    const float *VAR15 = VAR16 + 60;
    const VAR11 *VAR17 = (const VAR11 *)VAR15;
    VAR8 = VAR2->VAR18[VAR2->VAR19 - VAR2->VAR20];
    VAR12 = (VAR11 *)VAR2->VAR21[VAR3];
    VAR13 = VAR12 + VAR2->VAR22;
    VAR10 = 0;
    if (VAR2->VAR23 == 1)
    {
        VAR4 = FUN2(&VAR2->VAR24, 5) + 10;
        VAR9 = VAR15[VAR4];
        VAR14 = VAR17[VAR4];
        VAR10 = VAR9;
        VAR5 = *VAR8++;
        switch (VAR5 & 3)
            do
            {
            case 0:
                *VAR12++ = VAR14;
            case 3:
                *VAR12++ = VAR14;
            case 2:
                *VAR12++ = VAR14;
            case 1:
                *VAR12++ = VAR14;
            } while ((VAR5 -= 4) > 0);
    }
    else
        VAR4 = 36;
    while (VAR12 < VAR13)
    {
        VAR6 = FUN3(&VAR2->VAR24, VAR2->VAR25.VAR26, VAR27, VAR28);
        if (VAR6 < 0)
        {
            FUN4(VAR2->VAR29, VAR30, "");
            return -1;
        }
        VAR4 += VAR6 - 60;
        if ((unsigned)VAR4 + 60 > FUN5(VAR16))
        {
            FUN4(VAR2->VAR29, VAR30, "", VAR4);
            return -1;
        }
        VAR9 = VAR15[VAR4];
        VAR14 = VAR17[VAR4];
        if (VAR9 > VAR10)
            VAR10 = VAR9;
        VAR5 = *VAR8++;
        switch (VAR5 & 3)
            do
            {
            case 0:
                *VAR12++ = VAR14;
            case 3:
                *VAR12++ = VAR14;
            case 2:
                *VAR12++ = VAR14;
            case 1:
                *VAR12++ = VAR14;
            } while ((VAR5 -= 4) > 0);
    }
    VAR2->VAR31[VAR3] = VAR10;
    return 0;
}