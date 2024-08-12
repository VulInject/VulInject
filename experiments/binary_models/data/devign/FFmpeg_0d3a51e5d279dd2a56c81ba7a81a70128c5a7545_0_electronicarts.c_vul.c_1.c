static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    VAR6 *VAR7 = VAR2->VAR7;
    int VAR8;
    VAR4->VAR9 = VAR4->VAR10 ? FUN2(VAR7) : FUN3(VAR7);
    VAR4->VAR11 = FUN4(VAR7);
    VAR4->VAR12 = FUN4(VAR7);
    VAR8 = FUN4(VAR7);
    FUN5(VAR7, 13);
    switch (VAR8)
    {
    case 0:
        switch (VAR4->VAR11)
        {
        case 1:
            VAR4->VAR13 = VAR14;
            break;
        case 2:
            VAR4->VAR13 = VAR15;
            break;
            break;
        case 1:
            VAR4->VAR13 = VAR16;
            VAR4->VAR11 = 1;
            break;
        case 2:
            VAR4->VAR13 = VAR17;
            break;
        default:
            FUN6(VAR2, VAR18, "", VAR8);
            return 1;