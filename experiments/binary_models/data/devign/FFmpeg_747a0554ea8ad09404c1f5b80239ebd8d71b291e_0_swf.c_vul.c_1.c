static void FUN1(VAR1 *VAR2, int VAR3, int VAR4, int VAR5, int VAR6, int VAR7, int VAR8)
{
    PutBitContext VAR9;
    uint8_t VAR10[256];
    FUN2(&VAR9, VAR10, sizeof(VAR10));
    FUN3(&VAR9, 1, 1);
    FUN3(&VAR9, 5, 20);
    FUN3(&VAR9, 20, VAR3);
    FUN3(&VAR9, 20, VAR6);
    FUN3(&VAR9, 1, 1);
    FUN3(&VAR9, 5, 20);
    FUN3(&VAR9, 20, VAR5);
    FUN3(&VAR9, 20, VAR4);
    FUN3(&VAR9, 5, 20);
    FUN3(&VAR9, 20, VAR7);
    FUN3(&VAR9, 20, VAR8);
    FUN4(&VAR9);
    FUN5(VAR2, VAR10, FUN6(&VAR9) - VAR9.VAR10);
}