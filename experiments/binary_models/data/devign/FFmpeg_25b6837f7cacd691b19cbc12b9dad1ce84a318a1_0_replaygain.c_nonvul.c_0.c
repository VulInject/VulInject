static VAR1 FUN1(const char *VAR2)
{
    char *VAR3;
    int VAR4 = 10000;
    int32_t VAR5 = 0;
    int VAR6 = 1;
    int VAR7;
    if (!VAR2)
        return VAR8;
    VAR2 += strspn(VAR2, "");
    if (*VAR2 == '')
        VAR6 = -1;
    VAR7 = FUN2(VAR2, &VAR3, 0);
    if (*VAR3++ == '')
    {
        while (FUN3(*VAR3) && VAR4)
        {
            VAR5 += VAR4 * (*VAR3 - '');
            VAR4 /= 10;
            VAR3++;
        }
    }
    if (FUN4(VAR7) > (VAR9 - VAR5) / 100000)
        return VAR8;
    return VAR7 * 100000 + VAR6 * VAR5;
}