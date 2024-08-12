bool FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR4;
    VAR1 *VAR5;
    bool VAR6 = false;
    FUN2(&VAR4->VAR7);
    for (VAR5 = VAR4->VAR8; VAR5 != NULL; VAR5 = VAR5->VAR9)
    {
        if (VAR5 == VAR2)
        {
            VAR6 = true;
            break;
        }
    }
    FUN3(&VAR4->VAR7);
    return VAR6;
}