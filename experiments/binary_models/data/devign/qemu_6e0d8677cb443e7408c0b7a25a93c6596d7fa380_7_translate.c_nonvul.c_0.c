static void FUN1(int VAR1, TCGv VAR2)
{
    switch (VAR1)
    {
    case VAR3:
        FUN2(VAR2, VAR2);
        break;
    case VAR4:
        FUN3(VAR2, VAR2);
        break;
    case VAR5:
        FUN4(VAR2, VAR2);
        break;
    default:
        break;
    }
}