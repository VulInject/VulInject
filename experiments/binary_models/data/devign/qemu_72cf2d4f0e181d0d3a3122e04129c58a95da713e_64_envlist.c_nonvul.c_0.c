FUN1(void)
{
    VAR1 *VAR2;
    if ((VAR2 = malloc(sizeof(*VAR2))) == NULL)
        return (NULL);
    FUN2(&VAR2->VAR3);
    VAR2->VAR4 = 0;
    return (VAR2);
}