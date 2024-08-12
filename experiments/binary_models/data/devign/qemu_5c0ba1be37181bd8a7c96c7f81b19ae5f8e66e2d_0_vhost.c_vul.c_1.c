static void FUN1(struct VAR1 *VAR2, bool VAR3)
{
    struct VAR4 *VAR5 = VAR2->VAR5;
    if (!VAR5)
    {
        return;
    }
    VAR2->VAR5 = NULL;
    VAR2->VAR6 = 0;
    --VAR5->VAR7;
    if (VAR5->VAR7 == 0)
    {
        if (VAR2->VAR6 && VAR3)
        {
            FUN2(VAR2, 0, VAR2->VAR6 * VAR8 - 1);
        }
        if (VAR4 == VAR5)
        {
            FUN3(VAR5->VAR5);
            VAR4 = NULL;
        }
        else if (VAR9 == VAR5)
        {
            FUN4(VAR5->VAR5, VAR5->VAR10 * sizeof(*(VAR5->VAR5)), VAR5->VAR11);
            VAR9 = NULL;
        }
        FUN3(VAR5);
    }
}