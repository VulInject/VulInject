static void FUN1(VAR1 *VAR2, int VAR3, intptr_t VAR4, intptr_t VAR5)
{
    VAR4 += VAR5;
    switch (VAR3)
    {
    case VAR6:
        VAR4 -= (VAR7)VAR2;
        if (VAR4 != (VAR8)VAR4)
        {
            FUN2();
        }
        FUN3(VAR2, VAR4);
        break;
    case VAR9:
        VAR4 -= (VAR7)VAR2;
        if (VAR4 != (VAR10)VAR4)
        {
            FUN2();
        }
        FUN4(VAR2, VAR4);
        break;
    default:
        FUN2();
    }
}