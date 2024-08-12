int FUN1(VAR1 *VAR2, VAR1 *VAR3, VAR4 **VAR5)
{
    VAR6 *VAR7;
    int VAR8;
    VAR7 = FUN2(&VAR9);
    switch (VAR2->VAR10)
    {
    case VAR11:
        FUN3(VAR7, "", VAR2->VAR12->VAR13);
        FUN3(VAR7, "", VAR2->VAR12->VAR14);
        if (VAR3)
        {
            FUN3(VAR7, "", VAR3->VAR12->VAR13);
            FUN3(VAR7, "", VAR3->VAR12->VAR14);
        }
        VAR8 = FUN4(VAR7, VAR5);
        break;
    default:
        FUN5(VAR5, "");
        return -1;
    }
    FUN6(VAR7);
    return VAR8;
}