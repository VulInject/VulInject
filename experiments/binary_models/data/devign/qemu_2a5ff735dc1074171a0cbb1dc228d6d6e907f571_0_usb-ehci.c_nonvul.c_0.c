static int FUN1(VAR1 *VAR2, int VAR3)
{
    int VAR4 = 0;
    uint32_t VAR5 = FUN2(VAR2, VAR3);
    if (FUN3(VAR5))
    {
        FUN4(VAR2, VAR3, VAR6);
        goto VAR7;
    }
    if (VAR3 && (FUN5(VAR5) != VAR8))
    {
        fprintf(VAR9, "");
        return -1;
    }
    switch (FUN5(VAR5))
    {
    case VAR8:
        FUN4(VAR2, VAR3, VAR10);
        VAR4 = 1;
        break;
    case VAR11:
        FUN4(VAR2, VAR3, VAR12);
        VAR4 = 1;
        break;
    case VAR13:
        FUN4(VAR2, VAR3, VAR14);
        VAR4 = 1;
        break;
    default:
        fprintf(VAR9, ""
                        "",
                VAR5, FUN5(VAR5));
        return -1;
    }
VAR7:
    return VAR4;
}