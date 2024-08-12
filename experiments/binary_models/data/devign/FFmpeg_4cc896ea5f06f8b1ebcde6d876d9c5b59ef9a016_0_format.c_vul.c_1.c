void FUN1(VAR1 *VAR2)
{
    VAR1 **VAR3 = VAR4;
    VAR2->VAR5 = NULL;
    while (*VAR3 || FUN2((void *volatile *)VAR3, NULL, VAR2))
        VAR3 = &(*VAR3)->VAR5;
    VAR4 = &VAR2->VAR5;
}