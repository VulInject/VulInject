static void FUN1(VAR1 *VAR2, int VAR3, int VAR4, int VAR5, int VAR6)
{
    int VAR7;
    VAR6 += VAR4;
    VAR5 += (VAR3 % 16);
    VAR3 -= (VAR3 % 16);
    VAR3 = FUN2(VAR3, VAR2->VAR8.VAR9);
    VAR4 = FUN2(VAR4, VAR2->VAR8.VAR10);
    VAR5 = FUN2(VAR3 + VAR5, VAR2->VAR8.VAR9) - VAR3;
    VAR6 = FUN2(VAR6, VAR2->VAR8.VAR10);
    for (; VAR4 < VAR6; VAR4++)
        for (VAR7 = 0; VAR7 < VAR5; VAR7 += 16)
            FUN3(VAR2->VAR11[VAR4], (VAR3 + VAR7) / 16);
}