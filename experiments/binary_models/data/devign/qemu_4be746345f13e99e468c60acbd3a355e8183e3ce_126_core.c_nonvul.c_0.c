static void FUN1(VAR1 *VAR2, int VAR3)
{
    static int VAR4 = 1;
    VAR5 *VAR6 = &VAR2->VAR7[VAR3];
    VAR6->VAR2 = VAR2;
    VAR6->VAR3 = VAR3;
    VAR6->VAR4 = VAR4++;
    VAR6->VAR8 = VAR9 * 512 + 4;
    VAR6->VAR10 = FUN2(2048, VAR6->VAR8);
    memset(VAR6->VAR10, 0, VAR6->VAR8);
    VAR6->VAR11 = FUN3(VAR6->VAR12, 512);
    memset(VAR6->VAR11, 0, 512);
    VAR6->VAR13 = FUN4(VAR14, VAR15, VAR6);
}