static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = NULL;
    while ((VAR4 = FUN2(VAR4)))
    {
        VAR5 *VAR6;
        int VAR7, VAR8;
        VAR7 = VAR4->VAR9->FUN3(VAR4);
        VAR8 = FUN4(VAR4);
        VAR4->VAR10 += VAR7 - VAR8;
        VAR4->VAR11 += VAR7;
        for (VAR6 = VAR4->VAR12.VAR13; VAR6; VAR6 = VAR6->VAR14.VAR15)
        {
            VAR6->VAR16 -= VAR8;
            if (VAR6->VAR17)
            {
                int VAR18;
                VAR18 = FUN5(VAR6);
                if (VAR18 > 0)
                {
                    VAR6->VAR19.FUN6(VAR6->VAR19.VAR20, VAR18);
                }
            }
        }
    }
}