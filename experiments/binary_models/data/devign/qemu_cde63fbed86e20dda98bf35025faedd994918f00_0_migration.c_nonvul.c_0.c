VAR1 *FUN1(VAR2 **VAR3)
{
    VAR1 *VAR4 = FUN2(sizeof(*VAR4));
    VAR5 *VAR6 = FUN3();
    switch (VAR6->VAR7)
    {
    case VAR8:
        break;
    case VAR9:
        VAR4->VAR10 = true;
        VAR4->VAR11 = false;
        break;
    case VAR12:
    case VAR13:
        VAR4->VAR10 = true;
        VAR4->VAR11 = true;
        VAR4->VAR14 = FUN4(VAR15) - VAR6->VAR14;
        VAR4->VAR16 = true;
        VAR4->VAR17 = VAR6->VAR17;
        VAR4->VAR18 = true;
        VAR4->VAR19 = VAR6->VAR19;
        VAR4->VAR20 = true;
        VAR4->VAR21 = FUN2(sizeof(*VAR4->VAR21));
        VAR4->VAR21->VAR22 = FUN5();
        VAR4->VAR21->VAR23 = FUN6();
        VAR4->VAR21->VAR24 = FUN7();
        VAR4->VAR21->VAR25 = FUN8();
        VAR4->VAR21->VAR26 = FUN9();
        VAR4->VAR21->VAR27 = FUN10();
        VAR4->VAR21->VAR28 = FUN11();
        VAR4->VAR21->VAR29 = VAR6->VAR29;
        VAR4->VAR21->VAR30 = VAR6->VAR30;
        VAR4->VAR21->VAR31 = VAR6->VAR31;
        if (FUN12())
        {
            VAR4->VAR32 = true;
            VAR4->VAR33 = FUN2(sizeof(*VAR4->VAR33));
            VAR4->VAR33->VAR22 = FUN13();
            VAR4->VAR33->VAR23 = FUN14();
            VAR4->VAR33->VAR24 = FUN15();
        }
        FUN16(VAR4);
        break;
    case VAR34:
        FUN16(VAR4);
        VAR4->VAR10 = true;
        VAR4->VAR11 = true;
        VAR4->VAR14 = VAR6->VAR14;
        VAR4->VAR35 = true;
        VAR4->VAR36 = VAR6->VAR36;
        VAR4->VAR18 = true;
        VAR4->VAR19 = VAR6->VAR19;
        VAR4->VAR20 = true;
        VAR4->VAR21 = FUN2(sizeof(*VAR4->VAR21));
        VAR4->VAR21->VAR22 = FUN5();
        VAR4->VAR21->VAR23 = 0;
        VAR4->VAR21->VAR24 = FUN7();
        VAR4->VAR21->VAR25 = FUN8();
        VAR4->VAR21->VAR26 = FUN9();
        VAR4->VAR21->VAR27 = FUN10();
        VAR4->VAR21->VAR28 = FUN11();
        VAR4->VAR21->VAR30 = VAR6->VAR30;
        VAR4->VAR21->VAR31 = VAR6->VAR31;
        break;
    case VAR37:
        VAR4->VAR10 = true;
        break;
    case VAR38:
        VAR4->VAR10 = true;
        break;
    }
    VAR4->VAR39 = VAR6->VAR7;
    return VAR4;
}