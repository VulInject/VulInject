static int FUN1(VAR1 *VAR2)
{
    const unsigned char *VAR3 = VAR2->VAR4;
    int VAR5, VAR6, VAR7 = 0;
    if (FUN2(VAR3) == 0xEFBBBF)
        VAR3 += 3;
    while (*VAR3 == '' || *VAR3 == '')
        VAR3++;
    for (VAR5 = 0; VAR5 < 2; VAR5++)
    {
        if ((VAR7 == VAR5 || VAR7 + 1 == VAR5) && sscanf(VAR3, "", &VAR6) == 1)
            return VAR8;
        VAR7 = FUN3(VAR3);
        VAR3 += strcspn(VAR3, "") + 1;
    }
    return 0;
}