static int
FUN1(dev_t VAR1, VAR2 *VAR3, VAR4 *VAR5)
{
VAR6 *VAR7;
minor_t VAR8 = FUN2(VAR1);
uint64_t VAR9, VAR10;
int VAR11;

if (VAR3->VAR12 < sizeof (VAR9))
return (VAR13);

VAR7 = FUN3(VAR14, VAR8);

FUN4(&VAR7->VAR15);

while (VAR7->VAR16 == 0) {
if (VAR3->VAR17 & (VAR18|VAR19)) {
FUN5(&VAR7->VAR15);
return (VAR20);
}

if (!FUN6(&VAR7->VAR21, &VAR7->VAR15)) {
FUN5(&VAR7->VAR15);
return (VAR22);
}
}


VAR9 = VAR10 = VAR7->VAR16;

if (VAR7->VAR23) {
VAR7->VAR16--;
VAR9 = 1;
} else {
VAR7->VAR16 = 0;
}

VAR11 = FUN7(&VAR9, sizeof (VAR9), VAR24, VAR3);


if (VAR7->VAR25 != 0) {
FUN8(&VAR7->VAR21);
}
FUN5(&VAR7->VAR15);


if (VAR10 == VAR26) {
FUN9(&VAR7->VAR27, VAR28 | VAR29);
}

return (VAR11);
}