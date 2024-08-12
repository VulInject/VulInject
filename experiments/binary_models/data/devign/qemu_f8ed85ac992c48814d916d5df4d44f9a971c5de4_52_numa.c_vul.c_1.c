static void FUN1(VAR1 *VAR2, VAR3 *VAR4, const char *VAR5, uint64_t VAR6)
{
    if (VAR7)
    {
        VAR8 *VAR9 = NULL;
        FUN2(VAR2, VAR4, VAR5, VAR6, false, VAR7, &VAR9);
        if (VAR9)
        {
            FUN3(VAR9);
            FUN4(VAR2, VAR4, VAR5, VAR6, &VAR10);
        }
        fprintf(VAR11, "");
        FUN5(1);
    }
    else
    {
        FUN4(VAR2, VAR4, VAR5, VAR6, &VAR10);
    }
    FUN6(VAR2);
}