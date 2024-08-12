VAR1 FUN1(VAR2 *VAR3, uint64_t VAR4, uint64_t VAR5)
{
    int64_t VAR6;
    uint64_t VAR7;
    FUN2(&VAR7, (VAR1 *)&VAR6, VAR4, VAR5);
    if (FUN3((VAR1)(VAR6 + 1) <= 1))
    {
        VAR3->VAR8 = 0;
    }
    else
    {
        VAR3->VAR9 = VAR3->VAR8 = 1;
    }
    return (VAR10)VAR7;
}