static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6)
{
    int VAR7, VAR8, VAR9, VAR10, VAR11, VAR12;
    VAR13 *VAR14, *VAR15;
    VAR12 = (VAR6->VAR16 << 2) * VAR4->VAR17 + (VAR6->VAR18 << 2);
    VAR15 = VAR4->VAR19[VAR2->VAR20] + VAR12;
    VAR10 = VAR6->VAR21[0];
    VAR9 = VAR6->VAR21[1];
    if ((VAR6->VAR16 << 2) + VAR10 < -1 || (VAR6->VAR18 << 2) + VAR9 < 0 || ((VAR6->VAR16 + VAR6->VAR22) << 2) + VAR10 > VAR4->VAR22 || ((VAR6->VAR18 + VAR6->VAR23) << 2) + VAR9 > VAR4->VAR23)
    {
        FUN2(VAR2->VAR24, VAR25, "");
        return VAR26;
    }
    VAR11 = VAR12 + VAR10 * VAR4->VAR17 + VAR9;
    VAR14 = VAR4->VAR19[VAR2->VAR20 ^ 1] + VAR11;
    VAR7 = VAR6->VAR22 << 2;
    for (VAR8 = VAR6->VAR23; VAR8 > 0;)
    {
        if (!((VAR6->VAR18 << 2) & 15) && VAR8 >= 4)
        {
            for (; VAR8 >= 4; VAR14 += 16, VAR15 += 16, VAR8 -= 4)
                VAR2->VAR27.VAR28[0][0](VAR15, VAR14, VAR4->VAR17, VAR7);
        }
        if (!((VAR6->VAR18 << 2) & 7) && VAR8 >= 2)
        {
            VAR2->VAR27.VAR28[1][0](VAR15, VAR14, VAR4->VAR17, VAR7);
            VAR8 -= 2;
            VAR14 += 8;
            VAR15 += 8;
        }
        else if (VAR8 >= 1)
        {
            VAR2->VAR27.VAR28[2][0](VAR15, VAR14, VAR4->VAR17, VAR7);
            VAR8--;
            VAR14 += 4;
            VAR15 += 4;
        }
    }
    return 0;
}