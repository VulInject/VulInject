int FUN1(VAR1 *VAR2, vaddr VAR3, int VAR4, VAR5 **VAR6)
{
    VAR5 *VAR7;
    VAR7 = FUN2(sizeof(*VAR7));
    VAR7->VAR3 = VAR3;
    VAR7->VAR4 = VAR4;
    if (VAR4 & VAR8)
    {
        FUN3(&VAR2->VAR9, VAR7, VAR10);
    }
    else
    {
        FUN4(&VAR2->VAR9, VAR7, VAR10);
    }
    FUN5(VAR2, VAR3);
    if (VAR6)
    {
        *VAR6 = VAR7;
    }
    return 0;
}