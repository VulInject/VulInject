VAR1 FUN1(const void *VAR2, unsigned *VAR3)
{
const VAR4 *VAR5 = VAR2;
unsigned int VAR6, VAR7;
MPI VAR8;

if (*VAR3 < 2)
return FUN2(-VAR9);
VAR6 = VAR5[0] << 8 | VAR5[1];

if (VAR6 > VAR10) {
FUN3("", VAR6);
return FUN2(-VAR9);
}

VAR7 = FUN4(VAR6, 8);
if (VAR7 + 2 > *VAR3) {
FUN3("",
VAR7, *VAR3);
return FUN2(-VAR9);
}

VAR8 = FUN5(VAR5 + 2, VAR7);
if (!VAR8)
return FUN2(-VAR11);

*VAR3 = VAR7 + 2;
return VAR8;
}