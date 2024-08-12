static int FUN1(VAR1 *VAR2, int64_t VAR3, VAR4 *VAR5, int VAR6)
{
    VAR7 *VAR8 = VAR2->VAR9;
    int VAR10, VAR11;
    while (VAR6 > 0)
    {
        if (FUN2(VAR2, VAR3, VAR6, &VAR11))
        {
            VAR10 = FUN3(VAR2->VAR12, VAR8->VAR13 + VAR3 * 512, VAR5, VAR11 * 512);
            if (VAR10 != VAR11 * 512)
                return -1;
        }
        else
        {
            if (VAR2->VAR14)
            {
                VAR10 = FUN4(VAR2->VAR14, VAR3, VAR5, VAR11);
                if (VAR10 < 0)
                    return -1;
            }
            else
            {
                memset(VAR5, 0, VAR11 * 512);
            }
        }
        VAR6 -= VAR11;
        VAR3 += VAR11;
        VAR5 += VAR11 * 512;
    }
    return 0;
}