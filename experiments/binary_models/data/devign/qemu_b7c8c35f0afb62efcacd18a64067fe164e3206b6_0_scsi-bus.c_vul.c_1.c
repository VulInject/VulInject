static char *FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR3, VAR5, VAR2);
    VAR1 *VAR6 = VAR2->VAR7->VAR8;
    char *VAR9 = NULL;
    if (VAR6 && VAR6->VAR7 && VAR6->VAR7->VAR10->VAR11)
    {
        VAR9 = VAR6->VAR7->VAR10->FUN3(VAR6);
    }
    if (VAR9)
    {
        return FUN4("", VAR9, VAR4->VAR12, VAR4->VAR9, VAR4->VAR13);
    }
    else
    {
        return FUN4("", VAR4->VAR12, VAR4->VAR9, VAR4->VAR13);
    }
}