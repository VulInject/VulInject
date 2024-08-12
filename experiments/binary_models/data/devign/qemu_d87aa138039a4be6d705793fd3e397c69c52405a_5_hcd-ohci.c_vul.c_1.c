static void FUN1(const char *VAR1, const VAR2 *VAR3, size_t VAR4)
{
    bool VAR5 = !!FUN2(VAR6);
    bool VAR7 = !!FUN2(VAR8);
    const int VAR9 = 16;
    int VAR10;
    char VAR11[3 * VAR9 + 1];
    char *VAR12 = VAR11;
    if (!VAR7 && !VAR5)
    {
        return;
    }
    for (VAR10 = 0;; VAR10++)
    {
        if (VAR10 && (!(VAR10 % VAR9) || (VAR10 == VAR4)))
        {
            if (!VAR7)
            {
                FUN3(VAR1, VAR11);
                break;
            }
            FUN4(VAR1, VAR11);
            VAR12 = VAR11;
            *VAR12 = 0;
        }
        if (VAR10 == VAR4)
        {
            break;
        }
        VAR12 += sprintf(VAR12, "", VAR3[VAR10]);
    }
}