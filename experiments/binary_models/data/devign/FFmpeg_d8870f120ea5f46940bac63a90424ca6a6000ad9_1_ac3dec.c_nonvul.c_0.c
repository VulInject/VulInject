static void FUN1(VAR1 *VAR2)
{
    int VAR3, VAR4;
    float VAR5, VAR6;
    for (VAR3 = 0; VAR3 < 256; VAR3++)
    {
        VAR5 = VAR6 = 0.0f;
        for (VAR4 = 0; VAR4 < VAR2->VAR7; VAR4++)
        {
            VAR5 += VAR2->VAR8[VAR4][VAR3] * VAR2->VAR9[VAR4][0];
            VAR6 += VAR2->VAR8[VAR4][VAR3] * VAR2->VAR9[VAR4][1];
        }
        VAR5 *= VAR2->VAR10[0];
        VAR6 *= VAR2->VAR10[1];
        if (VAR2->VAR11 == VAR12)
        {
            VAR2->VAR8[0][VAR3] = (VAR5 + VAR6) * VAR13;
        }
        else if (VAR2->VAR11 == VAR14)
        {
            VAR2->VAR8[0][VAR3] = VAR5;
            VAR2->VAR8[1][VAR3] = VAR6;
        }
    }
}