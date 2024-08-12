static VAR1 FUN1(VAR2 *VAR3, size_t VAR4)
{
    ssize_t VAR5 = 0;
    char VAR6[1024];
    char *VAR7;
    VAR7 = sizeof(VAR6) < VAR4 ? VAR6 : FUN2(FUN3(65536, VAR4));
    while (VAR4 > 0)
    {
        ssize_t VAR8 = FUN4(VAR3, VAR7, FUN3(65536, VAR4));
        if (VAR8 <= 0)
        {
            goto VAR9;
        }
        assert(VAR8 <= VAR4);
        VAR4 -= VAR8;
        VAR5 += VAR8;
    }
VAR9:
    if (VAR7 != VAR6)
    {
        FUN5(VAR7);
    }
    return VAR5;
}