static int FUN1(VAR1 *VAR2)
{
    const char *VAR3 = VAR2->VAR4, *VAR5 = VAR2->VAR4 + VAR2->VAR6;
    while (VAR3 < VAR5 && *VAR3 != '')
    {
        if (VAR3 + sizeof("") - 1 < VAR5 && FUN2(VAR3, "", NULL))
            return VAR7 / 2;
        while (VAR3 < VAR5 - 1 && *VAR3 != '')
            VAR3++;
        if (++VAR3 >= VAR5)
            break;
        if (*VAR3 == '')
            VAR3++;
    }
    return 0;
}