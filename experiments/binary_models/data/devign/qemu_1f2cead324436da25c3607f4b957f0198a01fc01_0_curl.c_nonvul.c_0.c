static void FUN1(VAR1 *VAR2)
{
    int VAR3;
    for (;;)
    {
        VAR4 *VAR5;
        VAR5 = FUN2(VAR2->VAR6, &VAR3);
        if (!VAR5)
            break;
        if (VAR5->VAR5 == VAR7)
        {
            VAR8 *VAR9 = NULL;
            FUN3(VAR5->VAR10, VAR11, (char **)&VAR9);
            if (VAR5->VAR12.VAR13 != VAR14)
            {
                int VAR15;
                for (VAR15 = 0; VAR15 < VAR16; VAR15++)
                {
                    VAR17 *VAR18 = VAR9->VAR18[VAR15];
                    if (VAR18 == NULL)
                    {
                        continue;
                    }
                    VAR18->VAR19.FUN4(VAR18->VAR19.VAR20, -VAR21);
                    FUN5(VAR18);
                    VAR9->VAR18[VAR15] = NULL;
                }
            }
            FUN6(VAR9);
            break;
        }
    }
}