int FUN1(VAR1 *VAR2, void *VAR3)
{
    VAR4 *VAR5 = VAR3;
    uint64_t VAR6;
    if (FUN2(VAR2, VAR7))
    {
        VAR6 = FUN3(VAR2, "", NULL);
        assert(VAR6 < VAR8);
        FUN4(VAR6, VAR5->VAR9);
    }
    FUN5(VAR2, VAR10, VAR3);
    return 0;
}