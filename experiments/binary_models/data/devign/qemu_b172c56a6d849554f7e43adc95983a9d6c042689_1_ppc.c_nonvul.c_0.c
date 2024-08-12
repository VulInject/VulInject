VAR1 FUN1(VAR2 *VAR3, uint32_t VAR4)
{
    VAR5 *VAR6;
    VAR6 = FUN2(sizeof(VAR5));
    if (VAR6 == NULL)
        return NULL;
    VAR3->VAR6 = VAR6;
    VAR6->VAR7 = FUN3(VAR8, &VAR9, VAR3);
    if (0)
    {
        VAR6->VAR10 = FUN3(VAR8, &VAR11, VAR3);
    }
    else
    {
        VAR6->VAR10 = NULL;
    }
    FUN4(VAR3, VAR4);
    return &VAR12;
}