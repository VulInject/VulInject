void FUN1(VAR1 *VAR2, void *VAR3, unsigned long VAR4)
{
    unsigned long VAR5;
    int VAR6;
    struct disassemble_info VAR7;
    int (*VAR8)(bfd_vma VAR5, VAR9 * VAR10);
    FUN2(VAR7, VAR2, fprintf);
    VAR7.VAR11 = VAR3;
    VAR7.VAR12 = (unsigned long)VAR3;
    VAR7.VAR13 = VAR4;
    VAR7.VAR14 = VAR15;
    VAR7.VAR14 = VAR16;
    VAR7.VAR17 = VAR18;
    VAR8 = VAR19;
    VAR7.VAR17 = VAR20;
    VAR8 = VAR19;
    VAR8 = VAR21;
    VAR8 = VAR22;
    VAR8 = VAR23;
    VAR7.VAR17 = VAR24;
    VAR8 = VAR25;
    VAR8 = VAR26;
    VAR8 = VAR27;
    VAR8 = VAR28;
    VAR8 = VAR29;
    VAR8 = VAR30;
    VAR8 = VAR31;
    fprintf(VAR2, "", (long)VAR3);
    return;
    for (VAR5 = (unsigned long)VAR3; VAR4 > 0; VAR5 += VAR6, VAR4 -= VAR6)
    {
        fprintf(VAR2, "", VAR5);
        VAR6 = FUN3(VAR5, &VAR7);
        fprintf(VAR2, "");
        if (VAR6 < 0)
            break;
    }
}