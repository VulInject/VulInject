static void FUN1(TraceEventID VAR1, uint64_t VAR2, uint64_t VAR3, uint64_t VAR4, uint64_t VAR5, uint64_t VAR6, uint64_t VAR7)
{
    VAR8 *VAR9 = &VAR10[VAR11];
    if (!VAR12[VAR1].VAR13)
    {
        return;
    }
    VAR9->VAR1 = VAR1;
    VAR9->VAR14 = FUN2();
    VAR9->VAR2 = VAR2;
    VAR9->VAR3 = VAR3;
    VAR9->VAR4 = VAR4;
    VAR9->VAR5 = VAR5;
    VAR9->VAR6 = VAR6;
    VAR9->VAR7 = VAR7;
    if (++VAR11 == VAR15)
    {
        FUN3();
    }
}