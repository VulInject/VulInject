static void FUN1(VAR1 *VAR2, const VAR3 *VAR4, int VAR5)
{
    int VAR6, VAR7 = VAR2->VAR8, VAR9 = VAR2->VAR10;
    VAR11 *VAR12 = VAR2->VAR13[0] + VAR5 * VAR2->VAR14[0];
    VAR11 *VAR15 = VAR2->VAR13[1] + VAR5 * VAR2->VAR14[1];
    VAR11 *VAR16 = VAR2->VAR13[2] + VAR5 * VAR2->VAR14[2];
    for (VAR6 = 0; VAR6 < VAR9; VAR6 += 2)
    {
        *VAR12++ = VAR4[VAR6].VAR17.VAR18 + 16.5f;
        *VAR15++ = VAR4[VAR6].VAR17.VAR19 + 128.5f;
        *VAR16++ = VAR4[VAR6].VAR17.VAR20 + 128.5f;
        *VAR12++ = VAR4[VAR6 + 1].VAR17.VAR18 + 16.5f;
        if (VAR7 == VAR21)
        {
            *VAR15++ = VAR4[VAR6 + 1].VAR17.VAR19 + 128.5f;
            *VAR16++ = VAR4[VAR6 + 1].VAR17.VAR20 + 128.5f;
        }
    }
}