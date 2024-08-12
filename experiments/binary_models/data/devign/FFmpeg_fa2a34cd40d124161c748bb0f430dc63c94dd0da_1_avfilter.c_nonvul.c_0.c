static const VAR1 *FUN1(const VAR1 *VAR2)
{
    VAR3 *VAR4 = NULL;
    while (VAR2 && (VAR4 = FUN2(VAR4)))
        if (VAR4->VAR5 == VAR2)
            break;
    while ((VAR4 = FUN2(VAR4)))
        if (VAR4->VAR5)
            return VAR4->VAR5;
    return NULL;
}