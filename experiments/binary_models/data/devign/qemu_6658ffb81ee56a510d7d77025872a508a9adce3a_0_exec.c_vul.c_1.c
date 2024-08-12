void FUN1(VAR1 *VAR2)
{
    VAR1 **VAR3;
    int VAR4;
    if (!VAR5)
    {
        VAR5 = VAR6;
        FUN2();
        FUN3();
    }
    VAR2->VAR7 = NULL;
    VAR3 = &VAR8;
    VAR4 = 0;
    while (*VAR3 != NULL)
    {
        VAR3 = (VAR1 **)&(*VAR3)->VAR7;
        VAR4++;
    }
    VAR2->VAR4 = VAR4;
    *VAR3 = VAR2;