static void FUN1(VAR1 *VAR2)
{
    int VAR3, VAR4;
    for (VAR4 = 0; VAR4 < VAR2->VAR5; VAR4++)
        for (VAR3 = 0; VAR3 < 32; VAR3++)
        {
            int VAR6;
            int32_t VAR7 = 0;
            for (VAR6 = 0; VAR6 < VAR8; VAR6++)
            {
                int32_t VAR9 = FUN2(VAR2->VAR10[VAR4][VAR3][VAR6]);
                if (VAR7 < VAR9)
                    VAR7 = VAR9;
            }
            VAR2->VAR11[VAR4][VAR3] = FUN3(VAR7);
        }
    if (VAR2->VAR12)
    {
        int VAR6;
        int32_t VAR7 = 0;
        for (VAR6 = 0; VAR6 < VAR13; VAR6++)
            if (VAR7 < FUN2(VAR2->VAR14[VAR6]))
                VAR7 = FUN2(VAR2->VAR14[VAR6]);
        VAR2->VAR15 = FUN3(VAR7);
    }
}