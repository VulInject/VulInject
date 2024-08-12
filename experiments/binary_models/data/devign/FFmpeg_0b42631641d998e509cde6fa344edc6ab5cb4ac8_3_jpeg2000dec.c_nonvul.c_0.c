static int FUN1(VAR1 *VAR2)
{
    uint32_t VAR3, VAR4;
    int VAR5 = 0, VAR6 = 10;
    while (!VAR5 && VAR6 && FUN2(&VAR2->VAR7) >= 8)
    {
        VAR3 = FUN3(&VAR2->VAR7);
        VAR4 = FUN3(&VAR2->VAR7);
        if (VAR4 == VAR8)
        {
            VAR5 = 1;
        }
        else
        {
            if (FUN2(&VAR2->VAR7) < VAR3 - 8)
                return 0;
            FUN4(&VAR2->VAR7, VAR3 - 8);
            VAR6--;
        }
    }
    if (VAR5)
        return 1;
    return 0;
}