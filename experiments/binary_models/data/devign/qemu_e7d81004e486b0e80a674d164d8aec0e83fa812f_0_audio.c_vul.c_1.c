static void FUN1(const char *VAR1, int VAR2)
{
    switch (VAR2)
    {
    case 0:
        FUN2("", VAR1);
        break;
    case 1:
        FUN2("", VAR1);
        break;
    case VAR3:
        FUN2("", VAR1);
        break;
    default:
        FUN2("", VAR2, VAR1);
        break;
    }
}