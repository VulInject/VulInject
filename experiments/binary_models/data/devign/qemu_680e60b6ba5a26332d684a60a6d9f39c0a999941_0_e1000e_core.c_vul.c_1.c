FUN1(VAR1 *VAR2, int VAR3, uint32_t VAR4)
{
    int VAR5;
    VAR2->VAR6[VAR7] = VAR4 & VAR8;
    if (FUN2(VAR2->VAR9))
    {
        return;
    }
    for (VAR5 = 0; VAR5 < VAR10; VAR5++)
    {
        if (VAR2->VAR6[VAR7] & FUN3(VAR5))
        {
            FUN4(VAR2->VAR9, VAR5);
        }
    }
}