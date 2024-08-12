void FUN1(int *VAR1, u16 VAR2)
{
int VAR3, VAR4;
struct iovec VAR5;
int VAR6[2];

VAR3 = FUN2(VAR6);

FUN3(VAR3 == 0);
FUN4(""
"", VAR2);
FUN5(VAR2);
VAR5.VAR7 = VAR1;
VAR5.VAR8 = VAR9;
VAR4 = FUN6(VAR6[1], &VAR5, 1, VAR10);
FUN4("", VAR4);
FUN3(VAR4 == -1);

close(VAR6[0]);
close(VAR6[1]);
}