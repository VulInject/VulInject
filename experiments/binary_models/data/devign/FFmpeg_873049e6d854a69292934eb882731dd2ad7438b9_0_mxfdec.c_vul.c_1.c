static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    VAR6 *VAR7;
    int VAR8;
    FUN2(&VAR4->VAR9);
    for (VAR8 = 0; VAR8 < VAR2->VAR10; VAR8++)
        VAR2->VAR11[VAR8]->VAR5 = NULL;
    for (VAR8 = 0; VAR8 < VAR4->VAR12; VAR8++)
    {
        switch (VAR4->VAR13[VAR8]->VAR14)
        {
        case VAR15:
            FUN2(&((VAR16 *)VAR4->VAR13[VAR8])->VAR17);
            break;
        case VAR18:
            FUN2(&((VAR19 *)VAR4->VAR13[VAR8])->VAR20);
            break;
        case VAR21:
        case VAR22:
            FUN2(&((VAR23 *)VAR4->VAR13[VAR8])->VAR24);
            break;
        case VAR25:
            VAR7 = (VAR6 *)VAR4->VAR13[VAR8];
            FUN2(&VAR7->VAR26);
            FUN2(&VAR7->VAR27);
            FUN2(&VAR7->VAR28);
            break;
        default:
            break;
        }
        FUN2(&VAR4->VAR13[VAR8]);
    }
    FUN2(&VAR4->VAR29);
    FUN2(&VAR4->VAR13);
    FUN2(&VAR4->VAR30);
    FUN2(&VAR4->VAR31);
    for (VAR8 = 0; VAR8 < VAR4->VAR32; VAR8++)
    {
        FUN2(&VAR4->VAR33[VAR8].VAR34);
        FUN2(&VAR4->VAR33[VAR8].VAR35);
        FUN2(&VAR4->VAR33[VAR8].VAR36);
    }
    FUN2(&VAR4->VAR33);
    return 0;
}