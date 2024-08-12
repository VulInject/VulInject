static void FUN1(VAR1 *VAR2, uint32_t VAR3)
{
    int VAR4 = FUN2(VAR3, 22, 2);
    int VAR5 = FUN2(VAR3, 0, 5);
    int VAR6 = FUN2(VAR3, 5, 5);
    int VAR7 = FUN2(VAR3, 16, 5);
    int VAR8 = FUN2(VAR3, 12, 4);
    if (VAR8 > 8)
    {
        FUN3(VAR2);
        return;
    }
    switch (VAR4)
    {
    case 0:
        FUN4(VAR2, VAR8, VAR5, VAR6, VAR7);
        break;
    case 1:
        FUN5(VAR2, VAR8, VAR5, VAR6, VAR7);
        break;
    default:
        FUN3(VAR2);
    }
}