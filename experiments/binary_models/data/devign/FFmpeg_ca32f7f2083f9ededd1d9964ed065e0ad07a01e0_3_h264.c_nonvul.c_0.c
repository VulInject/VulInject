static void FUN1(VAR1 *VAR2)
{
    int VAR3, VAR4, VAR5, VAR6;
    for (VAR3 = 0; VAR3 < 6; VAR3++)
    {
        VAR2->VAR7[VAR3] = VAR2->VAR8[VAR3];
        for (VAR4 = 0; VAR4 < VAR3; VAR4++)
        {
            if (!memcmp(VAR2->VAR9.VAR10[VAR4], VAR2->VAR9.VAR10[VAR3], 16 * sizeof(VAR11)))
            {
                VAR2->VAR7[VAR3] = VAR2->VAR8[VAR4];
                break;
            }
        }
        if (VAR4 < VAR3)
            continue;
        for (VAR5 = 0; VAR5 < 52; VAR5++)
        {
            int VAR12 = VAR13[VAR5] + 2;
            int VAR14 = VAR15[VAR5];
            for (VAR6 = 0; VAR6 < 16; VAR6++)
                VAR2->VAR7[VAR3][VAR5][(VAR6 >> 2) | ((VAR6 << 2) & 0xF)] = ((VAR16)VAR17[VAR14][(VAR6 & 1) + ((VAR6 >> 2) & 1)] * VAR2->VAR9.VAR10[VAR3][VAR6]) << VAR12;
        }
    }
}