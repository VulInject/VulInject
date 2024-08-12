static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    VAR1 *VAR6 = VAR2->VAR7;
    uint32_t VAR8;
    if (!VAR4->VAR9 && VAR6)
    {
        VAR8 = FUN2(VAR6, 0);
        if (VAR4->VAR10 != VAR8)
        {
            return 0;
        }
    }
    VAR4->VAR9 = true;
    return 1;
}