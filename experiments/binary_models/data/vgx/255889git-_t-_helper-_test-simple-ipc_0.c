static int FUN1(void)
{
struct child_process VAR1 = VAR2;
enum start_bg_result VAR3;

FUN2(&VAR1.VAR4, "");
FUN2(&VAR1.VAR4, "");
FUN2(&VAR1.VAR4, "");
FUN3(&VAR1.VAR4, "", VAR5.VAR6);
FUN3(&VAR1.VAR4, "", VAR5.VAR7);

VAR1.VAR8 = 1;
VAR1.VAR9 = 1;
VAR1.VAR10 = 1;

VAR3 = FUN4(&VAR1, VAR11, NULL, VAR5.VAR12);

switch (VAR3) {
case VAR13:
return 0;

default:
case VAR14:
case VAR15:
return FUN5("");

case VAR16:
return FUN5("");

case VAR17:
return FUN5("");
}
}