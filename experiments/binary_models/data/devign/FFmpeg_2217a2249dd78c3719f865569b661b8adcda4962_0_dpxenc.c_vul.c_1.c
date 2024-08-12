static void FUN1(VAR1 *VAR2, const VAR3 *VAR4, VAR5 *VAR6)
{
    VAR7 *VAR8 = VAR2->VAR9;
    const VAR5 *VAR10 = VAR4->VAR11[0];
    int VAR12, VAR13;
    for (VAR13 = 0; VAR13 < VAR2->VAR14; VAR13++)
    {
        for (VAR12 = 0; VAR12 < VAR2->VAR15; VAR12++)
        {
            int VAR16;
            if (VAR8->VAR17)
            {
                VAR16 = ((FUN2(VAR10 + 6 * VAR12 + 4) & 0xFFC0) >> 4) | ((FUN2(VAR10 + 6 * VAR12 + 2) & 0xFFC0) << 6) | ((FUN2(VAR10 + 6 * VAR12 + 0) & 0xFFC0) << 16);
            }
            else
            {
                VAR16 = ((FUN3(VAR10 + 6 * VAR12 + 4) & 0xFFC0) >> 4) | ((FUN3(VAR10 + 6 * VAR12 + 2) & 0xFFC0) << 6) | ((FUN3(VAR10 + 6 * VAR12 + 0) & 0xFFC0) << 16);
            }
            FUN4(VAR6, VAR16);
            VAR6 += 4;
        }
        VAR10 += VAR4->VAR18[0];
    }
}