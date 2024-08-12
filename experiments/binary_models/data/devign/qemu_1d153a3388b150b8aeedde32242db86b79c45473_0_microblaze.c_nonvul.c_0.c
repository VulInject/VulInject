FUN1(bfd_vma VAR1, struct VAR2 *VAR3, struct VAR4 **VAR5)
{
    unsigned char VAR6[4];
    int VAR7;
    struct VAR4 *VAR8;
    unsigned long VAR9;
    VAR7 = VAR3->FUN2(VAR1, VAR6, 4, VAR3);
    if (VAR7 != 0)
    {
        VAR3->FUN3(VAR7, VAR1, VAR3);
        return 0;
    }
    if (VAR3->VAR10 == VAR11)
        VAR9 = ((unsigned)VAR6[0] << 24) | (VAR6[1] << 16) | (VAR6[2] << 8) | VAR6[3];
    else if (VAR3->VAR10 == VAR12)
        VAR9 = ((unsigned)VAR6[3] << 24) | (VAR6[2] << 16) | (VAR6[1] << 8) | VAR6[0];
    else
        FUN4();
    for (VAR8 = VAR13; VAR8->VAR14 != 0; VAR8++)
        if (VAR8->VAR15 == (VAR9 & VAR8->VAR16))
            break;
    *VAR5 = VAR8;
    return VAR9;
}