static int FUN1(VAR1 *VAR2)
{
    VAR2->VAR3 = VAR2->VAR4.VAR5 * 4 + 4;
    VAR2->VAR6 = FUN2(VAR2->VAR4.VAR7 * VAR2->VAR4.VAR8 * sizeof(*VAR2->VAR6));
    VAR2->VAR9 = FUN2(VAR2->VAR4.VAR7 * VAR2->VAR4.VAR8 * sizeof(*VAR2->VAR9));
    VAR2->VAR10 = FUN2(VAR2->VAR4.VAR7 * VAR2->VAR4.VAR8 * sizeof(*VAR2->VAR10));
    VAR2->VAR11 = FUN2(VAR2->VAR3 * 4 * 2 * sizeof(*VAR2->VAR11));
    VAR2->VAR12 = FUN3(VAR2->VAR4.VAR7 * VAR2->VAR4.VAR8 * sizeof(*VAR2->VAR12));
    if (!(VAR2->VAR6 && VAR2->VAR9 && VAR2->VAR10 && VAR2->VAR11 && VAR2->VAR12))
    {
        FUN4(VAR2);
        return FUN5(VAR13);
    }
    VAR2->VAR14 = VAR2->VAR11 + VAR2->VAR3 * 4;
    return 0;
}