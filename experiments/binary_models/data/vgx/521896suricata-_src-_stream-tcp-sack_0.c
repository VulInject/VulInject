static int FUN1 (void)
{
TcpStream VAR1;
memset(&VAR1, 0, sizeof(VAR1));
VAR1.VAR2 = 1000;

FUN2(&VAR1, 100, 119);
FUN2(&VAR1, 111, 119);
FUN2(&VAR1, 121, 129);
FUN2(&VAR1, 131, 139);
FUN2(&VAR1, 101, 140);
FUN3(&VAR1);

VAR3 *VAR4 = FUN4(VAR5, &VAR1.VAR6);
FUN5(VAR4);
FUN6(VAR4->VAR7 != 100);
FUN6(VAR4->VAR8 != 140);
FUN6(FUN7(&VAR1) != 40);

VAR1.VAR9 = 99;
FUN8(&VAR1);
FUN6(FUN7(&VAR1) != 40);

FUN9(&VAR1);
VAR10;
}