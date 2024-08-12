static VAR1 *FUN1(VAR2 *VAR3, VAR1 *VAR4)
{
    VAR5 *VAR6 = VAR3->VAR7[0];
    VAR1 *VAR8;
    int VAR9, VAR10, VAR11;
    switch (VAR6->VAR12)
    {
    case VAR13:
        VAR8 = FUN2(VAR6, VAR14, VAR4->VAR15->VAR16, VAR4->VAR15->VAR17);
        FUN3(VAR8->VAR18, VAR8->VAR19, (void *)VAR4->VAR18, VAR4->VAR19, VAR4->VAR20, VAR4->VAR15->VAR16, VAR4->VAR15->VAR17);
        break;
    case VAR21:
        VAR8 = FUN4(VAR6, VAR14, VAR4->VAR22->VAR23);
        VAR9 = FUN5(VAR4->VAR22->VAR24);
        FUN6(VAR8->VAR25, VAR4->VAR8->VAR25, 0, 0, VAR4->VAR22->VAR23, VAR9, VAR4->VAR20);
        break;
    default:
    }
    FUN7(VAR8, VAR4);
    return VAR8;