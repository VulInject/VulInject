static int FUN1(const char *VAR1, int VAR2, int *VAR3)
{
int VAR4;
struct sockaddr_un VAR5;

VAR4 = socket(VAR6, VAR2, 0);
if (VAR4 == -1)
return -1;

VAR5.VAR7 = VAR6;
FUN2(VAR5.VAR8, VAR1, sizeof(VAR5.VAR8));

if (connect(VAR4, (struct VAR9 *)&VAR5, sizeof(VAR5)) == -1) {
int VAR10 = VAR11;
close(VAR4);
VAR11 = VAR10;
return -1;
}

*VAR3 = VAR4;
return 0;
}