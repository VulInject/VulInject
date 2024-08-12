static void FUN1(VAR1 *VAR2, uint8_t VAR3[], const VAR4 *VAR5, unsigned VAR6, VAR7 *VAR8)
{
    Node VAR9[2 * VAR6], *VAR10 = &VAR9[VAR6];
    int VAR11, VAR12, VAR13;
    VAR10[0].VAR14 = 256;
    for (VAR13 = 0; VAR13 < VAR6 - 1; VAR13++)
    {
        VAR11 = VAR10[VAR13].VAR14 * VAR3[VAR13] >> 8;
        VAR12 = VAR10[VAR13].VAR14 * (255 - VAR3[VAR13]) >> 8;
        VAR9[VAR5[2 * VAR13]].VAR14 = VAR11 + !VAR11;
        VAR9[VAR5[2 * VAR13 + 1]].VAR14 = VAR12 + !VAR12;
    }
    FUN2(VAR2->VAR15, VAR8, VAR6, VAR9, VAR16, VAR17);