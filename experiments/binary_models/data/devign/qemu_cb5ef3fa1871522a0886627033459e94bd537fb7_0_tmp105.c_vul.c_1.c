static int FUN1(VAR1 *VAR2, uint8_t VAR3)
{
    VAR4 *VAR5 = (VAR4 *)VAR2;
    if (!VAR5->VAR6++)
        VAR5->VAR7 = VAR3;
    else
    {
        if (VAR5->VAR6 <= 2)
            VAR5->VAR8[VAR5->VAR6 - 1] = VAR3;
        FUN2(VAR5);
    }
    return 0;
}