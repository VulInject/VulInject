int
FUN1(void)
{
int VAR1, VAR2, VAR3;
struct timespec VAR4;
struct kevent VAR5;
u_int32_t VAR6[VAR7];

FUN2((VAR2 = open("", VAR8)) >= 0,
FUN3(""));
FUN2(FUN4(VAR2, VAR9, VAR10) == 0,
FUN3(""));

FUN2((VAR3 = FUN5()) >= 0,
FUN3(""));

memset(&VAR5, 0, sizeof(VAR5));
VAR5.VAR11 = VAR2;
VAR5.VAR12 = VAR13;
VAR5.VAR14 = VAR15 | VAR16;
VAR1 = FUN6(VAR3, &VAR5, 1, NULL, 0, NULL);
FUN7(VAR1 != -1);

VAR4.VAR17 = 0;
VAR4.VAR18 = 0;
VAR1 = FUN6(VAR3, NULL, 0, &VAR5, 1, &VAR4);
FUN7(VAR1 >= 0);

VAR1 = FUN8((VAR5.VAR19 + 7) / 8, sizeof(VAR6));
FUN7(read(VAR2, VAR6, VAR1) > 0);

close(VAR3);
close(VAR2);

return (0);
}