static float FUN1(VAR1 *main, int VAR2, VAR1 *VAR3, int VAR4, int VAR5, int VAR6, void *VAR7)
{
    int VAR8 = 0, VAR9;
    float VAR10 = 0.0;
    int(*VAR11)[4] = VAR7;
    int(*VAR12)[4] = VAR11 + (VAR5 >> 2) + 3;
    VAR5 >>= 2;
    VAR6 >>= 2;
    for (VAR9 = 1; VAR9 < VAR6; VAR9++)
    {
        for (; VAR8 <= VAR9; VAR8++)
        {
            FUN2(void *, VAR11, VAR12);
            FUN3(&main[4 * VAR8 * VAR2], VAR2, &VAR3[4 * VAR8 * VAR4], VAR4, VAR11, VAR5);
        }
        VAR10 += FUN4(VAR11, VAR12, VAR5 - 1);
    }
    return VAR10 / ((VAR6 - 1) * (VAR5 - 1));
}