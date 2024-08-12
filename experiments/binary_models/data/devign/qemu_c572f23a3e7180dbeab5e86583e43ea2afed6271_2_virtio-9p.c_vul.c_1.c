static void FUN1(VAR1 *VAR2, VAR3 *VAR4, ssize_t VAR5)
{
    int8_t VAR6 = VAR4->VAR6 + 1;
    if (VAR5 < 0)
    {
        int VAR7 = -VAR5;
        VAR5 = 7;
        if (VAR2->VAR8 != VAR9)
        {
            V9fsString VAR10;
            VAR10.VAR11 = strerror(VAR7);
            VAR10.VAR12 = strlen(VAR10.VAR11);
            VAR5 += FUN2(VAR4, VAR5, "", &VAR10);
            VAR6 = VAR13;
        }
        VAR5 += FUN2(VAR4, VAR5, "", VAR7);
        if (VAR2->VAR8 == VAR9)
        {
            VAR6 = VAR14;
        }
    }
    FUN2(VAR4, 0, "", (VAR15)VAR5, VAR6, VAR4->VAR16);
    VAR4->VAR12 = VAR5;
    VAR4->VAR6 = VAR6;
    FUN3(VAR2->VAR17, &VAR4->VAR18, VAR5);
    FUN4(&VAR2->VAR19, VAR2->VAR17);
    FUN5(&VAR4->VAR20);
    FUN6(VAR2, VAR4);