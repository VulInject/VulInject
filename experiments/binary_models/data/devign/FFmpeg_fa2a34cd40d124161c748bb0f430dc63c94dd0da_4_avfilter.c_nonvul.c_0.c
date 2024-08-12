int FUN1(VAR1 *VAR2)
{
    VAR1 **VAR3 = &VAR4;
    while (*VAR3)
        VAR3 = &(*VAR3)->VAR5;
    *VAR3 = VAR2;
    VAR2->VAR5 = NULL;
    return 0;
}