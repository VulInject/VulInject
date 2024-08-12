static void FUN1(VAR1 **VAR2, int VAR3)
{
    VAR4 *VAR5;
    switch ((*VAR2)->VAR6)
    {
    case VAR7:
        FUN2(&((VAR8 *)*VAR2)->VAR9);
        break;
    case VAR10:
        FUN2(&((VAR8 *)*VAR2)->VAR11);
        break;
    case VAR12:
        FUN2(&((VAR13 *)*VAR2)->VAR14);
        break;
    case VAR15:
        FUN2(&((VAR16 *)*VAR2)->VAR14);
        break;
    case VAR17:
    case VAR18:
        FUN2(&((VAR19 *)*VAR2)->VAR20);
        FUN2(&((VAR19 *)*VAR2)->VAR21);
        break;
    case VAR22:
        FUN2(&((VAR23 *)*VAR2)->VAR21);
        FUN2(&((VAR23 *)*VAR2)->VAR24);
        break;
    case VAR25:
        VAR5 = (VAR4 *)*VAR2;
        FUN2(&VAR5->VAR26);
        FUN2(&VAR5->VAR27);
        FUN2(&VAR5->VAR28);
    default:
        break;
    }
    if (VAR3)
        FUN2(VAR2);