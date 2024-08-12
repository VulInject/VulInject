void FUN1(VAR1 *VAR2)
{
    VAR2->VAR3 = FUN2(VAR2->VAR4);
    VAR2->VAR5[0] = FUN2((VAR2->VAR4 * 2 + 1) * sizeof(VAR6));
    VAR2->VAR5[1] = FUN2((VAR2->VAR4 * 2 + 1) * sizeof(VAR6));
    VAR2->VAR7 = FUN2(VAR2->VAR4 * 2 * sizeof(*VAR2->VAR7));
    VAR2->VAR8 = FUN2((VAR2->VAR4 + 1) * 16);
    VAR2->VAR9 = FUN2(VAR2->VAR4 * 10);
    VAR2->VAR10 = FUN2(VAR2->VAR4 * 10);
    VAR2->VAR11 = FUN2(VAR2->VAR4 * VAR2->VAR12 * 4 * sizeof(VAR6));
    VAR2->VAR13 = FUN2(VAR2->VAR4 * VAR2->VAR12);
    VAR2->VAR14 = FUN3(64 * sizeof(VAR15));
}