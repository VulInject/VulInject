static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5.VAR6->VAR7;
    int VAR8, VAR9 = 0;
    if (VAR2->VAR10)
    {
        VAR9 = VAR2->VAR10;
    }
    VAR2->VAR5.FUN2(VAR2->VAR5.VAR7, VAR9);
    if (VAR2->VAR11)
    {
        for (VAR8 = 0; VAR8 < VAR4->VAR12; VAR8++)
        {
            FUN3(VAR2->VAR13[VAR8].VAR14);
            FUN4(&VAR2->VAR13[VAR8].VAR15);
        }
    }
    FUN5(VAR2->VAR13);
    FUN6(VAR2);
}