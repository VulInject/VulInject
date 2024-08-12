VAR1 FUN1(void)
{
    unsigned int VAR2 = FUN2(&VAR3);
    unsigned int VAR4;
    size_t VAR5;
    FUN3(&VAR6.VAR7);
    VAR5 = VAR6.VAR8;
    for (VAR4 = 0; VAR4 < VAR2; VAR4++)
    {
        const VAR9 *VAR10 = FUN2(&VAR11[VAR4]);
        size_t VAR12;
        VAR12 = FUN2(&VAR10->VAR13) - VAR10->VAR14;
        FUN4(VAR12 <= VAR10->VAR15);
        VAR5 += VAR12;
    }
    FUN5(&VAR6.VAR7);
    return VAR5;
}