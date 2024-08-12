static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR3, VAR2, VAR2);
    if (VAR4->VAR5.VAR6)
    {
        int VAR7 = VAR4->VAR5.VAR6;
        FUN3("", VAR7);
        VAR4->VAR5.VAR6 = 0;
        FUN4(&VAR4->VAR2, VAR7);
        return;
    }
    switch (VAR2->VAR8.VAR9[0])
    {
    case VAR10:
    case VAR11:
        FUN5(VAR4, VAR4->VAR5.VAR12);
        break;
    default:
        FUN6();
    }
}