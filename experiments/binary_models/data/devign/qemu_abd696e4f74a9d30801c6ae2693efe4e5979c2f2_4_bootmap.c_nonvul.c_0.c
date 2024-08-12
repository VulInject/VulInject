static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = (void *)VAR2;
    VAR3 *VAR5 = (void *)VAR6;
    if (*VAR4 != *VAR5)
    {
        FUN2("", *VAR4);
        FUN3("");
    }
    return 1;
}