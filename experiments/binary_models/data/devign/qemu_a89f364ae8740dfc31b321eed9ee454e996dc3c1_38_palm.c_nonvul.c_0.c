static void FUN1(void *VAR1, int VAR2, int VAR3)
{
    switch (VAR2)
    {
    case 0:
        FUN2("", VAR4, VAR3 ? "" : "");
        break;
    case 1:
        FUN2("", VAR4, VAR3 ? "" : "");
        break;
    case 2:
    case 3:
    case 4:
        FUN2("", VAR4, VAR2 - 1, VAR3 ? "" : "");
        break;
    case 5:
    case 6:
        FUN2("", VAR4, VAR2 - 4, VAR3 ? "" : "");
        break;
    }
}