static void FUN1(void *VAR1)
{
    VAR2 *VAR3 = VAR1;
    uint64_t VAR4;
    if (!VAR3->VAR5)
    {
        return;
    }
    FUN2(VAR3->VAR6, &VAR4);
    VAR3->VAR4 = VAR4;
    if (VAR3->VAR7 == VAR8)
    {
        FUN3(VAR3);
    }
    else
    {
        assert(VAR3->VAR7 != VAR9);
        FUN4(VAR3);
    }
}