int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    VAR6 *VAR7 = VAR2->VAR8;
    VAR9 *VAR10 = VAR7->VAR11;
    struct VAR12 *VAR13 = VAR10->VAR14;
    VdpVideoSurface VAR15 = FUN2(&VAR10->VAR16);
    VAR4->FUN3(VAR4->VAR17, VAR15, (void *)&VAR13->VAR18, VAR13->VAR19, VAR13->VAR20);
    FUN4(VAR7, 0, VAR7->VAR2->VAR21);
    FUN5(&VAR13->VAR20);
    return 0;
}