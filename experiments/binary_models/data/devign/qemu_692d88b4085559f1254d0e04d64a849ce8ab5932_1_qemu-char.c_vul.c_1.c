VAR1 *FUN1(VAR2 *VAR3, VAR4 **VAR5)
{
    VAR1 *VAR6 = FUN2(sizeof(VAR1));
    FUN3(&VAR6->VAR7);
    VAR6->VAR8 = -1;
    if (VAR3->VAR9)
    {
        int VAR10 = VAR11 | VAR12;
        if (VAR3->VAR13 && VAR3->VAR14)
        {
            VAR10 |= VAR15;
        }
        else
        {
            VAR10 |= VAR16;
        }
        VAR6->VAR17 = FUN4(VAR3->VAR18, VAR10, 0666);
        if (VAR6->VAR17 < 0)
        {
            FUN5(VAR5, VAR19, "", VAR3->VAR18);
            FUN6(VAR6);
            return NULL;
        }
    }
    else
    {
        VAR6->VAR17 = -1;
    }
    return VAR6;
}