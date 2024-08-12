void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    if (VAR4->VAR5 < 0)
    {
        VAR2->VAR6 = VAR7;
    }
    switch (VAR2->VAR6)
    {
    case VAR8:
        if (VAR4->VAR5 < VAR2->VAR9)
        {
            VAR2->VAR9 = VAR4->VAR5;
        }
        VAR2->VAR6 = VAR10;
        VAR4->VAR5 = 8;
        break;
    case VAR11:
        VAR2->VAR6 = VAR7;
        VAR4->VAR5 = 0;
        break;
    default:
        break;
    }
    FUN2(VAR2, VAR4);
}