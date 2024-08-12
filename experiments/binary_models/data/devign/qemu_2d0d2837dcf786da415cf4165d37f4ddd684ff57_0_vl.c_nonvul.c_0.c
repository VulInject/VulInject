static int FUN1(VAR1 *VAR2, void *VAR3)
{
    VAR4 *VAR5 = VAR3;
    return FUN2(VAR2, *VAR5) == NULL;
}