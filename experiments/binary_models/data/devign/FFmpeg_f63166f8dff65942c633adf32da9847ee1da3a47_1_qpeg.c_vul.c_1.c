static void FUN1(VAR1 *VAR2, VAR1 *VAR3, int VAR4, int VAR5, int VAR6, int VAR7)
{
    int VAR8;
    int VAR9;
    int VAR10, VAR11;
    int VAR12, copy;
    int VAR13 = 0;
    VAR7--;
    VAR3 = VAR3 + VAR7 * VAR5;
    while (VAR4 > 0)
    {
        VAR9 = *VAR2++;
        VAR4--;
        VAR12 = copy = 0;
        if (VAR9 == 0xFC)
            break;
        if (VAR9 >= 0xF8)
        {
            VAR10 = *VAR2++;
            VAR11 = *VAR2++;
            VAR4 -= 2;
            VAR12 = ((VAR9 & 0x7) << 16) + (VAR10 << 8) + VAR11 + 2;
        }
        else if (VAR9 >= 0xF0)
        {
            VAR10 = *VAR2++;
            VAR4--;
            VAR12 = ((VAR9 & 0xF) << 8) + VAR10 + 2;
        }
        else if (VAR9 >= 0xE0)
        {
            VAR12 = (VAR9 & 0x1F) + 2;
        }
        else if (VAR9 >= 0xC0)
        {
            VAR10 = *VAR2++;
            VAR11 = *VAR2++;
            VAR4 -= 2;
            copy = ((VAR9 & 0x3F) << 16) + (VAR10 << 8) + VAR11 + 1;
        }
        else if (VAR9 >= 0x80)
        {
            VAR10 = *VAR2++;
            VAR4--;
            copy = ((VAR9 & 0x7F) << 8) + VAR10 + 1;
        }
        else
        {
            copy = VAR9 + 1;
        }
        if (VAR12)
        {
            int VAR14;
            VAR14 = *VAR2++;
            VAR4--;
            for (VAR8 = 0; VAR8 < VAR12; VAR8++)
            {
                VAR3[VAR13++] = VAR14;
                if (VAR13 >= VAR6)
                {
                    VAR13 = 0;
                    VAR3 -= VAR5;
                }
            }
        }
        else
        {
            for (VAR8 = 0; VAR8 < copy; VAR8++)
            {
                VAR3[VAR13++] = *VAR2++;
                if (VAR13 >= VAR6)
                {
                    VAR13 = 0;
                    VAR3 -= VAR5;
                }
            }
            VAR4 -= copy;
        }
    }
}