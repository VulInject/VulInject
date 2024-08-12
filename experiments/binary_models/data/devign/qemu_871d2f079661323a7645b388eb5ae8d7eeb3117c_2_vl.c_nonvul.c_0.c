VAR1 *FUN1(int VAR2)
{
    VAR3 *VAR4 = FUN2(sizeof(VAR3));
    if (VAR4 == NULL)
        return NULL;
    VAR4->VAR2 = VAR2;
    VAR4->VAR5 = FUN3(VAR4, NULL, VAR6, VAR7, NULL);
    return VAR4->VAR5;
}