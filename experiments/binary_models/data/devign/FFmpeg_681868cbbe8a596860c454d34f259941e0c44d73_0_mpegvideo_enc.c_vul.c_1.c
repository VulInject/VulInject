static void FUN1(VAR1 *VAR2, VAR1 *VAR3)
{
    int VAR4;
    FUN2(VAR5[0]);
    FUN2(VAR5[1]);
    FUN2(VAR6);
    FUN2(VAR7);
    FUN2(VAR8);
    FUN2(VAR9);
    FUN2(VAR10);
    FUN2(VAR11);
    FUN2(VAR12);
    FUN2(VAR13);
    FUN2(VAR14.VAR15);
    FUN2(VAR16);
    FUN2(VAR17.VAR18->VAR19[0]);
    FUN2(VAR17.VAR18->VAR19[1]);
    FUN2(VAR17.VAR18->VAR19[2]);
    if (VAR2->VAR20->VAR21)
    {
        for (VAR4 = 0; VAR4 < 64; VAR4++)
        {
            FUN2(VAR22[0][VAR4]);
            FUN2(VAR22[1][VAR4]);
        }
    }
    assert(FUN3(&VAR3->VAR23) % 8 == 0);
    assert(FUN3(&VAR2->VAR23) % 8 == 0);
    FUN4(&VAR2->VAR23, VAR3->VAR23.VAR24, FUN3(&VAR3->VAR23));
    FUN5(&VAR2->VAR23);
}