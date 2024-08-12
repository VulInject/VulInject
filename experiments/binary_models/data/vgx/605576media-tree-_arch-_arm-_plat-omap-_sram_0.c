void *FUN1(unsigned long VAR1)
{
unsigned long VAR2, VAR3 = (unsigned long)VAR4;

VAR2 = VAR4 - (VAR5 + VAR6);

if (VAR1 > VAR2) {
FUN2("");
return NULL;
}

VAR3 -= VAR1;
VAR3 = FUN3(VAR3, VAR7);
VAR4 = FUN4(VAR3);

return (void *)VAR4;
}