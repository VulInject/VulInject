static int FUN1(VAR1 *VAR2, char VAR3, bool VAR4)
{
    int VAR5, VAR6;
    VAR2->VAR7++;
    if (VAR3 == '')
    {
        VAR2->VAR7 = 0;
        VAR2->VAR8++;
    }
    do
    {
        VAR6 = VAR9[VAR2->VAR10][(VAR11)VAR3];
        VAR5 = !FUN2(VAR2->VAR10, VAR6);
        if (VAR5)
        {
            FUN3(VAR2->VAR12, VAR3);
        }
        switch (VAR6)
        {
        case VAR13:
        case VAR14:
        case VAR15:
        case VAR16:
        case VAR17:
        case VAR18:
            VAR2->FUN4(VAR2, VAR2->VAR12, VAR6, VAR2->VAR7, VAR2->VAR8);
        case VAR19:
            FUN5(VAR2->VAR12);
            VAR2->VAR12 = FUN6();
            VAR6 = VAR20;
            break;
        case VAR21:
            VAR2->FUN4(VAR2, VAR2->VAR12, VAR22, VAR2->VAR7, VAR2->VAR8);
            FUN5(VAR2->VAR12);
            VAR2->VAR12 = FUN6();
            VAR6 = VAR20;
            VAR2->VAR10 = VAR6;
            return 0;
        default:
            break;
        }
        VAR2->VAR10 = VAR6;
    } while (!VAR5 && !VAR4);
    if (VAR2->VAR12->VAR23 > VAR24)
    {
        VAR2->FUN4(VAR2, VAR2->VAR12, VAR2->VAR10, VAR2->VAR7, VAR2->VAR8);
        FUN5(VAR2->VAR12);
        VAR2->VAR12 = FUN6();
        VAR2->VAR10 = VAR20;
    }
    return 0;
}