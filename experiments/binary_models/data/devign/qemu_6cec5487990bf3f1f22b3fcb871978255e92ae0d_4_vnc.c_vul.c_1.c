static void FUN1(VAR1 *VAR2, int VAR3, int VAR4, int VAR5, int VAR6)
{
    VAR7 *VAR8 = VAR2->VAR9;
    int VAR10;
    VAR6 += VAR4;
    VAR5 += (VAR3 % 16);
    VAR3 -= (VAR3 % 16);
    VAR3 = FUN2(VAR3, VAR8->VAR11);
    VAR4 = FUN2(VAR4, VAR8->VAR12);
    VAR5 = FUN2(VAR3 + VAR5, VAR8->VAR11) - VAR3;
    VAR6 = FUN2(VAR6, VAR8->VAR12);
    for (; VAR4 < VAR6; VAR4++)
        for (VAR10 = 0; VAR10 < VAR5; VAR10 += 16)
            FUN3(VAR8->VAR13[VAR4], (VAR3 + VAR10) / 16);
}