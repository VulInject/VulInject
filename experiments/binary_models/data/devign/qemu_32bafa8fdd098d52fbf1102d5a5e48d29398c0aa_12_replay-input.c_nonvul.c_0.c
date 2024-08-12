void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4;
    VAR5 *VAR6;
    VAR7 *move;
    FUN2(VAR2->VAR8);
    switch (VAR2->VAR8)
    {
    case VAR9:
        VAR4 = VAR2->VAR10.VAR4.VAR11;
        FUN2(VAR4->VAR4->VAR8);
        switch (VAR4->VAR4->VAR8)
        {
        case VAR12:
            FUN3(VAR4->VAR4->VAR10.VAR13.VAR11);
            FUN4(VAR4->VAR14);
            break;
        case VAR15:
            FUN2(VAR4->VAR4->VAR10.VAR16.VAR11);
            FUN4(VAR4->VAR14);
            break;
        case VAR17:
            break;
        }
        break;
    case VAR18:
        VAR6 = VAR2->VAR10.VAR6.VAR11;
        FUN2(VAR6->VAR19);
        FUN4(VAR6->VAR14);
        break;
    case VAR20:
        move = VAR2->VAR10.VAR21.VAR11;
        FUN2(move->VAR22);
        FUN3(move->VAR23);
        break;
    case VAR24:
        move = VAR2->VAR10.VAR25.VAR11;
        FUN2(move->VAR22);
        FUN3(move->VAR23);
        break;
    case VAR26:
        break;
    }
}