int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5)
{
VAR6 *VAR7 = FUN2(VAR2);
VAR8 *VAR9 = &VAR7->VAR9;

if (VAR5 < 15) {
return FUN3(VAR4, VAR9->VAR10[VAR5]);
}

if (VAR5 == 15) {
return FUN3(VAR4, VAR9->VAR11);
}

if (VAR5 < 32) {
switch (VAR5) {
case 16:
return FUN4(VAR4, VAR9->VAR12[VAR5 - 16]);
case 17:
return FUN4(VAR4, VAR9->VAR12[VAR5 - 16]);
case 20:
case 21:
return FUN5(VAR4, VAR9->VAR12[VAR5 - 16]);
default:
if (VAR5 >= 23) {
return FUN3(VAR4, VAR9->VAR12[VAR5 - 16]);
}
break;
}
}
return 0;
}