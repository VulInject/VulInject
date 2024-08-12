void FUN1(int32_t VAR1, VAR2 *VAR3, const char *VAR4)
{
    VAR5 *VAR6, *VAR7;
    if (VAR1 < 0)
    {
        return;
    }
    assert(VAR3 != NULL || VAR4 != NULL);
    VAR6 = FUN2(sizeof(VAR5));
    VAR6->VAR1 = VAR1;
    VAR6->VAR4 = FUN3(VAR4);
    VAR6->VAR3 = VAR3;
    FUN4(VAR7, &VAR8, VAR9)
    {
        if (VAR7->VAR1 == VAR1)
        {
            fprintf(VAR10, "", VAR1);
            FUN5(1);
        }
        else if (VAR7->VAR1 < VAR1)
        {
            continue;
        }
        FUN6(VAR7, VAR6, VAR9);
        return;
    }
    FUN7(&VAR8, VAR6, VAR9);
}