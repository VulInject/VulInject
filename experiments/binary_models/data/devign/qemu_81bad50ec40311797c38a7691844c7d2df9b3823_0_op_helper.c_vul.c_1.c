VAR1 FUN1(VAR2 *VAR3)
{
    VAR2 *VAR4 = VAR5;
    target_ulong VAR6 = VAR3->VAR7->VAR8;
    do
    {
        if (VAR4 != VAR3 && !FUN2(VAR4))
        {
            VAR4->VAR7->VAR8 |= (1 << VAR9);
            FUN3(VAR4);
        }
        VAR4 = VAR4->VAR10;
    } while (VAR4);
    return VAR6;
}