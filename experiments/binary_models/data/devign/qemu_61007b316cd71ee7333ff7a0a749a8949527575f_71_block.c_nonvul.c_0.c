void FUN1(void (*VAR1)(void *VAR2, const char *VAR3), void *VAR2)
{
    VAR4 *VAR5;
    int VAR6 = 0;
    int VAR7;
    const char **VAR8 = NULL;
    FUN2(VAR5, &VAR9, VAR10)
    {
        if (VAR5->VAR11)
        {
            bool VAR12 = false;
            int VAR7 = VAR6;
            while (VAR8 && VAR7 && !VAR12)
            {
                VAR12 = !strcmp(VAR8[--VAR7], VAR5->VAR11);
            }
            if (!VAR12)
            {
                VAR8 = FUN3(const char *, VAR8, VAR6 + 1);
                VAR8[VAR6++] = VAR5->VAR11;
            }
        }
    }
    FUN4(VAR8, VAR6, sizeof(VAR8[0]), VAR13);
    for (VAR7 = 0; VAR7 < VAR6; VAR7++)
    {
        FUN5(VAR2, VAR8[VAR7]);
    }
    FUN6(VAR8);
}