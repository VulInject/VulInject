VAR1 FUN1(VAR2 *VAR3, int64_t VAR4, int VAR5)
{
    if (VAR5 == VAR6)
    {
    }
    else if (VAR5 == VAR7)
    {
        VAR4 += FUN2(VAR3);
    }
    else
    {
        return -1;
    }
    if (VAR3->VAR8)
    {
        FUN3(VAR3);
        VAR3->VAR9 = VAR4;
    }
    else
    {
        VAR3->VAR9 = VAR4;
        VAR3->VAR10 = 0;
        VAR3->VAR11 = 0;
    }
    return VAR4;
}