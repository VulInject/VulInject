static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6)
{
    int VAR7, VAR8, VAR9;
    for (VAR7 = 0; VAR7 < 4; VAR7++, VAR6 += VAR2->VAR10 - 4)
    {
        for (VAR8 = 0; VAR8 < 4; VAR8 += 2)
        {
            int VAR11 = FUN2(VAR4) << 1;
            if (VAR11 >= 81 * 2)
            {
                FUN3(VAR2->VAR12.VAR13, VAR14, "");
                return -1;
            }
            for (VAR9 = 0; VAR9 < 2; VAR9++)
            {
                int VAR15 = VAR6[-VAR2->VAR10] + 1;
                int VAR16 = VAR6[-1] + 1;
                *VAR6++ = VAR17[VAR15 * 90 + VAR16 * 9 + VAR18[VAR11 + VAR9]];
                if (VAR6[-1] == 9)
                {
                    FUN3(VAR2->VAR12.VAR13, VAR14, "");
                    return -1;
                }
            }
        }
    }
    return 0;
}