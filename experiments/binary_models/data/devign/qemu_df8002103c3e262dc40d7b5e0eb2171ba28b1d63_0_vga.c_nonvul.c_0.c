static void FUN1(void *VAR1)
{
    VAR2 *VAR3 = VAR1;
    int VAR4, VAR5;
    FUN2();
    if (FUN3(VAR3->VAR6) == 0)
    {
    }
    else
    {
        VAR4 = 0;
        if (!(VAR3->VAR7 & 0x20))
        {
            VAR5 = VAR8;
        }
        else
        {
            VAR5 = VAR3->VAR9[VAR10] & VAR11;
        }
        if (VAR5 != VAR3->VAR5)
        {
            VAR3->VAR5 = VAR5;
            VAR3->VAR12 = FUN4(VAR13);
            VAR4 = 1;
        }
        switch (VAR5)
        {
        case VAR14:
            FUN5(VAR3, VAR4);
            break;
        case VAR15:
            FUN6(VAR3, VAR4);
            break;
        case VAR8:
        default:
            FUN7(VAR3, VAR4);
            break;
        }
    }
}