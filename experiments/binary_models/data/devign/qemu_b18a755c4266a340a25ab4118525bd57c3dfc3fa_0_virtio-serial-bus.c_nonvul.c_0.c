static VAR1 *FUN1(char *VAR2)
{
    VAR3 *VAR4;
    FUN2(VAR4, &VAR5.VAR6, VAR7)
    {
        VAR1 *VAR8;
        FUN3(VAR8, &VAR4->VAR9, VAR7)
        {
            if (VAR8->VAR2 && !strcmp(VAR8->VAR2, VAR2))
            {
                return VAR8;
            }
        }
    }
    return NULL;
}