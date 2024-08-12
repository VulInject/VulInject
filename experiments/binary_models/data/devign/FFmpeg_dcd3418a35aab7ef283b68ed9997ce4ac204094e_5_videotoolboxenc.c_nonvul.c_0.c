static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    enum AVColorPrimaries VAR5 = VAR2->VAR6;
    switch (VAR5)
    {
    case VAR7:
        *VAR4 = NULL;
        break;
    case VAR8:
        *VAR4 = VAR9;
        break;
    case VAR10:
        *VAR4 = VAR11.VAR12;
        break;
    default:
        FUN2(VAR2, VAR13, "", FUN3(VAR5));
        *VAR4 = NULL;
        return -1;
    }
    return 0;
}