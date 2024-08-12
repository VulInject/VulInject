static struct VAR1 *FUN1(void)
{
    struct VAR1 *VAR2;
    if ((VAR2 = FUN2(sizeof(*VAR2))) == NULL)
        return (NULL);
    VAR2->VAR3 = 0;
    FUN3(&VAR2->VAR4);
    return (VAR2);
}