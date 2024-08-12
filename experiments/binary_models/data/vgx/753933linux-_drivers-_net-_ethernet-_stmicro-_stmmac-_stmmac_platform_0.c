static int FUN1(struct VAR1 *VAR2, int VAR3)
{
int VAR4 = VAR3;

switch (VAR4) {
case VAR5:
case 128:
case 256:
break;
default:
VAR4 = 0;
FUN2(VAR2, "",
VAR3);
break;
}
return VAR4;
}