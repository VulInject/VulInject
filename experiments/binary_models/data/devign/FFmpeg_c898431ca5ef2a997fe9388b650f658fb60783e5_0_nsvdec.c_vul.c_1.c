static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    int VAR6, VAR7;
    FUN2(VAR2, "", VAR8);
    FUN2(VAR2, "", VAR2->VAR9);
    VAR4->VAR10 = VAR11;
    VAR4->VAR12[0].VAR13 = VAR4->VAR12[1].VAR13 = NULL;
    for (VAR6 = 0; VAR6 < VAR14; VAR6++)
    {
        if (FUN3(VAR2) < 0)
            return -1;
        if (VAR4->VAR10 == VAR15)
            VAR7 = FUN4(VAR2);
        if (VAR4->VAR10 == VAR16)
        {
            VAR7 = FUN5(VAR2);
            break;
        }
    }
    if (VAR2->VAR17 < 1)
        return -1;
    VAR7 = FUN6(VAR2, 1);
    FUN2(VAR2, "");
    return VAR7;
}