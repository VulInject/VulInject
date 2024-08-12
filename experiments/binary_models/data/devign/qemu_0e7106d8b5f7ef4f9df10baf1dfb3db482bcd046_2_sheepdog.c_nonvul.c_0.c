static int FUN1(int VAR1, char *VAR2, uint64_t VAR3, int VAR4, unsigned int VAR5, uint64_t VAR6, bool write, bool VAR7, uint32_t VAR8)
{
    SheepdogObjReq VAR9;
    VAR10 *VAR11 = (VAR10 *)&VAR9;
    unsigned int VAR12, VAR13;
    int VAR14;
    memset(&VAR9, 0, sizeof(VAR9));
    if (write)
    {
        VAR12 = VAR5;
        VAR13 = 0;
        VAR9.VAR15 = VAR16;
        if (VAR7)
        {
            VAR9.VAR17 = VAR18;
        }
        else
        {
            VAR9.VAR17 = VAR19;
        }
    }
    else
    {
        VAR12 = 0;
        VAR13 = VAR5;
        VAR9.VAR17 = VAR20;
    }
    VAR9.VAR15 |= VAR8;
    VAR9.VAR3 = VAR3;
    VAR9.VAR21 = VAR5;
    VAR9.VAR6 = VAR6;
    VAR9.VAR4 = VAR4;
    VAR14 = FUN2(VAR1, (VAR22 *)&VAR9, VAR2, &VAR12, &VAR13);
    if (VAR14)
    {
        FUN3("");
        return VAR14;
    }
    switch (VAR11->VAR23)
    {
    case VAR24:
        return 0;
    default:
        FUN3("", FUN4(VAR11->VAR23));
        return -VAR25;
    }
}