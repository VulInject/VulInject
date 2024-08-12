static void FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, int VAR6, int VAR7, int VAR8)
{
    int VAR9;
    VAR10 *VAR11 = VAR4->VAR12;
    struct VAR13 *VAR14 = &VAR11->VAR15;
    int VAR16 = FUN2(VAR4);
    int VAR17 = FUN3(VAR4);
    VAR8 += VAR6;
    VAR7 += (VAR5 % 16);
    VAR5 -= (VAR5 % 16);
    VAR5 = FUN4(VAR5, VAR16);
    VAR6 = FUN4(VAR6, VAR17);
    VAR7 = FUN4(VAR5 + VAR7, VAR16) - VAR5;
    VAR8 = FUN4(VAR8, VAR17);
    for (; VAR6 < VAR8; VAR6++)
        for (VAR9 = 0; VAR9 < VAR7; VAR9 += 16)
            FUN5((VAR5 + VAR9) / 16, VAR14->VAR18[VAR6]);
}