static int FUN1(VAR1 *VAR2, void *VAR3)
{
    VAR4 *VAR5;
    VAR6 *VAR7;
    VAR5 = FUN2(sizeof(*VAR5));
    VAR5->VAR8 = FUN3(VAR2, "");
    VAR5->VAR9 = FUN3(VAR2, "");
    VAR5->VAR10 = FUN3(VAR2, "");
    VAR7 = FUN4(VAR5->VAR8);
    if (VAR7)
    {
        VAR11 *VAR12 = FUN5(VAR7);
        if (VAR12->VAR13)
        {
            VAR5->VAR14 = false;
        }
        else
        {
            VAR5->VAR14 = true;
        }
    }
    else
    {
        VAR5->VAR14 = true;
    }
    FUN6(VAR5);
    return 0;
}