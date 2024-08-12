static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR3 *VAR5, ptrdiff_t VAR6, int VAR7)
{
    FUN2(VAR8, VAR9, [64 * 2]);
    VAR8 *const VAR10 = VAR9 + 64;
    int VAR11 = 0, VAR12;
    FUN3(VAR7 == 8);
    VAR2->VAR13 = 0;
    VAR2->VAR14.FUN4(VAR9, VAR4, VAR5, VAR6);
    memcpy(VAR10, VAR9, 64 * sizeof(VAR8));
    VAR2->VAR15[0] = VAR2->FUN5(VAR2, VAR9, 0, VAR2->VAR16, &VAR12);
    VAR2->FUN6(VAR2, VAR9, 0, VAR2->VAR16);
    FUN7(VAR9);
    for (VAR12 = 0; VAR12 < 64; VAR12++)
        VAR11 += (VAR9[VAR12] - VAR10[VAR12]) * (VAR9[VAR12] - VAR10[VAR12]);
    return VAR11;
}