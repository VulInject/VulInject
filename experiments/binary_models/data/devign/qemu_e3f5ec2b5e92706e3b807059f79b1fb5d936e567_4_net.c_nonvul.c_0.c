int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR4;
    VAR1 *VAR5;
    for (VAR5 = VAR4->VAR6; VAR5 != NULL; VAR5 = VAR5->VAR7)
    {
        if (VAR5 == VAR2)
        {
            continue;
        }
        if (!VAR5->VAR8 || VAR5->FUN2(VAR5))
        {
            return 1;
        }
    }
    return 0;
}