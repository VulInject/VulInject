static inline VAR1 *FUN1(VAR2 *VAR3, unsigned int VAR4, const char *VAR5, int VAR6)
{
    int VAR7, VAR8, VAR9 = VAR3->VAR10.VAR11;
    VAR1 *VAR12 = NULL;
    VAR1 *VAR13 = NULL;
    if (VAR6)
    {
        VAR12 = FUN2(&(VAR3->VAR10));
        memset(VAR12->VAR14, 0x20, sizeof(VAR12->VAR14));
        memcpy(VAR12->VAR14, VAR5, strlen(VAR5));
        return VAR12;
    }
    VAR13 = FUN3(VAR3, VAR5);
    VAR7 = strlen(VAR5);
    for (VAR8 = VAR7 - 1; VAR8 > 0 && VAR5[VAR8] != ''; VAR8--)
        ;
    if (VAR8 > 0)
        VAR7 = (VAR8 > 8 ? 8 : VAR8);
    else if (VAR7 > 8)
        VAR7 = 8;
    VAR12 = FUN2(&(VAR3->VAR10));
    memset(VAR12->VAR14, 0x20, sizeof(VAR12->VAR14));
    memcpy(VAR12->VAR14, VAR5, VAR7);
    if (VAR8 > 0)
    {
        for (VAR7 = 0; VAR7 < 3 && VAR5[VAR8 + 1 + VAR7]; VAR7++)
        {
            VAR12->VAR14[8 + VAR7] = VAR5[VAR8 + 1 + VAR7];
        }
    }
    for (VAR7 = 10; VAR7 >= 0; VAR7--)
    {
        if (VAR7 == 10 || VAR7 == 7)
            for (; VAR7 > 0 && VAR12->VAR14[VAR7] == ''; VAR7--)
                ;
        if (VAR12->VAR14[VAR7] <= '' || VAR12->VAR14[VAR7] > 0x7f || strchr("":/\\[];,+='", VAR12->VAR14[VAR7]))
            VAR12->VAR14[VAR7] = '';
        else if (VAR12->VAR14[VAR7] >= '' && VAR12->VAR14[VAR7] <= '')
            VAR12->VAR14[VAR7] += '' - '';
    }
    while (1)
    {
        VAR1 *VAR15 = FUN4(&(VAR3->VAR10), VAR4);
        int VAR8;
        for (; VAR15 < VAR12; VAR15++)
            if (!FUN5(VAR15) && !memcmp(VAR15->VAR14, VAR12->VAR14, 11))
                break;
        if (VAR15 == VAR12)
            break;
        if (VAR12->VAR14[7] == '')
        {
            int VAR8;
            for (VAR8 = 6; VAR8 > 0 && VAR12->VAR14[VAR8] == ''; VAR8--)
                VAR12->VAR14[VAR8] = '';
        }
        for (VAR8 = 7; VAR8 > 0 && VAR12->VAR14[VAR8] == ''; VAR8--)
            VAR12->VAR14[VAR8] = '';
        if (VAR8 > 0)
        {
            if (VAR12->VAR14[VAR8] < '' || VAR12->VAR14[VAR8] > '')
                VAR12->VAR14[VAR8] = '';
            else
                VAR12->VAR14[VAR8]++;
        }
    }
    if (VAR13)
    {
        uint8_t VAR16 = FUN6(VAR12);
        VAR13 = FUN4(&(VAR3->VAR10), VAR9);
        while (VAR13 < VAR12 && FUN5(VAR13))
        {
            VAR13->VAR17[1] = VAR16;
            VAR13++;
        }
    }
    return VAR12;
}