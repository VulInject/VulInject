static int FUN1(VAR1 *VAR2, void *VAR3)
{
    int VAR4;
    FUN2("", VAR5.VAR6, VAR5.VAR7);
    VAR4 = FUN3(VAR2);
    if (VAR4)
    {
        FUN4();
        return VAR4;
    }
    FUN5();
    assert(VAR5.VAR6 == 0);
    do
    {
        VAR4 = FUN6(VAR2, 0);
    } while (VAR4 == 0);
    FUN4();
    if (VAR4 < 0)
    {
        return VAR4;
    }
    FUN7(VAR2, (100 << VAR8) | VAR9);
    FUN2("");
    FUN7(VAR2, VAR10);
    return 0;
}