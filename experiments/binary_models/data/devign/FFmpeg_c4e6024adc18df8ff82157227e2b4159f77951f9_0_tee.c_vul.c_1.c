static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    VAR1 *VAR6;
    unsigned VAR7, VAR8;
    for (VAR7 = 0; VAR7 < VAR4->VAR9; VAR7++)
    {
        VAR6 = VAR4->VAR10[VAR7].VAR2;
        for (VAR8 = 0; VAR8 < VAR6->VAR11; VAR8++)
        {
            VAR12 *VAR13, *VAR14 = VAR4->VAR10[VAR7].VAR15[VAR8];
            while (VAR14)
            {
                VAR13 = VAR14->VAR16;
                FUN2(VAR14);
                VAR14 = VAR13;
            }
        }
        FUN3(&VAR4->VAR10[VAR7].VAR17);
        FUN4(VAR6->VAR18);
        VAR6->VAR18 = NULL;
        FUN5(VAR6);
        VAR4->VAR10[VAR7].VAR2 = NULL;
    }