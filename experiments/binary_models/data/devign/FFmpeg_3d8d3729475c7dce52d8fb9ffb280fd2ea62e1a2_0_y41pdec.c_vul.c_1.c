static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    VAR7 *VAR8 = VAR3;
    VAR9 *VAR10 = VAR6->VAR3;
    VAR9 *VAR11, *VAR12, *VAR13;
    int VAR14, VAR15, VAR16;
    if (VAR6->VAR17 < 3LL * VAR2->VAR18 * VAR2->VAR19 / 2)
    {
        FUN2(VAR2, VAR20, "");
        return FUN3(VAR21);
    }
    if ((VAR16 = FUN4(VAR2, VAR8, 0)) < 0)
        return VAR16;
    VAR8->VAR22 = 1;
    VAR8->VAR23 = VAR24;
    for (VAR14 = VAR2->VAR18 - 1; VAR14 >= 0; VAR14--)
    {
        VAR11 = &VAR8->VAR3[0][VAR14 * VAR8->VAR25[0]];
        VAR12 = &VAR8->VAR3[1][VAR14 * VAR8->VAR25[1]];
        VAR13 = &VAR8->VAR3[2][VAR14 * VAR8->VAR25[2]];
        for (VAR15 = 0; VAR15 < VAR2->VAR19; VAR15 += 8)
        {
            *(VAR12++) = *VAR10++;
            *(VAR11++) = *VAR10++;
            *(VAR13++) = *VAR10++;
            *(VAR11++) = *VAR10++;
            *(VAR12++) = *VAR10++;
            *(VAR11++) = *VAR10++;
            *(VAR13++) = *VAR10++;
            *(VAR11++) = *VAR10++;
            *(VAR11++) = *VAR10++;
            *(VAR11++) = *VAR10++;
            *(VAR11++) = *VAR10++;
            *(VAR11++) = *VAR10++;
        }
    }
    *VAR4 = 1;
    return VAR6->VAR17;
}