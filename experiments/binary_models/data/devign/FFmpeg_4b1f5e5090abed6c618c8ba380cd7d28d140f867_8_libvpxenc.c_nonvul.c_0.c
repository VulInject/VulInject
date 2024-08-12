static void FUN1(void *VAR1, struct VAR2 *VAR3)
{
    struct VAR2 **VAR4 = VAR1;
    while (*VAR4)
        VAR4 = &(*VAR4)->VAR5;
    *VAR4 = VAR3;
    VAR3->VAR5 = NULL;
}