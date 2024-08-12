static int FUN1(VAR1 *VAR2)
{
    const char *VAR3 = VAR2->VAR4;
    const char *VAR5 = VAR2->VAR4 + VAR2->VAR6;
    if (FUN2(VAR3) == 0xEFBBBF)
        VAR3 += 3;
    while (VAR3 < VAR5)
    {
        while (FUN3(*VAR3))
            VAR3++;
        if (*VAR3 != '' && *VAR3 != '')
        {
            if (FUN4(VAR3))
                return VAR7 + 1;
            return 0;
        }
        VAR3 += strcspn(VAR3, "") + 1;
    }
    return 0;
}