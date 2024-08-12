static void FUN1(void *VAR1, int VAR2)
{
    VAR3 *VAR4 = VAR1;
    VAR5 *VAR6 = FUN2(VAR4);
    VAR7 *VAR8 = VAR6->VAR8;
    VAR4->VAR9 = 0;
    VAR4->VAR10 = false;
    if (VAR4->VAR11)
    {
        FUN3(VAR4->VAR11);
        VAR4->VAR11 = 0;
    }
    switch (VAR2)
    {
    case VAR12:
        VAR4->VAR11 = FUN4(600, VAR13, VAR4);
        break;
    case VAR14:
        VAR8->VAR15.VAR16.VAR17 = VAR18;
        FUN5(VAR8);
        break;
    }
}