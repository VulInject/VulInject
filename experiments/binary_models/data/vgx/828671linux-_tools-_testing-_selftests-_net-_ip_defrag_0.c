static void FUN1(void)
{
struct sockaddr_in VAR1 = {0};

VAR1.VAR2 = VAR3;
VAR1.VAR4 = FUN2(VAR5);
VAR1.VAR6 = VAR7;

FUN3((void *)&VAR1, sizeof(VAR1), false );
}