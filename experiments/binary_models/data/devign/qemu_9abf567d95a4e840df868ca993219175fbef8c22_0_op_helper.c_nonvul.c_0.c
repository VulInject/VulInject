int FUN1(VAR1 *VAR2, uint32_t VAR3, uint64_t VAR4)
{
    int VAR5 = 0;
    int VAR6 = 0;
    FUN2("" VAR7 "", VAR3, VAR4);
    if (!FUN3(FUN4(VAR3 >> VAR8)->VAR9))
    {
        return -VAR10;
    }
    if (VAR3 & ~0x7ffffff8ul)
    {
        return -VAR11;
    }
    switch (VAR4)
    {
    case VAR12:
    case VAR13:
        while ((VAR14 >> (20 + VAR6)) > 65535)
        {
            VAR6++;
        }
        FUN5(VAR3 + VAR15, VAR14 >> (20 + VAR6));
        FUN6(VAR3 + VAR16, 1 << VAR6);
        FUN5(VAR3 + VAR17, 0x10);
        if (FUN7())
        {
            FUN8(VAR2, VAR18, VAR3 & ~3, 0, 1);
        }
        else
        {
            VAR2->VAR19.VAR20 += 4;
            FUN9(VAR2, VAR21, VAR3 & ~3, 0);
        }
        break;
    default:
        FUN2("" VAR7 "", VAR3, VAR4);
        VAR5 = 3;
        break;
    }
    return VAR5;
}