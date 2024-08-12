void *FUN1(void *VAR1, const char *VAR2, ...)
{
    char VAR3[256];
    void *VAR4 = VAR1;
    VAR5 *VAR6;
    int VAR7;
    va_list VAR8;
    FUN2(VAR8, VAR2);
    VAR7 = vsnprintf(VAR3, sizeof(VAR3), VAR2, VAR8);
    FUN3(VAR8);
    if (!VAR1 || VAR7 <= 0 || VAR7 >= sizeof(VAR3))
        return NULL;
    VAR9.VAR10 = FUN4(&VAR9.VAR11, VAR3);
    VAR9.VAR11->VAR12 = 1;
    VAR6 = &VAR9.VAR10->VAR13;
    if (VAR6->VAR1)
    {
        VAR5 *VAR14;
        do
        {
            if (VAR6->VAR1 == VAR1)
                return NULL;
            if (VAR6->VAR15)
                VAR4 = VAR6->VAR1;
            VAR14 = VAR6;
        } while ((VAR6 = VAR6->VAR16));
        VAR6 = VAR14->VAR16 = FUN5(sizeof(VAR5));
    }
    VAR6->VAR1 = VAR1;
    VAR6->VAR15 = 1;
    VAR6->VAR17 = VAR9.VAR18;
    VAR9.VAR19 = VAR6;
    if (VAR9.VAR18)
        VAR9.VAR20++;
    return VAR4;
}