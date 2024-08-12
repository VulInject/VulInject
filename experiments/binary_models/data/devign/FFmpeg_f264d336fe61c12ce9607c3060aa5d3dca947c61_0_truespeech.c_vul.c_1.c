static void FUN1(VAR1 *VAR2, int VAR3)
{
    int16_t VAR4[146 + 60], *VAR5, *VAR6;
    const VAR7 *VAR8;
    int VAR9, VAR10, VAR11;
    VAR10 = VAR2->VAR12[VAR3];
    if (VAR10 == 127)
    {
        memset(VAR2->VAR13, 0, 60 * sizeof(*VAR2->VAR13));
        return;
    }
    for (VAR9 = 0; VAR9 < 146; VAR9++)
        VAR4[VAR9] = VAR2->VAR14[VAR9];
    VAR11 = (VAR10 / 25) + VAR2->VAR15[VAR3 >> 1] + 18;
    VAR5 = VAR4 + 145 - VAR11;
    VAR6 = VAR4 + 146;
    VAR8 = (const VAR7 *)VAR16 + (VAR10 % 25) * 2;
    for (VAR9 = 0; VAR9 < 60; VAR9++)
    {
        VAR10 = (VAR5[0] * VAR8[0] + VAR5[1] * VAR8[1] + 0x2000) >> 14;
        VAR5++;
        VAR2->VAR13[VAR9] = VAR10;
        VAR6[VAR9] = VAR10;
    }