int FUN1(VAR1 *VAR2, struct VAR3 *VAR4)
{
    VAR5 *VAR6 = FUN2(VAR2);
    int VAR7 = 0;
    switch (VAR4->VAR8)
    {
    case VAR9:
        VAR7 = FUN3(VAR6);
        break;
    case VAR10:
        FUN4();
        break;
    case VAR11:
        VAR7 = FUN5(VAR6);
        break;
    case VAR12:
        VAR7 = FUN6(VAR6);
        break;
    default:
        fprintf(VAR13, "", VAR4->VAR8);
        break;
    }
    if (VAR7 == 0)
    {
        VAR7 = VAR14;
    }
    return VAR7;
}