static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    uint32_t VAR6;
    if (!VAR4->VAR7 && VAR2->VAR8)
    {
        VAR1 *VAR9 = VAR2->VAR8->VAR2;
        VAR6 = FUN2(VAR9, 0);
        if (VAR4->VAR10 != VAR6)
        {
            return 0;
        }
    }
    VAR4->VAR7 = true;
    return 1;
}