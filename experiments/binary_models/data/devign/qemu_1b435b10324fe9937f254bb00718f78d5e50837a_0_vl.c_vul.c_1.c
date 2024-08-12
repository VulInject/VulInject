void FUN1(VAR1 *VAR2)
{
    VAR1 **VAR3;
    if (VAR2->VAR4)
    {
        VAR3 = &VAR5;
        while (*VAR3 != VAR2)
            VAR3 = &(*VAR3)->VAR6;
        *VAR3 = VAR2->VAR6;
        VAR2->VAR4 = 0;
    }
}