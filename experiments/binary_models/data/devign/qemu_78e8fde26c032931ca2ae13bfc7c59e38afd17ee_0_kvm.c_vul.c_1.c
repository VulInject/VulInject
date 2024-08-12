int FUN1(VAR1 *VAR2, struct VAR3 *VAR4)
{
    int VAR5;
    switch (VAR4->VAR6)
    {
    case VAR7:
        if (VAR4->VAR8.VAR9)
        {
            FUN2("");
            VAR5 = FUN3(VAR2, VAR4->VAR8.VAR10, VAR4->VAR8.VAR11);
        }
        else
        {
            FUN2("");
            VAR5 = FUN4(VAR2, VAR4->VAR8.VAR10, &VAR4->VAR8.VAR11);
        }
        break;
    case VAR12:
        FUN2("");
        VAR5 = FUN5(VAR2);
        break;
    case VAR13:
        FUN2("");
        VAR4->VAR14.VAR5 = FUN6(VAR2, VAR4->VAR14.VAR15, VAR4->VAR14.VAR16);
        VAR5 = 1;
        break;
    default:
        fprintf(VAR17, "", VAR4->VAR6);
        VAR5 = -1;
        break;
    }
    return VAR5;
}