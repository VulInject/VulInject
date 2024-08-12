VAR1 *FUN1(VAR2 **VAR3)
{
    VAR1 *VAR4;
    VAR5 *VAR6;
    VAR4 = FUN2(VAR3);
    if (!VAR4)
    {
        return NULL;
    }
    VAR6 = FUN3();
    VAR4->VAR7 = FUN4(VAR6, "", &VAR8);
    VAR4->VAR7->VAR9 = VAR4;
    return VAR4;
}