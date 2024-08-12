static int FUN1(VAR1 *VAR2, VAR3 *VAR4, uint32_t VAR5, int VAR6)
{
    if (!FUN2(VAR2))
    {
        if (VAR4->VAR7 >= 256)
        {
            FUN3(NULL, VAR8, "");
            if (VAR6)
            {
                VAR4->VAR9[VAR4->VAR7] = VAR5;
                VAR4->VAR10[VAR4->VAR7] = VAR6;
            }
            else
            {
                VAR4->VAR9[VAR4->VAR7] = 0;
                VAR4->VAR10[VAR4->VAR7] = 0;
                VAR4->VAR11[VAR4->VAR7] = FUN4(VAR2, 8);
                VAR4->VAR7++;
                if (VAR4->VAR12 < VAR6)
                    VAR4->VAR12 = VAR6;
                return 0;
            }
            else
            {
                int VAR13;
                VAR6++;
                VAR13 = FUN1(VAR2, VAR4, VAR5, VAR6);
                if (VAR13)
                    return VAR13;
                return FUN1(VAR2, VAR4, VAR5 | (1 << (VAR6 - 1)), VAR6);