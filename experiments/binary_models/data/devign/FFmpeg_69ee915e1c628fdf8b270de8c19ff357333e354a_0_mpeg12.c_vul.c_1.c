int FUN1(VAR1 *VAR2, const VAR3 *VAR4, int VAR5, VAR6 *VAR7)
{
    int VAR8;
    uint32_t VAR9 = VAR2->VAR9;
    if (VAR5 == 0)
        return 0;
    for (VAR8 = 0; VAR8 < VAR5; VAR8++)
    {
        FUN2(VAR2->VAR10 >= 0 && VAR2->VAR10 <= 4);
        if (VAR2->VAR10 & 1)
        {
            if (VAR9 == VAR11 && (VAR4[VAR8] & 0xF0) != 0x80)
                VAR2->VAR10--;
            else if (VAR9 == VAR11 + 2)
            {
                if ((VAR4[VAR8] & 3) == 3)
                    VAR2->VAR10 = 0;
                else
                    VAR2->VAR10 = (VAR2->VAR10 + 1) & 3;
            }
            VAR9++;
        }
        else
        {
            VAR8 = FUN3(VAR4 + VAR8, VAR4 + VAR5, &VAR9) - VAR4 - 1;
            if (VAR2->VAR10 == 0 && VAR9 >= VAR12 && VAR9 <= VAR13)
            {
                VAR8++;
                VAR2->VAR10 = 4;
            }
            if (VAR9 == VAR14)
            {
                VAR2->VAR10 = 0;
                VAR2->VAR9 = -1;
                return VAR8 + 1;
            }
            if (VAR2->VAR10 == 2 && VAR9 == VAR15)
                VAR2->VAR10 = 0;
            if (VAR2->VAR10 < 4 && VAR9 == VAR11)
                VAR2->VAR10++;
            if (VAR2->VAR10 == 4 && (VAR9 & 0xFFFFFF00) == 0x100)
            {
                if (VAR9 < VAR12 || VAR9 > VAR13)
                {
                    VAR2->VAR10 = 0;
                    VAR2->VAR9 = -1;
                    return VAR8 - 3;
                }
            }
            if (VAR2->VAR10 == 0 && VAR7 && VAR9 == VAR16)
            {
                FUN4(VAR7, VAR8 - 3, 1);
            }
        }
    }
    VAR2->VAR9 = VAR9;
    return VAR17;
}