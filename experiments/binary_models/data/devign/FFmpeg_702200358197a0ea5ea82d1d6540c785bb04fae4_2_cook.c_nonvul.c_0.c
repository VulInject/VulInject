static int FUN1(VAR1 *VAR2)
{
    int VAR3;
    VAR4 *VAR5 = VAR2->VAR6;
    FUN2(NULL, VAR7, "");
    FUN3(VAR5->VAR8);
    FUN3(VAR5->VAR9);
    FUN3(VAR5->VAR10);
    FUN3(VAR5->VAR11);
    FUN3(VAR5->VAR12);
    FUN4(&VAR5->VAR13);
    for (VAR3 = 0; VAR3 < 13; VAR3++)
    {
        FUN5(&VAR5->VAR14[VAR3]);
    }
    for (VAR3 = 0; VAR3 < 7; VAR3++)
    {
        FUN5(&VAR5->VAR15[VAR3]);
    }
    if (VAR5->VAR16 == 2 && VAR5->VAR17 == 1)
    {
        FUN5(&VAR5->VAR18);
    }
    FUN2(NULL, VAR7, "");
    return 0;
}