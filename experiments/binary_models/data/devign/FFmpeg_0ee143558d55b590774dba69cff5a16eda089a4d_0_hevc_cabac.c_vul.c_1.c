int FUN1(VAR1 *VAR2)
{
    int VAR3 = 0;
    int VAR4 = 0;
    int VAR5 = 0;
    while (VAR3 < 5 && FUN2(VAR6[VAR7] + VAR5))
    {
        VAR3++;
        VAR5 = 1;
    }
    if (VAR3 >= 5)
    {
        int VAR8 = 0;
        while (VAR8 < VAR9 && FUN3(&VAR2->VAR10->VAR11))
        {
            VAR4 += 1 << VAR8;
            VAR8++;
        }
        if (VAR8 == VAR9)
            FUN4(VAR2->VAR12, VAR13, "", VAR8);
        while (VAR8--)
            VAR4 += FUN3(&VAR2->VAR10->VAR11) << VAR8;
    }
    return VAR3 + VAR4;
}