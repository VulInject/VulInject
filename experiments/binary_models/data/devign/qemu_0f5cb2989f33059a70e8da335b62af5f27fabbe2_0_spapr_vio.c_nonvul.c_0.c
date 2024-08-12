static void FUN1(VAR1 *VAR2)
{
    size_t VAR3 = (VAR2->VAR4 >> VAR5) * sizeof(VAR6);
    if (VAR3)
    {
        VAR2->VAR7 = FUN2(VAR2->VAR8, VAR2->VAR4, &VAR2->VAR9);
        if (!VAR2->VAR7)
        {
            VAR2->VAR7 = FUN3(VAR3);
        }
    }
}