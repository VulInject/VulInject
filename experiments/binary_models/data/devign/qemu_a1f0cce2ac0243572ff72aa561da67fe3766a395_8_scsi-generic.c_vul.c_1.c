static void FUN1(void *VAR1, int VAR2)
{
    VAR3 *VAR4 = (VAR3 *)VAR1;
    VAR5 *VAR6 = FUN2(VAR5, VAR7, VAR4->VAR8.VAR9);
    VAR4->VAR8.VAR10 = NULL;
    VAR6->VAR11 = VAR4->VAR12.VAR11;
    if (VAR6->VAR11 & VAR13)
        VAR6->VAR14 = VAR4->VAR12.VAR15;
    if (VAR2 != 0)
        VAR4->VAR8.VAR16 = VAR17;
    else
    {
        if (VAR6->VAR11 & VAR18)
        {
            VAR4->VAR8.VAR16 = VAR17;
            FUN3("");
        }
        else if (VAR4->VAR12.VAR16)
            VAR4->VAR8.VAR16 = VAR4->VAR12.VAR16;
        else if (VAR6->VAR11 & VAR13)
            VAR4->VAR8.VAR16 = VAR19;
        else
            VAR4->VAR8.VAR16 = VAR20;
    }
    FUN4("", VAR4, VAR4->VAR8.VAR21, VAR4->VAR8.VAR16);
    FUN5(&VAR4->VAR8);
}