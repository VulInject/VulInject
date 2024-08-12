static int FUN1(VAR1 *VAR2, int VAR3, int VAR4)
{
    int VAR5, VAR6, VAR7, VAR8, VAR9;
    int VAR10 = 0, VAR11;
    VAR8 = FUN2(&VAR2->VAR12, 2);
    if (VAR8 != 0)
    {
        FUN3(VAR2->VAR13, VAR14, "", VAR8);
        VAR9 = FUN2(&VAR2->VAR12, 4);
        VAR11 = VAR2->VAR15 >> VAR9;
        VAR10 = VAR5 = VAR4;
        for (VAR7 = 0; VAR7 < (1 << VAR9); VAR7++)
        {
            VAR6 = FUN2(&VAR2->VAR12, 4);
            if (VAR6 == 15)
            {
                FUN3(VAR2->VAR13, VAR14, "");
                VAR6 = FUN2(&VAR2->VAR12, 5);
                for (; VAR5 < VAR11; VAR5++, VAR10++)
                    VAR2->VAR16[VAR3][VAR10] = FUN4(&VAR2->VAR12, VAR6);
                else
                {
                    for (; VAR5 < VAR11; VAR5++, VAR10++)
                    {
                        VAR2->VAR16[VAR3][VAR10] = FUN5(&VAR2->VAR12, VAR6, VAR17, 0);
                        VAR5 = 0;
                        return 0;