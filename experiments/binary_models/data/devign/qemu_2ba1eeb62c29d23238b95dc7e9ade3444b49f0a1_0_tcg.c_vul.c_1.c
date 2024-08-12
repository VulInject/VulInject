int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    {
        extern int64_t VAR5;
        extern int VAR6;
        int VAR7;
        VAR7 = (VAR8 - VAR9);
        VAR5 += VAR7;
        if (VAR7 > VAR6)
            VAR6 = VAR7;
    }
    FUN2(VAR2, VAR4, 0, NULL);
    FUN3((unsigned long)VAR4, (unsigned long)VAR2->VAR10);
    return VAR2->VAR10 - VAR4;
}