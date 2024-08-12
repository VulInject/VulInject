VAR1 *FUN1(VAR2 *VAR3)
{
    VAR1 *VAR4;
    FUN2(&VAR5);
    VAR4 = FUN3(&VAR6);
    if (VAR4)
    {
        FUN4(&VAR6, VAR7);
        VAR8--;
    }
    FUN5(&VAR5);
    if (!VAR4)
    {
        VAR4 = FUN6();
    }
    VAR4->VAR3 = VAR3;
    return VAR4;
}