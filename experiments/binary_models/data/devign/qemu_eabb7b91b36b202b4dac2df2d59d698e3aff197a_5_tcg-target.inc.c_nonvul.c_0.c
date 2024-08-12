static void FUN1(VAR1 *VAR2, int VAR3, intptr_t VAR4, intptr_t VAR5)
{
    VAR1 *VAR6 = (VAR1 *)VAR4;
    FUN2(VAR5 == 0);
    switch (VAR3)
    {
    case VAR7:
        FUN3(VAR2, VAR6);
        break;
    case VAR8:
        FUN4(VAR2, VAR6);
        break;
    default:
        FUN5();
    }
}