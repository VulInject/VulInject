static VAR1 FUN1(VAR2 * VAR3, void * VAR4, size_t VAR5)
{
VAR6 * VAR7 = VAR3->VAR7;
VAR7->VAR8->VAR9 = VAR3->VAR9;
VAR10 * VAR11 = VAR7->VAR12;

int VAR13;

do {

if (VAR11->VAR14 == 0) {
int read = (int) VAR7->VAR8->VAR15->FUN2(VAR7->VAR8, VAR7->VAR16, VAR17);
if (read <= 0) {
return read;
}
VAR11->VAR14 = read;
VAR11->VAR18 = VAR7->VAR16;
}


VAR11->VAR19 = VAR4;
VAR11->VAR20 = (int) VAR5;


VAR13 = FUN3(VAR11, VAR21);
}

while (VAR13 == VAR22 && VAR11->VAR14 == 0 && VAR11->VAR20 == VAR5);


if (VAR13 < 0) {
return -1;
}


return VAR5 - VAR11->VAR20;
return -1;
}