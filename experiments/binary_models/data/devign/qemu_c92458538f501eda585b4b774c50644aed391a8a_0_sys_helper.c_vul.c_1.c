void FUN1(VAR1 *VAR2, uint64_t VAR3)
{
    if (VAR3)
    {
        VAR2->VAR4 = VAR3;
        FUN2(VAR2->VAR5, VAR3);
    }
    else
    {
        FUN3(VAR2->VAR5);
    }
}