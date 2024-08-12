static VAR1 FUN1(void *VAR2, unsigned long VAR3, unsigned int *VAR4,
unsigned int *VAR5)
{
struct jpeg_buffer VAR6;
unsigned int VAR7;
bool VAR8 = false;

VAR6.VAR9 = VAR2 + VAR3;
VAR6.VAR10 = VAR2;


if (VAR3 < VAR11 || *(VAR1 *)(VAR2 + VAR3 - 1) != VAR12)
return 0;

for (;;) {
int VAR13;


do
VAR13 = FUN2(&VAR6);
while (VAR13 == 0xff || VAR13 == 0);

if (!VAR8 && VAR13 == VAR14) {
VAR8 = true;
continue;
} else if (VAR8 != (VAR13 != VAR14))
return 0;

switch (VAR13) {
case VAR15: 
FUN3(&VAR6, 3); 
if (FUN4(&VAR6, VAR5) ||
FUN4(&VAR6, VAR4) ||
FUN2(&VAR6) != 3) 
return 0;

FUN3(&VAR6, 1);
return FUN2(&VAR6);
case VAR16:
case VAR17:
case VAR18:
case VAR19:
case VAR20 ... VAR20 + 0x0f:
if (FUN4(&VAR6, &VAR7))
return 0;
FUN3(&VAR6, (long)VAR7 - 2);
case 0:
break;
default:
return 0;
}
}

return 0;
}