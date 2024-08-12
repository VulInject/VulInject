void FUN1(VAR1 *VAR2, const VAR3 *VAR4)
{
    VAR5 *VAR6;
    VAR7 *VAR8 = NULL;
    VAR9 *VAR10;
    VAR6 = FUN2(&VAR8);
    if (VAR8)
    {
        FUN3(VAR2, "", FUN4(VAR8));
        FUN5(VAR8);
        return;
    }
    if (!VAR6->VAR11)
    {
        FUN3(VAR2, "");
        goto VAR12;
    }
    FUN3(VAR2, "");
    if (VAR6->VAR13 && VAR6->VAR14)
    {
        FUN3(VAR2, "", VAR6->VAR15, VAR6->VAR16);
    }
    if (VAR6->VAR17)
    {
        FUN3(VAR2, "", VAR6->VAR18);
    }
    if (!VAR6->VAR19 || VAR6->VAR20 == NULL)
    {
        FUN3(VAR2, "");
    }
    else
    {
        for (VAR10 = VAR6->VAR20; VAR10; VAR10 = VAR10->VAR21)
        {
            FUN3(VAR2, "");
            FUN3(VAR2, "", VAR10->VAR22->VAR15, VAR10->VAR22->VAR16);
            FUN3(VAR2, "", VAR10->VAR22->VAR23 ? VAR10->VAR22->VAR23 : "");
            FUN3(VAR2, "", VAR10->VAR22->VAR24 ? VAR10->VAR22->VAR25 : "");
        }
    }
VAR12:
    FUN6(VAR6);
}