static void FUN1(VAR1 *VAR2)
{
    mcf_fec_bd VAR3;
    FUN2(&VAR3, VAR2->VAR4);
    VAR2->VAR5 = ((VAR3.VAR6 & VAR7) != 0);
    if (!VAR2->VAR5)
        FUN3("");
}