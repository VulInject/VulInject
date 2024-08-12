static int FUN1(VAR1 *VAR2, VAR3 *VAR4, MOV_atom_t VAR5)
{
    int VAR6;
    uint32_t VAR7;
    FUN2("", VAR5);
    VAR8++;
    if (VAR5.VAR9 < 8)
        return 0;
    if (FUN3(VAR4) != 0)
    {
        FUN4(VAR4, VAR5.VAR9 - 4);
        return 0;
    }
    VAR5.VAR7 = FUN5(VAR4);
    VAR5.VAR10 += 8;
    VAR5.VAR9 -= 8;
    if (VAR7 != FUN6('', '', '', ''))
    {
        FUN4(VAR4, VAR5.VAR9);
        return 0;
    }
    VAR6 = FUN7(VAR2, VAR4, VAR5);
    VAR8--;
    return VAR6;
}