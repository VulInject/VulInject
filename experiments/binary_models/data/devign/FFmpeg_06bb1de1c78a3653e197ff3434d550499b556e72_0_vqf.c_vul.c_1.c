static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    int VAR8;
    int VAR9 = (VAR6->VAR10 - VAR6->VAR11 + 7) >> 3;
    if (FUN2(VAR4, VAR9 + 2) < 0)
        return FUN3(VAR12);
    VAR4->VAR13 = FUN4(VAR2->VAR14);
    VAR4->VAR15 = 0;
    VAR4->VAR16 = 1;
    VAR4->VAR17[0] = 8 - VAR6->VAR11;
    VAR4->VAR17[1] = VAR6->VAR18;
    VAR8 = FUN5(VAR2->VAR14, VAR4->VAR17 + 2, VAR9);
    if (VAR8 <= 0)
    {
        FUN6(VAR4);
        return FUN3(VAR12);
    }
    VAR6->VAR18 = VAR4->VAR17[VAR9 + 1];
    VAR6->VAR11 = (VAR9 << 3) - VAR6->VAR10 + VAR6->VAR11;
    return VAR9 + 2;
}