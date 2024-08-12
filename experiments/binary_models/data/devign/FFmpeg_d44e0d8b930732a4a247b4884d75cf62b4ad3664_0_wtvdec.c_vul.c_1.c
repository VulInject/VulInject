static int FUN1(VAR1 *VAR2, uint64_t VAR3)
{
    VAR4 *VAR5 = VAR2->VAR5;
    int VAR6;
    for (VAR6 = 0; VAR6 < VAR2->VAR7; VAR6++)
    {
        if (VAR2->VAR8[VAR6].VAR9 > VAR3)
        {
            int VAR10 = FUN2(VAR5, VAR2->VAR8[VAR6].VAR9, VAR11);
            if (VAR10 < 0)
                return VAR10;
            VAR2->VAR12 = VAR2->VAR8[VAR6].VAR13;
            return 0;
        }
    }
    return FUN3(VAR14);
}