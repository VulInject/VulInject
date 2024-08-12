static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    const VAR7 *VAR8 = VAR6->VAR3;
    int VAR9 = VAR6->VAR10;
    VAR11 *VAR12 = VAR2->VAR13;
    int VAR14, VAR15, VAR16, VAR17, VAR18, VAR19;
    VAR7 *VAR20;
    VAR21 *VAR22;
    FUN2(VAR2, "");
    if (VAR9 == 0)
    {
        VAR12->VAR23 = 0;
        return 0;
    }
    if (VAR9 < VAR12->VAR24)
        return 0;
    VAR9 = VAR12->VAR24;
    FUN3(&VAR12->VAR25, VAR8, VAR9 * 8);
    if (VAR12->VAR26)
    {
        FUN4(&VAR12->VAR25, 4);
        VAR14 = FUN5(&VAR12->VAR25, 4) - (VAR12->VAR23 <= 0);
    }
    else
    {
        VAR14 = 1;
    }
    VAR12->VAR27.VAR28 = VAR14 * VAR12->VAR29;
    if ((VAR19 = VAR2->FUN6(VAR2, &VAR12->VAR27)) < 0)
    {
        FUN7(VAR2, VAR30, "");
        return VAR19;
    }
    VAR22 = (VAR21 *)VAR12->VAR27.VAR3[0];
    if (VAR12->VAR26)
    {
        VAR15 = FUN5(&VAR12->VAR25, VAR12->VAR31 + 3);
        if (VAR12->VAR23 > 0)
        {
            if ((VAR12->VAR23 + ((VAR15 + 7) >> 3)) > VAR32)
                goto VAR33;
            VAR20 = VAR12->VAR34 + VAR12->VAR23;
            VAR18 = VAR15;
            while (VAR18 > 7)
            {
                *VAR20++ = (VAR35)(&VAR12->VAR25, 8);
                VAR18 -= 8;
            }
            if (VAR18 > 0)
            {
                *VAR20++ = (VAR35)(&VAR12->VAR25, VAR18) << (8 - VAR18);
            }
            FUN3(&VAR12->VAR25, VAR12->VAR34, VAR32 * 8);
            if (VAR12->VAR36 > 0)
                FUN4(&VAR12->VAR25, VAR12->VAR36);
            if (FUN8(VAR12, VAR22) < 0)
                goto VAR33;
            VAR22 += VAR12->VAR37 * VAR12->VAR29;
            VAR14--;
        }
        VAR17 = VAR15 + 4 + 4 + VAR12->VAR31 + 3;
        FUN3(&VAR12->VAR25, VAR8 + (VAR17 >> 3), (VAR32 - (VAR17 >> 3)) * 8);
        VAR18 = VAR17 & 7;
        if (VAR18 > 0)
            FUN4(&VAR12->VAR25, VAR18);
        VAR12->VAR38 = 1;
        for (VAR16 = 0; VAR16 < VAR14; VAR16++)
        {
            if (FUN8(VAR12, VAR22) < 0)
                goto VAR33;
            VAR22 += VAR12->VAR37 * VAR12->VAR29;
        }
        VAR17 = FUN9(&VAR12->VAR25) + ((VAR15 + 4 + 4 + VAR12->VAR31 + 3) & ~7);
        VAR12->VAR36 = VAR17 & 7;
        VAR17 >>= 3;
        VAR18 = VAR9 - VAR17;
        if (VAR18 > VAR32 || VAR18 < 0)
        {
            FUN7(VAR12->VAR2, VAR30, "", VAR18);
            goto VAR33;
        }
        VAR12->VAR23 = VAR18;
        memcpy(VAR12->VAR34, VAR8 + VAR17, VAR18);
    }
    else
    {
        if (FUN8(VAR12, VAR22) < 0)
            goto VAR33;
        VAR22 += VAR12->VAR37 * VAR12->VAR29;
    }
    *VAR4 = 1;
    *(VAR39 *)VAR3 = VAR12->VAR27;
    return VAR12->VAR24;
VAR33:
    VAR12->VAR23 = 0;
    return -1;