static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6)
{
    int VAR7, VAR8;
    if (!FUN2(VAR6))
        return 1;
    for (VAR8 = 7; VAR8 >= 0 && VAR6->VAR9[VAR8] == ''; VAR8--)
        ;
    for (VAR7 = 0; VAR7 <= VAR8; VAR7++)
    {
        if (VAR6->VAR9[VAR7] <= '' || VAR6->VAR9[VAR7] > 0x7f)
            return -1;
        else if (VAR2->VAR10)
            VAR4->VAR9[VAR7] = FUN3(VAR6->VAR9[VAR7]);
        else
            VAR4->VAR9[VAR7] = VAR6->VAR9[VAR7];
    }
    for (VAR8 = 2; VAR8 >= 0 && VAR6->VAR9[8 + VAR8] == ''; VAR8--)
    {
    }
    if (VAR8 >= 0)
    {
        VAR4->VAR9[VAR7++] = '';
        VAR4->VAR9[VAR7 + VAR8 + 1] = '';
        for (; VAR8 >= 0; VAR8--)
        {
            uint8_t VAR11 = VAR6->VAR9[8 + VAR8];
            if (VAR11 <= '' || VAR11 > 0x7f)
            {
                return -2;
            }
            else if (VAR2->VAR10)
            {
                VAR4->VAR9[VAR7 + VAR8] = FUN3(VAR11);
            }
            else
            {
                VAR4->VAR9[VAR7 + VAR8] = VAR11;
            }
        }
    }
    else
        VAR4->VAR9[VAR7 + VAR8 + 1] = '';
    VAR4->VAR12 = strlen((char *)VAR4->VAR9);
    return 0;
}