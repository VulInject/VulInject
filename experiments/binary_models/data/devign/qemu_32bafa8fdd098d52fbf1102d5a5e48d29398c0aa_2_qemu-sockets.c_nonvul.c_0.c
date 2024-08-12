int FUN1(VAR1 *VAR2, VAR1 *VAR3, VAR4 **VAR5)
{
    int VAR6;
    switch (VAR2->VAR7)
    {
    case VAR8:
        VAR6 = FUN2(VAR2->VAR9.VAR10.VAR11, VAR3 ? VAR3->VAR9.VAR10.VAR11 : NULL, VAR5);
        break;
    default:
        FUN3(VAR5, "");
        VAR6 = -1;
    }
    return VAR6;
}