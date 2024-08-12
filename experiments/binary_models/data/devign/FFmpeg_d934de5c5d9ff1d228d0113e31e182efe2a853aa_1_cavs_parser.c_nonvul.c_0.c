static int FUN1(VAR1 *VAR2, const VAR3 *VAR4, int VAR5)
{
    int VAR6, VAR7;
    uint32_t VAR8;
    VAR6 = VAR2->VAR9;
    VAR8 = VAR2->VAR8;
    VAR7 = 0;
    if (!VAR6)
    {
        for (VAR7 = 0; VAR7 < VAR5; VAR7++)
        {
            VAR8 = (VAR8 << 8) | VAR4[VAR7];
            if (VAR8 == VAR10 || VAR8 == VAR11)
            {
                VAR7++;
                VAR6 = 1;
                break;
            }
        }
    }
    if (VAR6)
    {
        if (VAR5 == 0)
            return 0;
        for (; VAR7 < VAR5; VAR7++)
        {
            VAR8 = (VAR8 << 8) | VAR4[VAR7];
            if ((VAR8 & 0xFFFFFF00) == 0x100)
            {
                if (VAR8 > VAR12)
                {
                    VAR2->VAR9 = 0;
                    VAR2->VAR8 = -1;
                    return VAR7 - 3;
                }
            }
        }
    }
    VAR2->VAR9 = VAR6;
    VAR2->VAR8 = VAR8;
    return VAR13;
}