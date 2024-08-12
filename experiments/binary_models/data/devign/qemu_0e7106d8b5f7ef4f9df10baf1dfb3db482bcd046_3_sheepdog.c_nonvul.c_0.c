static int FUN1(VAR1 *VAR2, int64_t VAR3)
{
    VAR4 *VAR5 = VAR2->VAR6;
    int VAR7, VAR8;
    unsigned int VAR9;
    if (VAR3 < VAR5->VAR10.VAR11)
    {
        FUN2("");
        return -VAR12;
    }
    else if (VAR3 > VAR13)
    {
        FUN2("");
        return -VAR12;
    }
    VAR8 = FUN3(VAR5->VAR14, VAR5->VAR15);
    if (VAR8 < 0)
    {
        return VAR8;
    }
    VAR9 = VAR16 - sizeof(VAR5->VAR10.VAR17);
    VAR5->VAR10.VAR11 = VAR3;
    VAR7 = FUN4(VAR8, (char *)&VAR5->VAR10, FUN5(VAR5->VAR10.VAR18), VAR5->VAR10.VAR19, VAR9, 0, false, VAR5->VAR20);
    close(VAR8);
    if (VAR7 < 0)
    {
        FUN2("");
    }
    return VAR7;
}