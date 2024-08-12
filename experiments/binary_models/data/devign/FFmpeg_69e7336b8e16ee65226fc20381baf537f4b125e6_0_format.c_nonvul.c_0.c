VAR1 *FUN1(const char *VAR2)
{
    VAR1 *VAR3 = NULL;
    while ((VAR3 = FUN2(VAR3)))
        if (FUN3(VAR2, VAR3->VAR4))
            return VAR3;
    return NULL;
}