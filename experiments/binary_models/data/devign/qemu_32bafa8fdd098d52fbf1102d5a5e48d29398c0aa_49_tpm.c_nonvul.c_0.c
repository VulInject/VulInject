static VAR1 *FUN1(VAR2 *VAR3)
{
    VAR1 *VAR4 = FUN2(VAR1, 1);
    VAR5 *VAR6;
    VAR4->VAR7 = FUN3(VAR3->VAR7);
    VAR4->VAR8 = VAR3->VAR9;
    VAR4->VAR10 = FUN2(VAR11, 1);
    switch (VAR3->VAR12->VAR13)
    {
    case VAR14:
        VAR4->VAR10->VAR13 = VAR15;
        VAR6 = FUN2(VAR5, 1);
        VAR4->VAR10->VAR16.VAR17.VAR18 = VAR6;
        if (VAR3->VAR19)
        {
            VAR6->VAR19 = FUN3(VAR3->VAR19);
            VAR6->VAR20 = true;
        }
        if (VAR3->VAR21)
        {
            VAR6->VAR21 = FUN3(VAR3->VAR21);
            VAR6->VAR22 = true;
        }
        break;
    case VAR23:
        break;
    }
    return VAR4;
}