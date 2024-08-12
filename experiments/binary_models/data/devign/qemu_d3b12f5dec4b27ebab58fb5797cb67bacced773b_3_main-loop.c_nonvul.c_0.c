void FUN1(VAR1 *VAR2, void *VAR3)
{
    VAR4 **VAR5, *VAR6;
    for (VAR5 = &VAR7; *VAR5 != NULL; VAR5 = &(*VAR5)->VAR8)
    {
        VAR6 = *VAR5;
        if (VAR6->VAR2 == VAR2 && VAR6->VAR3 == VAR3)
        {
            *VAR5 = VAR6->VAR8;
            FUN2(VAR6);
            break;
        }
    }
}