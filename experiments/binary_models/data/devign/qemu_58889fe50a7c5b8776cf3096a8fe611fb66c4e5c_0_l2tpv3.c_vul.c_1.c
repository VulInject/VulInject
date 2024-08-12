static struct VAR1 *FUN1(VAR2 *VAR3, int VAR4)
{
    int VAR5;
    struct VAR6 *VAR7;
    struct VAR1 *VAR8, *VAR9;
    VAR8 = FUN2(sizeof(struct VAR1) * VAR4);
    VAR9 = VAR8;
    for (VAR5 = 0; VAR5 < VAR4; VAR5++)
    {
        VAR8->VAR10.VAR11 = NULL;
        VAR8->VAR10.VAR12 = 0;
        VAR7 = FUN2(sizeof(struct VAR6) * VAR13);
        VAR8->VAR10.VAR14 = VAR7;
        VAR7->VAR15 = FUN2(VAR3->VAR16);
        VAR7->VAR17 = VAR3->VAR16;
        VAR7++;
        VAR7->VAR15 = FUN3(VAR18, VAR19);
        VAR7->VAR17 = VAR19;
        VAR8->VAR10.VAR20 = 2;
        VAR8->VAR10.VAR21 = NULL;
        VAR8->VAR10.VAR22 = 0;
        VAR8->VAR10.VAR23 = 0;
        VAR8++;
    }
    return VAR9;
}