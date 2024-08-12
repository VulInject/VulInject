VAR1 *FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2();
    VAR1 *VAR5 = VAR2 ? FUN3(VAR2, VAR6) : FUN4(&VAR4->VAR7);
    while (VAR5 && VAR5->VAR8 == VAR9)
    {
        VAR5 = FUN3(VAR5, VAR6);
    }
    return VAR5;
}