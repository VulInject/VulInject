static int FUN1(VAR1 *VAR2)
{
    int VAR3, VAR4, VAR5;
    const VAR6 *VAR7 = VAR2->VAR8 + VAR2->VAR9;
    int VAR10, VAR11;
    int VAR12 = 0;
    for (VAR3 = 0; VAR3 < VAR2->VAR9; VAR3++)
    {
        if (VAR2->VAR8[VAR3] == 0x0f)
        {
            const VAR6 *VAR13 = VAR2->VAR8 + VAR3;
            uint8_t VAR14[6] = {0};
            int VAR15 = 255;
            for (VAR4 = 0; VAR13 + 6 < VAR7; VAR4++)
            {
                if (*VAR13 != 0x0f)
                    break;
                VAR10 = VAR13[1];
                VAR11 = FUN2(VAR13 + 4);
                if (VAR10 == 0x80)
                {
                    ;
                }
                else if (VAR10 >= 0x10 && VAR10 <= 0x14)
                {
                    VAR14[VAR10 - 0x10]++;
                }
                else
                    break;
                VAR13 += 6 + VAR11;
            }
            for (VAR5 = 0; VAR5 < 4; VAR5++)
            {
                VAR15 = FUN3(VAR15, VAR14[VAR5]);
            }
            if (VAR15 && VAR4 > VAR12)
                VAR12 = VAR4;
        }
    }
    if (VAR12 > 5)
        return VAR16;
    return 0;
}