static void FUN1(VAR1 *VAR2, int VAR3, int VAR4, int VAR5, int VAR6)
{
    VAR7 *VAR8 = FUN2(VAR2, VAR7, VAR2);
    struct VAR9 *VAR10 = &VAR8->VAR11;
    int VAR12 = FUN3(VAR8->VAR13);
    int VAR14 = FUN4(VAR8->VAR13);
    VAR5 += (VAR3 % VAR15);
    VAR3 -= (VAR3 % VAR15);
    VAR3 = FUN5(VAR3, VAR12);
    VAR4 = FUN5(VAR4, VAR14);
    VAR5 = FUN5(VAR3 + VAR5, VAR12) - VAR3;
    VAR6 = FUN5(VAR4 + VAR6, VAR14);
    for (; VAR4 < VAR6; VAR4++)
    {
        FUN6(VAR10->VAR16[VAR4], VAR3 / VAR15, FUN7(VAR5, VAR15));
    }
}