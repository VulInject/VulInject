static inline VAR1 FUN1(uint32_t VAR2, uint32_t VAR3, const int *VAR4)
{
    int VAR5, VAR6 = 0, VAR7 = 0;
    for (VAR5 = VAR2 - 1; VAR5 >= 0; VAR5--)
    {
        const uint32_t VAR8 = FUN2(VAR2 - VAR5, VAR7 + FUN3(VAR4[VAR5]) + 1);
        VAR6 += FUN2(VAR2 - VAR5, VAR7) + (VAR4[VAR5] < 0) * VAR8;
        VAR7 += FUN3(VAR4[VAR5]);
    }
    FUN4(VAR7 == VAR3);
    return VAR6;
}