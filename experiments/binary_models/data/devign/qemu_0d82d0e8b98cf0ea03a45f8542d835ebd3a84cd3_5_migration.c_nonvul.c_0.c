static VAR1 FUN1(void *VAR2, int64_t VAR3)
{
    VAR4 *VAR5 = VAR2;
    if (FUN2(VAR5->VAR6))
    {
        goto VAR7;
    }
    if (VAR3 > VAR8)
    {
        VAR3 = VAR8;
    }
    VAR5->VAR9 = VAR3 / 10;
VAR7:
    return VAR5->VAR9;
}