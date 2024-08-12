static VAR1 *FUN1(VAR2 *VAR3, VAR4 **VAR5)
{
    VAR6 *VAR7 = VAR3->VAR7;
    bool VAR8 = VAR3->VAR9 ? VAR3->VAR10 : false;
    bool VAR11 = VAR3->VAR12 ? VAR3->VAR13 : true;
    bool VAR14 = VAR3->VAR15 ? VAR3->VAR16 : false;
    bool VAR17 = VAR3->VAR18 ? VAR3->VAR19 : false;
    int VAR20;
    if (VAR11)
    {
        VAR20 = FUN2(VAR7, VAR5);
    }
    else
    {
        VAR20 = FUN3(VAR7, VAR5, NULL, NULL);
    }
    if (FUN4(VAR5))
    {
        return NULL;
    }
    return FUN5(VAR20, VAR8, VAR11, VAR14, VAR17, VAR5);
}