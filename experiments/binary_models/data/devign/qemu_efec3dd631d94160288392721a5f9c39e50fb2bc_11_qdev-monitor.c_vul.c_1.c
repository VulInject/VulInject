static void FUN1(VAR1 *VAR2)
{
    FUN2(""%VAR3\"", FUN3(FUN4(VAR2)));
    if (VAR2->VAR4)
    {
        FUN2("", VAR2->VAR4);
    }
    if (FUN5(VAR2))
    {
        FUN2(""%VAR3\"", FUN6(VAR2));
    }
    if (VAR2->VAR5)
    {
        FUN2(""%VAR3\"", VAR2->VAR5);
    }
    if (VAR2->VAR6)
    {
        FUN2("");
    }
    FUN2("");
}