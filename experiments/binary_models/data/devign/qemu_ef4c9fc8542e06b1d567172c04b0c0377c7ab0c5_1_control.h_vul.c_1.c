void FUN1(VAR1 *VAR2, VAR3 *VAR4, bool VAR5)
{
    TraceEventVCPUID VAR6;
    bool VAR7;
    assert(FUN2(VAR4));
    assert(FUN3(VAR4));
    VAR6 = FUN4(VAR4);
    VAR7 = FUN5(VAR6, VAR2->VAR8);
    if (VAR7 != VAR5)
    {
        if (VAR5)
        {
            VAR9++;
            FUN6(VAR6, VAR2->VAR8);
            (*VAR4->VAR10)++;
        }
        else
        {
            VAR9--;
            FUN7(VAR6, VAR2->VAR8);
            (*VAR4->VAR10)--;
        }
    }
}