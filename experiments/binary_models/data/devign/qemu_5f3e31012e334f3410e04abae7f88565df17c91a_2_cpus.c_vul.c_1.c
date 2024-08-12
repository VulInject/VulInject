VAR1 FUN1(void)
{
    if (VAR2)
    {
        return FUN2();
    }
    if (!VAR3.VAR4)
    {
        return VAR3.VAR5;
    }
    else
    {
        int64_t VAR6;
        VAR6 = FUN3();
        if (VAR3.VAR7 > VAR6)
        {
            VAR3.VAR5 += VAR3.VAR7 - VAR6;
        }
        VAR3.VAR7 = VAR6;
        return VAR6 + VAR3.VAR5;
    }
}