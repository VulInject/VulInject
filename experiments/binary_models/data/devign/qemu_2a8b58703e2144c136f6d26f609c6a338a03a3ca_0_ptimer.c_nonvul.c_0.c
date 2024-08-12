void FUN1(VAR1 *VAR2, int VAR3)
{
    bool VAR4 = !VAR2->VAR5;
    if (VAR4 && VAR2->VAR6 == 0)
    {
        if (!FUN2())
        {
            fprintf(VAR7, "");
        }
        return;
    }
    VAR2->VAR5 = VAR3 ? 2 : 1;
    if (VAR4)
    {
        VAR2->VAR8 = FUN3(VAR9);
        FUN4(VAR2);
    }
}