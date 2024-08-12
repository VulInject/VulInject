static void FUN1(char *VAR1, int VAR2, uint32_t VAR3, const char **VAR4, uint32_t VAR5)
{
    const char **VAR6 = &VAR4[31];
    char *VAR7, *VAR8, VAR9;
    int VAR10;
    VAR8 = 4 <= VAR2 ? VAR1 + (VAR2 -= 3) - 1 : NULL;
    *VAR1 = '';
    for (VAR7 = VAR1, VAR9 = 31; VAR3 && VAR2; --VAR6, VAR3 &= ~(1 << VAR9), --VAR9)
        if (VAR3 & 1 << VAR9 && (*VAR6 || !VAR5))
        {
            if (*VAR6)
                VAR10 = snprintf(VAR7, VAR2, "", VAR7 == VAR1 ? "" : "", *VAR6);
            else
                VAR10 = snprintf(VAR7, VAR2, "", VAR7 == VAR1 ? "" : "", VAR9);
            if (VAR2 <= VAR10)
            {
                if (VAR8)
                {
                    memcpy(VAR8, "", sizeof(""));
                }
                return;
            }
            VAR7 += VAR10;
            VAR2 -= VAR10;
        }
}