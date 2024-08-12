bool FUN1(VAR1 *VAR2, VAR1 *VAR3)
{
    while (VAR2 && VAR2 != VAR3)
    {
        VAR2 = VAR2->VAR4;
    }
    return VAR2 != NULL;
}