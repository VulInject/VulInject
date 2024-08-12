void
FUN1(void)
{
struct sockaddr		VAR1;
int			VAR2;
socklen_t		VAR3;
struct VAR4 *VAR5;


VAR3 = sizeof VAR1;
VAR2 = FUN2(VAR6, (struct VAR7 *) &VAR1, &VAR3,
VAR8);
if (VAR2 < 0) {
FUN3(VAR9, "");
return;
}


VAR5 = calloc(1, sizeof *VAR5);
if (VAR5 == NULL) {
FUN3(VAR9, "");
close(VAR2);
return;
}


memcpy(&VAR5->VAR10, &VAR1, sizeof VAR5->VAR10);
VAR5->VAR11 = VAR3;


if (VAR3 > sizeof VAR12->VAR10)
FUN4(VAR13,
"",
VAR3, sizeof VAR12->VAR10);


VAR5->VAR14 = VAR2;
FUN5(VAR5->VAR14, &VAR15);
if (VAR5->VAR14 >= VAR16)
VAR16 = VAR5->VAR14 + 1;

VAR5->VAR17 = 0;
VAR5->VAR18 = 0;


if ((VAR5->VAR19 = VAR12) != NULL)
VAR12->VAR20 = &VAR5->VAR19;
VAR5->VAR20 = &VAR12;
VAR12 = VAR5;
}