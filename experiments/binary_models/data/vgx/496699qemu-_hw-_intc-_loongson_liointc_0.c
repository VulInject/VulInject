static VAR1
FUN1(void *VAR2, hwaddr VAR3, unsigned int VAR4)
{
struct VAR5 *VAR6 = VAR2;
uint32_t VAR7 = 0;


if (VAR4 == 1 && VAR3 < VAR8) {
VAR7 = VAR6->VAR9[VAR3];
goto VAR10;
}


if (VAR4 != 4 || (VAR3 % 4)) {
goto VAR10;
}

if (VAR3 >= VAR11 && VAR3 < VAR12) {
hwaddr VAR13 = VAR3 - VAR11;
int VAR14 = VAR13 / VAR15;

if (VAR13 % VAR15) {
goto VAR10;
}
VAR7 = VAR6->VAR16[VAR14];
goto VAR10;
}

switch (VAR3) {
case VAR17:
VAR7 = VAR6->VAR18;
break;
case VAR19:
VAR7 = VAR6->VAR20;
break;
default:
break;
}

VAR10:
FUN2(VAR21, ""VAR22"",
VAR23, VAR4, VAR3, VAR7);
return VAR7;
}