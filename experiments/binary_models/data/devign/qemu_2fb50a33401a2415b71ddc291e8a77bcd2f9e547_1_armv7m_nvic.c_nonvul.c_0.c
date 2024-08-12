static void FUN1(void *VAR1, int VAR2, int VAR3)
{
    VAR4 *VAR5 = VAR1;
    VAR6 *VAR7;
    VAR2 += VAR8;
    assert(VAR2 >= VAR8 && VAR2 < VAR5->VAR9);
    FUN2(VAR2, VAR3);
    VAR7 = &VAR5->VAR10[VAR2];
    if (VAR3 != VAR7->VAR3)
    {
        VAR7->VAR3 = VAR3;
        if (VAR3)
        {
            FUN3(VAR5, VAR2, false);
        }
    }
}