static void FUN1(VAR1 *VAR2, int VAR3)
{
    int VAR4, VAR5;
    int32_t VAR6, VAR7;
    int VAR8, VAR9;
    for (VAR5 = 0; VAR5 < VAR2->VAR10; VAR5++)
    {
        if (!VAR2->VAR11[VAR5])
            continue;
        for (VAR4 = 0; VAR4 < VAR3; VAR4++)
        {
            VAR9 = VAR2->VAR12[VAR5];
            VAR7 = VAR2->VAR13[VAR5][VAR4];
            if (VAR4 == VAR2->VAR14[VAR5])
            {
                VAR2->VAR15[VAR5] = 1;
                FUN2(VAR2, VAR5);
            }
            for (VAR8 = VAR9; VAR8 >= 0; VAR8--)
            {
                VAR6 = FUN3(VAR2, VAR5, VAR8);
                VAR7 += VAR6;
                FUN4(VAR2, VAR5, VAR8, VAR7, VAR6);
            }
            if (VAR2->VAR15[VAR5])
            {
                --VAR2->VAR16[VAR5].VAR17;
                if (!VAR2->VAR16[VAR5].VAR17)
                    FUN5(VAR2, VAR5);
            }
            VAR2->VAR18[VAR5][VAR4] = VAR7;
        }
    }
}