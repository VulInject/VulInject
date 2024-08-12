static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5)
{
    VAR6 *VAR7 = &VAR2->VAR8;
    int VAR9;
    uint32_t VAR10;
    VAR10 = VAR7->VAR10;
    VAR9 = 0;
    if (!VAR7->VAR11)
    {
        for (VAR9 = 0; VAR9 < VAR5; VAR9++)
        {
            VAR10 = (VAR10 << 8) | VAR4[VAR9];
            if (VAR10 >= VAR12 && VAR10 <= VAR13)
            {
                VAR9++;
                VAR7->VAR11 = 1;
                break;
            }
        }
    }
    if (VAR7->VAR11)
    {
        for (; VAR9 < VAR5; VAR9++)
        {
            VAR10 = (VAR10 << 8) | VAR4[VAR9];
            if ((VAR10 & 0xFFFFFF00) == 0x100)
            {
                if (VAR10 < VAR12 || VAR10 > VAR13)
                {
                    VAR7->VAR11 = 0;
                    VAR7->VAR10 = -1;
                    return VAR9 - 3;
                }
            }
        }
    }
    VAR7->VAR10 = VAR10;
    return VAR14;
}