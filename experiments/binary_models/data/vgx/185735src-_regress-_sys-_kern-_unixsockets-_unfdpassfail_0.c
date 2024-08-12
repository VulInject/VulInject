int main(int argc, char *argv[])
{
struct timespec VAR1, VAR2, VAR3;
union msg_control VAR4;
int VAR5;
struct iovec VAR6;
struct msghdr VAR7;
struct VAR8 *VAR9;
pthread_t VAR10;
int VAR11[2], VAR12, VAR13;
int VAR14 = 0, VAR15;

if (argc > 1 && !strcmp(argv[1], ""))
VAR14 = 1;

if ((VAR13 = FUN1()) < 0)
FUN2(1, "");

if (!VAR14)
if (FUN3(VAR16, &VAR1) <0)
FUN2(1, "");

while (1) {
if (FUN4(VAR17, VAR18|VAR19, 0, VAR11) < 0)
FUN2(1, "");
if ((VAR12 = socket(VAR17, VAR20, 0)) < 0)
FUN2(1, "");

VAR5 = 0;
VAR6.VAR21 = &VAR5;
VAR6.VAR22 = sizeof(VAR5);
VAR7.VAR4 = VAR4.VAR23;
VAR7.VAR24 = sizeof(VAR4.VAR23);
VAR7.VAR25 = &VAR6;
VAR7.VAR26 = 1;
VAR7.VAR27 = NULL;
VAR7.VAR28 = 0;
VAR9 = FUN5(&VAR7);
VAR9->VAR29 = FUN6(sizeof(int) * 2);
VAR9->VAR30 = VAR31;
VAR9->VAR32 = VAR33;
*((int *)FUN7(VAR9) + 0) = VAR12;
*((int *)FUN7(VAR9) + 1) = VAR13;

VAR15 = FUN8(&VAR10, NULL, VAR34, &VAR12);
if (VAR15)
FUN9(1, VAR15, "");

if (sendmsg(VAR11[0], &VAR7, 0) < 0) {
if (VAR35 != VAR36)
FUN2(1, "");
}

VAR15 = FUN10(VAR10, NULL);
if (VAR15)
FUN9(1, VAR15, "");

close(VAR11[0]);
close(VAR11[1]);
close(VAR12);

if (!VAR14) {
if (FUN3(VAR16, &VAR2) <0)
FUN2(1, "");

FUN11(&VAR2, &VAR1, &VAR3);
if (VAR3.VAR37 >= 20)
break;
}
}

close(VAR13);

return 0;
}