static int FUN1(VAR1 *VAR2, int *VAR3, int *VAR4, uint32_t VAR5)
{
    struct VAR6 *VAR7 = VAR2->VAR8;
    int VAR9 = VAR7->VAR9;
    struct v4l2_format VAR10 = {.VAR11 = VAR12};
    struct VAR13 *VAR14 = &VAR10.VAR10.VAR14;
    int VAR15;
    VAR14->VAR3 = *VAR3;
    VAR14->VAR4 = *VAR4;
    VAR14->VAR16 = VAR5;
    VAR14->VAR17 = VAR18;
    VAR15 = FUN2(VAR9, VAR19, &VAR10);
    if ((*VAR3 != VAR10.VAR10.VAR14.VAR3) || (*VAR4 != VAR10.VAR10.VAR14.VAR4))
    {
        FUN3(VAR2, VAR20, "", *VAR3, *VAR4, VAR10.VAR10.VAR14.VAR3, VAR10.VAR10.VAR14.VAR4);
        *VAR3 = VAR10.VAR10.VAR14.VAR3;
        *VAR4 = VAR10.VAR10.VAR14.VAR4;
    }
    if (VAR5 != VAR10.VAR10.VAR14.VAR16)
    {
        FUN3(VAR2, VAR21, ""
                                  "",
               VAR5, VAR10.VAR10.VAR14.VAR16);
        VAR15 = -1;
    }
    if (VAR10.VAR10.VAR14.VAR17 == VAR22)
    {
        FUN3(VAR2, VAR21, "");
        VAR7->VAR23 = 1;
    }
    return VAR15;
}