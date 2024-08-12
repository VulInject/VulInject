static int FUN1(VAR1 *VAR2, VAR1 *VAR3, int VAR4, char *VAR5, VAR6 **VAR7)
{
    uint32_t VAR8;
    VAR8 = FUN2(VAR5);
    switch (VAR8)
    {
    case VAR9:
        return FUN3(VAR2, VAR3, VAR4, VAR7);
        break;
    case VAR10:
        return FUN4(VAR2, VAR3, VAR4, VAR7);
        break;
    default:
        FUN5(VAR7, "");
        return -VAR11;
        break;
    }
}