static int
FUN1(struct VAR1 *VAR2,
enum led_brightness VAR3)
{
struct VAR4 *VAR5 = FUN2(VAR2);
struct VAR6 *VAR7 = VAR5->VAR7;
int VAR8;

switch ((int)VAR3) {
case 0:
VAR8 = FUN3(VAR7, VAR5, VAR9);
break;
case VAR10:
VAR8 = FUN3(VAR7, VAR5, VAR11);
break;
default:
VAR8 = FUN3(VAR7, VAR5, VAR12);
if (!VAR8)
VAR8 = FUN4(VAR7, VAR5, VAR3);
}

return VAR8;
}