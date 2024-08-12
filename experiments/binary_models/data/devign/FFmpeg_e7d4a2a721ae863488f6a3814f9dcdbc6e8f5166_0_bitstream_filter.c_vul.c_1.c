VAR1 *FUN1(const char *VAR2)
{
    VAR3 *VAR4 = VAR5;
    while (VAR4)
    {
        if (!strcmp(VAR2, VAR4->VAR2))
        {
            VAR1 *VAR6 = FUN2(sizeof(VAR1));
            VAR6->VAR7 = VAR4;
            VAR6->VAR8 = FUN2(VAR4->VAR9);
            return VAR6;
        }
        VAR4 = VAR4->VAR10;
    }
    return NULL;
}