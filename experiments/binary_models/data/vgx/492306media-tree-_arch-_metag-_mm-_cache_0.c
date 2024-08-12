void FUN1(const void *VAR1, int VAR2)
{
void *VAR3;
int VAR4, VAR5;

if ((FUN2(VAR6) & VAR7) == 0)

return;


FUN3(VAR1, VAR2);


if (VAR2 >= 4096) {
FUN3(VAR1, VAR2);
return;
}


VAR3 = (void *)((int)VAR1 & ~(VAR8-1));
VAR4  = ((int)VAR1 & (VAR8-1)) + VAR2 +
(VAR8-1);
VAR4  >>= VAR9;

FUN4(((VAR10) + ((VAR11) * 64)), VAR12)


do {

VAR5 = 0;

switch (VAR4) {

default:
FUN5(VAR3, 3);
VAR4 -= 4;
VAR5 = 1;
case 3:
FUN5(VAR3, 2);
case 2:
FUN5(VAR3, 1);
case 1:
FUN5(VAR3, 0);
VAR3 += VAR13;
case 0:
break;
}
} while (VAR5);
}