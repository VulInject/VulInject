FUN1 (VAR1 * VAR2)
{
guint8 VAR3[16];

FUN2 (VAR2->VAR4, VAR3, 0, 16);

switch (VAR2->VAR5) {
case 3:
VAR2->VAR6 = FUN3 (VAR3) + 8;
break;
case 4:
VAR2->VAR6 = FUN4 (VAR3 + 12) + 16;
break;
default:
VAR2->VAR6 = 0;
FUN5 (VAR7);
}

return VAR8;
}