void FUN1(VAR1 *VAR2, VAR3 *VAR4, const char *VAR5, VAR6 **VAR7)
{
    int64_t VAR8;
    if (!FUN2(VAR7))
    {
        if (VAR2->VAR9)
        {
            VAR2->FUN3(VAR2, VAR4, VAR5, VAR7);
        }
        else
        {
            VAR8 = *VAR4;
            VAR2->FUN4(VAR2, &VAR8, VAR5, VAR7);
            *VAR4 = VAR8;
        }
    }
}