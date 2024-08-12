void FUN1(VAR1 *VAR2)
{
    int VAR3;
    if (VAR2->VAR4->VAR5)
        VAR2->VAR4->FUN2(VAR2);
    for (VAR3 = 0; VAR3 < VAR2->VAR6; VAR3++)
    {
        FUN3(VAR2->VAR7[VAR3]);
    }
    if (VAR2->VAR8)
    {
        VAR9 *VAR10, *VAR11;
        VAR10 = VAR2->VAR8;
        while (VAR10 != NULL)
        {
            VAR11 = VAR10->VAR12;
            FUN4(&VAR10->VAR13);
            FUN3(VAR10);
            VAR10 = VAR11;
        }
        VAR2->VAR8 = NULL;
    }
    if (!(VAR2->VAR4->VAR14 & VAR15))
    {
        FUN5(&VAR2->VAR16);
    }
    FUN6(&VAR2->VAR17);
    FUN3(VAR2);
}