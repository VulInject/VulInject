VAR1 FUN1(u_long VAR2, struct VAR3 *VAR4, struct VAR5 *VAR6)
{
map_word VAR7 = { {0} };
int VAR8, VAR9, VAR10, VAR11;
unsigned long VAR12;
int VAR13;


if (FUN2(VAR4)) {
VAR8 = sizeof(unsigned long);
VAR9 = (FUN3(VAR4)) / VAR8; 
} else {
VAR8 = FUN3(VAR4);
VAR9 = 1;
}

VAR10 = FUN3(VAR4) / FUN4(VAR6);
VAR11 = VAR8 * FUN4(VAR6) / FUN3(VAR4);


switch (VAR10) {
default: FUN5();
case 1:
VAR12 = VAR2;
break;
case 2:
VAR12 = FUN6(VAR4, VAR2);
break;
case 4:
VAR12 = FUN7(VAR4, VAR2);
break;
}


switch (VAR11) {
default: FUN5();
case 8:
VAR12 |= (VAR12 << (VAR10 * 32));
case 4:
VAR12 |= (VAR12 << (VAR10 * 16));
case 2:
VAR12 |= (VAR12 << (VAR10 * 8));
case 1:
;
}


for (VAR13=0; VAR13 < VAR9; VAR13++) {
VAR7.VAR14[VAR13] = VAR12;
}

return VAR7;
}