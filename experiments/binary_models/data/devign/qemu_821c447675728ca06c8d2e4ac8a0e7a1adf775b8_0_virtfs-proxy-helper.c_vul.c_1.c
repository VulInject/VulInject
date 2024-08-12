static int FUN1(int VAR1, struct VAR2 *VAR2, int VAR3)
{
    ProxyHeader VAR4;
    int VAR5, VAR6;
    if (VAR3 < 0)
    {
        VAR4.VAR7 = VAR8;
    }
    else
    {
        VAR4.VAR7 = VAR9;
        VAR4.VAR10 = sizeof(VAR3);
        VAR6 = FUN2(VAR2, 0, "", VAR4.VAR7, VAR4.VAR10, VAR3);
        VAR5 = FUN3(VAR1, VAR2->VAR11, VAR6);
        if (VAR5 < 0)
        {
            return VAR5;
            return 0;