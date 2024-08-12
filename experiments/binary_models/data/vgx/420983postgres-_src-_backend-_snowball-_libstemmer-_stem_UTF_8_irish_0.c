static int FUN1(struct VAR1 * VAR2) {
int VAR3;
VAR2->VAR4 = VAR2->VAR5;
VAR3 = FUN2(VAR2, VAR6, 16);
if (!(VAR3)) return 0;
VAR2->VAR7 = VAR2->VAR5;
switch (VAR3) {
case 1:
{   int VAR8 = FUN3(VAR2);
if (VAR8 <= 0) return VAR8;
}
{   int VAR8 = FUN4(VAR2);
if (VAR8 < 0) return VAR8;
}
break;
case 2:
{   int VAR8 = FUN5(VAR2);
if (VAR8 <= 0) return VAR8;
}
{   int VAR8 = FUN4(VAR2);
if (VAR8 < 0) return VAR8;
}
break;
}
return 1;
}