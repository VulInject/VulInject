FUN1(VAR1 *VAR2, VAR3 **VAR4, VAR5 **VAR6)
{
    VAR7 *VAR8 = FUN2(VAR7, VAR9, VAR2);
    VAR3 **VAR10;
    switch (VAR8->VAR11)
    {
    case VAR12:
        VAR8->VAR11 = VAR13;
        VAR10 = VAR4;
        break;
    case VAR13:
    {
        const VAR14 *VAR15;
        VAR15 = FUN3(VAR8->VAR16);
        if (FUN4(VAR8->VAR16))
        {
            FUN5(VAR8->VAR17, VAR15->VAR18);
            return NULL;
        }
        VAR10 = &(*VAR4)->VAR19;
        break;
    }
    default:
        FUN6();
    }
    *VAR10 = FUN7(sizeof **VAR10);
    return *VAR10;
}