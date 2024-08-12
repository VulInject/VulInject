int FUN1(VAR1 *VAR2, VAR3 **VAR4, VAR5 *VAR6, void *VAR7)
{
    int VAR8;
    switch (VAR2->VAR9)
    {
    case VAR10:
        VAR8 = FUN2(VAR2->VAR11.VAR12.VAR13, VAR4, VAR6, VAR7);
        break;
    case VAR14:
        VAR8 = FUN3(VAR2->VAR11.VAR15.VAR13, VAR4, VAR6, VAR7);
        break;
    case VAR16:
        VAR8 = FUN4(VAR17, VAR2->VAR11.VAR8.VAR13->VAR18, VAR4);
        if (VAR8 >= 0 && VAR6)
        {
            FUN5(VAR8);
            FUN6(VAR8, NULL, VAR7);
        }
        break;
    default:
        FUN7();
    }
    return VAR8;
}