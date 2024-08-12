VAR1 FUN1(void *VAR2)
{
u32 VAR3;
Bool VAR4;
VAR5 *VAR6 = (VAR5 *)VAR2;
FUN2();

if (!FUN3(VAR7, VAR6)) {
VAR7->VAR8 = VAR9;
return 1;
}

VAR7->VAR8 = VAR10;
while (VAR7->VAR8==VAR10) {

FUN4(VAR7->VAR11);

VAR4 = FUN5(VAR7, VAR6);

FUN6(VAR7->VAR11);


if (VAR7->VAR12 && (VAR3 + 2000 < FUN7()) ) {
if (VAR13) FUN8(0);
VAR13 = 0;
} else if (!VAR13) {
FUN8(1);
VAR13 = 1;
}


if (!VAR4) {
VAR7->VAR8 = VAR9;
break;
}

FUN9(2);
}

while (VAR7->VAR8 == VAR9)
FUN9(10);

FUN10(VAR7);
VAR7->VAR8 = VAR14;

return 0;
}