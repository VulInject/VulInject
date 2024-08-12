static VAR1 FUN1(VAR2 *VAR3, int VAR4, VAR1 *VAR5, int VAR6, int VAR7)
{
    int VAR8;
    int VAR9, VAR10, VAR11;
    uint32_t VAR12;
    VAR11 = (1 << VAR4);
    VAR12 = 4 * VAR11;
    VAR10 = (VAR6 >> VAR4) - VAR7;
    for (VAR8 = 0; VAR8 < VAR11; VAR8++)
    {
        VAR9 = FUN2(VAR5[VAR8], VAR10);
        VAR3->VAR13[VAR8] = VAR9;
        VAR12 += FUN3(VAR5[VAR8], VAR10, VAR9);
        VAR10 = VAR6 >> VAR4;
    }
    VAR3->VAR4 = VAR4;
    return VAR12;
}