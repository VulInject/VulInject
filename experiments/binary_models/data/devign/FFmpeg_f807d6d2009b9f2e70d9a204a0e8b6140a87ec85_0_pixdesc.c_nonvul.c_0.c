void FUN1(void)
{
    int VAR1, VAR2;
    for (VAR1 = 0; VAR1 < FUN2(VAR3); VAR1++)
    {
        const VAR4 *VAR5 = &VAR3[VAR1];
        if (!VAR5->VAR6 && !VAR5->VAR7 && !VAR5->VAR8 && !VAR5->VAR9 && !VAR5->VAR10)
            continue;
        FUN3(VAR5->VAR8 <= 3);
        FUN3(VAR5->VAR9 <= 3);
        FUN3(VAR5->VAR7 <= 4);
        FUN3(VAR5->VAR6 && VAR5->VAR6[0]);
        FUN3((VAR5->VAR7 == 4 || VAR5->VAR7 == 2) == !!(VAR5->VAR10 & VAR11));
        FUN4(FUN5(VAR5->VAR6) == VAR1);
        for (VAR2 = 0; VAR2 < FUN2(VAR5->VAR12); VAR2++)
        {
            const VAR13 *VAR14 = &VAR5->VAR12[VAR2];
            if (VAR2 >= VAR5->VAR7)
            {
                FUN3(!VAR14->VAR15 && !VAR14->VAR16 && !VAR14->VAR17 && !VAR14->VAR18 && !VAR14->VAR19);
                continue;
            }
            if (VAR5->VAR10 & VAR20)
            {
                FUN3(VAR14->VAR16 >= VAR14->VAR19);
            }
            else
            {
                FUN3(8 * (VAR14->VAR16 + 1) >= VAR14->VAR19 + 1);
            }
        }
    }
}