int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, int VAR6)
{
    PutBitContext VAR7;
    unsigned VAR8 = (unsigned)VAR9 + VAR5 + VAR6;
    if (VAR8 > VAR10)
    {
        FUN2(NULL, VAR11, "", VAR8, VAR10);
        return VAR12;
    }
    FUN3(&VAR7, VAR4, VAR9);
    FUN4(&VAR7, 12, 0xfff);
    FUN4(&VAR7, 1, 0);
    FUN4(&VAR7, 2, 0);
    FUN4(&VAR7, 1, 1);
    FUN4(&VAR7, 2, VAR2->VAR13);
    FUN4(&VAR7, 4, VAR2->VAR14);
    FUN4(&VAR7, 1, 0);
    FUN4(&VAR7, 3, VAR2->VAR15);
    FUN4(&VAR7, 1, 0);
    FUN4(&VAR7, 1, 0);
    FUN4(&VAR7, 1, 0);
    FUN4(&VAR7, 1, 0);
    FUN4(&VAR7, 13, VAR8);
    FUN4(&VAR7, 11, 0x7ff);
    FUN4(&VAR7, 2, 0);
    FUN5(&VAR7);
    return 0;
}