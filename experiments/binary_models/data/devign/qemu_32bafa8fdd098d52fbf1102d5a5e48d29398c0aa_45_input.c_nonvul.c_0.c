static void FUN1(VAR1 *VAR2)
{
    VAR3 *move = VAR2->VAR4.VAR5.VAR6;
    switch (VAR7)
    {
    case 90:
        if (move->VAR8 == VAR9)
        {
            move->VAR8 = VAR10;
        }
        else if (move->VAR8 == VAR10)
        {
            move->VAR8 = VAR9;
            move->VAR11 = VAR12 - 1 - move->VAR11;
        }
        break;
    case 180:
        move->VAR11 = VAR12 - 1 - move->VAR11;
        break;
    case 270:
        if (move->VAR8 == VAR9)
        {
            move->VAR8 = VAR10;
            move->VAR11 = VAR12 - 1 - move->VAR11;
        }
        else if (move->VAR8 == VAR10)
        {
            move->VAR8 = VAR9;
        }
        break;
    }
}