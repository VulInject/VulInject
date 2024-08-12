static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4;
    FUN2(VAR4, &VAR2->VAR5, VAR6)
    {
        if (VAR4->VAR7->VAR8)
        {
            VAR4->VAR7->FUN1(VAR4);
        }
    }
}