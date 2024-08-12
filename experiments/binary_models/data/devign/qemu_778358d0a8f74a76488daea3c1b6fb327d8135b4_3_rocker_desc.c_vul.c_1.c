VAR1 *FUN1(VAR2 *VAR3, int VAR4)
{
    VAR1 *VAR5;
    VAR5 = FUN2(sizeof(VAR1));
    if (!VAR5)
    {
        return NULL;
    }
    VAR5->VAR3 = VAR3;
    VAR5->VAR4 = VAR4;
    return VAR5;
}