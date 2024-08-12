void FUN1(VAR1 *VAR2, uint64_t VAR3, int VAR4)
{
    VAR2->VAR3 = VAR3;
    if (VAR4)
        VAR2->VAR5 = VAR3;
    if (VAR2->VAR6 && VAR4)
    {
        VAR2->VAR7 = FUN2(VAR8);
        FUN3(VAR2);
    }
}