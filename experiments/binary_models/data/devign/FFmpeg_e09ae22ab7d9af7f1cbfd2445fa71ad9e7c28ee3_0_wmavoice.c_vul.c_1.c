static void FUN1(VAR1 *VAR2, const VAR3 *VAR4, int VAR5, VAR6 *VAR7, int VAR8)
{
    int VAR9, VAR10;
    VAR10 = VAR9 = FUN2(VAR7);
    if (VAR10 < VAR8)
        VAR10 &= 7;
    VAR9 >>= 3;
    if ((VAR10 = FUN3(VAR10, VAR8)) > 0)
        FUN4(VAR2, VAR10, FUN5(VAR7, VAR10));
    FUN6(VAR2, VAR4 + VAR5 - VAR9, FUN3(VAR8 - VAR10, VAR9 << 3));