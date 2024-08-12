static void FUN1(VAR1 *VAR2, int VAR3, int VAR4)
{
    const float VAR5 = (VAR2->VAR6 == 1 && VAR2->VAR7 == 2) ? 0.5f : 1.0f;
    float *VAR8 = VAR2->VAR9 + VAR3;
    int VAR10;
    VAR2->VAR11.VAR12[VAR3][0].VAR13 *= 2.0f;
    VAR2->VAR11.VAR12[VAR3][0].VAR14 = 0.0f;
    VAR2->VAR15.FUN2(&VAR2->VAR15, (VAR16 *)VAR2->VAR11.VAR12[VAR3]);
    for (VAR10 = 0; VAR10 < FUN3(VAR2->VAR17, 8); VAR10++)
    {
        VAR8[0] += VAR2->VAR11.VAR12[VAR3][VAR10].VAR13 * VAR5;
        VAR8[VAR2->VAR6] += VAR2->VAR11.VAR12[VAR3][VAR10].VAR14 * VAR5;
        VAR8 += 2 * VAR2->VAR6;
    }
}