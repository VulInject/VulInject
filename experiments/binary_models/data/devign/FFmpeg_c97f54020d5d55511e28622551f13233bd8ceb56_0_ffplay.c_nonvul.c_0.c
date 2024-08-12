static int FUN1(VAR1 *VAR2)
{
    int VAR3 = VAR4 | VAR5 | VAR6;
    int VAR7, VAR8;
    if (VAR9)
        VAR3 |= VAR10;
    else
        VAR3 |= VAR11;
    if (VAR9 && VAR12)
    {
        VAR7 = VAR12;
        VAR8 = VAR13;
    }
    else if (!VAR9 && VAR14)
    {
        VAR7 = VAR14;
        VAR8 = VAR15;
    }
    else if (VAR2->VAR16 && VAR2->VAR16->VAR17->VAR18)
    {
        VAR7 = VAR2->VAR16->VAR17->VAR18;
        VAR8 = VAR2->VAR16->VAR17->VAR19;
    }
    else
    {
        VAR7 = 640;
        VAR8 = 480;
    }
    VAR20 = FUN2(VAR7, VAR8, 0, VAR3);
    VAR20 = FUN2(VAR7, VAR8, 24, VAR3);
    if (!VAR20)
    {
        fprintf(VAR21, "");
        return -1;
    }
    FUN3("", "");
    VAR2->VAR18 = VAR20->VAR7;
    VAR2->VAR19 = VAR20->VAR8;
    return 0;
}