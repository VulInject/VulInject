void FUN1(VAR1 *VAR2, int VAR3, int VAR4, VAR5 *VAR6, VAR5 *VAR7)
{
    int VAR8, VAR9, VAR10;
    for (VAR8 = VAR3; VAR8 < VAR4; VAR8++)
    {
        VAR6[VAR8] = (3072 - (VAR2[VAR8] << 7));
    }
    VAR9 = VAR3;
    VAR10 = VAR11[VAR3];
    do
    {
        int VAR12 = VAR6[VAR9++];
        int VAR13 = FUN2(VAR14[VAR10 + 1], VAR4);
        for (; VAR9 < VAR13; VAR9++)
        {
            int VAR15 = FUN2(FUN3(VAR12 - VAR6[VAR9]) >> 1, 255);
            VAR12 = FUN4(VAR12, VAR6[VAR9]) + VAR16[VAR15];
        }
        VAR7[VAR10] = VAR12;
        VAR10++;
    } while (VAR4 > VAR14[VAR10]);
}