static void FUN1(VAR1 *VAR2, int VAR3, int VAR4)
{
    int update = 0;
    int VAR5 = 1 << VAR3;
    FUN2("", VAR4);
    if (VAR2->VAR6[VAR3] == 1023)
        return;
    if (VAR4 != 1023)
    {
        if (!FUN3(VAR4) && FUN4(VAR4, VAR5) && FUN5(VAR4, VAR5) && (FUN6(VAR4) & VAR5) != 0)
        {
            FUN2("", VAR4, VAR5);
            FUN7(VAR4, VAR5);
            update = 1;
        }
    }
    if (VAR4 != VAR2->VAR6[VAR3])
    {
        int VAR7 = VAR2->VAR6[VAR3];
        while (VAR2->VAR8[VAR7][VAR3] != 1023)
        {
            if (VAR2->VAR8[VAR7][VAR3] == VAR4)
            {
                VAR2->VAR8[VAR7][VAR3] = VAR2->VAR8[VAR4][VAR3];
                break;
            }
            VAR7 = VAR2->VAR8[VAR7][VAR3];
        }
        if (update)
        {
            FUN8(VAR2);
        }
    }
    else
    {
        FUN9(VAR2, VAR3, VAR2->VAR8[VAR2->VAR6[VAR3]][VAR3]);
    }
}