static int FUN1(VAR1 *VAR2, const VAR3 *VAR4, int VAR5)
{
    int VAR6;
    uint32_t VAR7;
    VAR8 *VAR9 = &VAR2->VAR9;
    VAR7 = VAR9->VAR7;
    if (VAR7 > 13)
        VAR7 = 7;
    for (VAR6 = 0; VAR6 < VAR5; VAR6++)
    {
        if (VAR7 == 7)
        {
            VAR6 += VAR2->VAR10.FUN2(VAR4 + VAR6, VAR5 - VAR6);
            if (VAR6 < VAR5)
                VAR7 = 2;
        }
        else if (VAR7 <= 2)
        {
            if (VAR4[VAR6] == 1)
                VAR7 ^= 5;
            else if (VAR4[VAR6])
                VAR7 = 7;
            else
                VAR7 >>= 1;
        }
        else if (VAR7 <= 5)
        {
            int VAR11 = VAR4[VAR6] & 0x1F;
            if (VAR11 == VAR12 || VAR11 == VAR13 || VAR11 == VAR14 || VAR11 == VAR15)
            {
                if (VAR9->VAR16)
                {
                    VAR6++;
                    goto VAR17;
                }
            }
            else if (VAR11 == VAR18 || VAR11 == VAR19 || VAR11 == VAR20)
            {
                if (VAR9->VAR16)
                {
                    VAR7 += 8;
                    continue;
                }
                else
                    VAR9->VAR16 = 1;
            }
            VAR7 = 7;
        }
        else
        {
            if (VAR4[VAR6] & 0x80)
                goto VAR17;
            VAR7 = 7;
        }
    }
    VAR9->VAR7 = VAR7;
    return VAR21;
VAR17:
    VAR9->VAR7 = 7;
    VAR9->VAR16 = 0;
    return VAR6 - (VAR7 & 5);
}