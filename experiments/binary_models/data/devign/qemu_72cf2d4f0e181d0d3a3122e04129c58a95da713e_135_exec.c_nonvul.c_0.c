void FUN1(VAR1 *VAR2)
{
    VAR1 **VAR3;
    int VAR4;
    FUN2();
    VAR2->VAR5 = NULL;
    VAR3 = &VAR6;
    VAR4 = 0;
    while (*VAR3 != NULL)
    {
        VAR3 = &(*VAR3)->VAR5;
        VAR4++;
    }
    VAR2->VAR4 = VAR4;
    VAR2->VAR7 = 0;
    FUN3(&VAR2->VAR8);
    FUN3(&VAR2->VAR9);
    *VAR3 = VAR2;
    FUN4();
    FUN5(VAR4, &VAR10, VAR2);
    FUN6("", VAR4, VAR11, VAR12, VAR13, VAR2);
}