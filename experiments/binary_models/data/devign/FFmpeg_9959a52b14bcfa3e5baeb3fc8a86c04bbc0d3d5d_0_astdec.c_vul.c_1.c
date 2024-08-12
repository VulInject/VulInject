static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    uint32_t VAR5, VAR6;
    int64_t VAR7;
    int VAR8;
    if (FUN2(VAR2->VAR9))
        return VAR10;
    VAR7 = FUN3(VAR2->VAR9);
    VAR5 = FUN4(VAR2->VAR9);
    VAR6 = FUN5(VAR2->VAR9);
    if (VAR6 > VAR11 / VAR2->VAR12[0]->VAR13->VAR14)
        return VAR15;
    VAR6 *= VAR2->VAR12[0]->VAR13->VAR14;
    if ((VAR8 = FUN6(VAR2->VAR9, 24)) < 0)
        return VAR8;
    if (VAR5 == FUN7('', '', '', ''))
    {
        VAR8 = FUN8(VAR2->VAR9, VAR4, VAR6);
        VAR4->VAR16 = 0;
        VAR4->VAR7 = VAR7;
    }
    else
    {
        FUN9(VAR2, VAR17, "", VAR5);
        FUN6(VAR2->VAR9, VAR6);
        VAR8 = VAR15;
    }
    return VAR8;
}