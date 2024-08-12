VAR1 *FUN1(char *VAR2)
{
    if (VAR2)
    {
        struct VAR3 *VAR4;
        FUN2(VAR4, &VAR5, VAR6)
        {
            if (strcmp(VAR4->VAR7.VAR8, VAR2) == 0)
            {
                return &VAR4->VAR7;
            }
        }
    }
    return NULL;
}