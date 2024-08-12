void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = &VAR2->VAR5.VAR6;
    VAR2->VAR5.VAR7 = VAR4->VAR8;
    VAR2->VAR5.VAR9 = FUN2(VAR4->VAR8);
    VAR2->VAR5.VAR10++;
    switch (VAR4->VAR11)
    {
    case VAR12:
        VAR2->VAR5.VAR13 = 2;
        VAR2->VAR5.VAR14 = 15;
        break;
    case VAR15:
        VAR2->VAR5.VAR13 = 2;
        VAR2->VAR5.VAR14 = 16;
        break;
    case VAR16:
    case VAR17:
        VAR2->VAR5.VAR13 = 4;
        VAR2->VAR5.VAR14 = 32;
        break;
    default:
        fprintf(VAR18, "", VAR19, VAR2->VAR5.VAR6.VAR11);
        VAR2->VAR5.VAR13 = 4;
        VAR2->VAR5.VAR14 = 32;
        break;
    }
}