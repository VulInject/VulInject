void FUN1(VAR1 *VAR2, VAR1 *VAR3)
{
    VAR2->VAR4 = VAR3->VAR4;
    VAR2->VAR5 = VAR3->VAR5;
    switch (VAR3->VAR6)
    {
    case VAR7:
    {
        if (VAR2->VAR8->VAR9)
            FUN2(&VAR2->VAR8->VAR9);
        FUN3(VAR2->VAR8, VAR3->VAR8);
        break;
    }
    case VAR10:
        *VAR2->VAR11 = *VAR3->VAR11;
        break;
    default:
        break;
    }