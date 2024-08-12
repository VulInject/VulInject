void FUN1(void)
{
    int VAR1;
    FUN2("");
    FUN2("", ((VAR2 *)VAR3)());
    for (VAR1 = 2; VAR1 <= 4; VAR1++)
    {
        VAR3[1] = VAR1;
        FUN2("", VAR1, ((VAR2 *)VAR3)());
    }
}