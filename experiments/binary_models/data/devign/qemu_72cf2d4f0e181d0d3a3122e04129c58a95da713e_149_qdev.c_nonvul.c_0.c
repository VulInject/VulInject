static VAR1 *FUN1(VAR2 *VAR3, char *VAR4)
{
    VAR1 *VAR5;
    FUN2(VAR5, &VAR3->VAR6, VAR7)
    {
        if (strcmp(VAR5->VAR8, VAR4) == 0)
        {
            return VAR5;
        }
    }
    return NULL;
}