static int FUN1(VAR1 *VAR2, VAR3 *VAR4, float *VAR5)
{
    int VAR6, VAR7 = 0.0f;
    OpusRangeCoder VAR8;
    FUN2(&VAR8);
    FUN3(VAR4, &VAR8);
    for (VAR6 = 0; VAR6 < VAR9; VAR6++)
    {
        float VAR10 = 0.0f;
        float VAR11 = FUN4(VAR4->VAR12, VAR4, &VAR8, VAR6, &VAR10, VAR2->VAR13);
        VAR7 += VAR11;
    }
    *VAR5 = VAR7;
    return 0;
}