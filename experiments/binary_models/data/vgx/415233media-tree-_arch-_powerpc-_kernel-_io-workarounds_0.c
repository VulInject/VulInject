struct VAR1 *FUN1(const PCI_IO_ADDR VAR2)
{
unsigned VAR3;
struct VAR1 *VAR4;
int VAR5;

VAR5 = FUN2(VAR2);

if (VAR5 && VAR5 <= VAR6)
VAR4 = &VAR7[VAR5 - 1];
else {
unsigned long VAR8, VAR9;
VAR10 *VAR11;

VAR8 = (unsigned long)FUN3(VAR2);
if (VAR8 < VAR12 || VAR8 >= VAR13)
return NULL;

VAR11 = FUN4(VAR14.VAR15, VAR8,
NULL, &VAR3);
if (VAR11 == NULL)
VAR9 = 0;
else {
FUN5(VAR3);
VAR9 = FUN6(*VAR11) << VAR16;
}
VAR4 = FUN7(VAR8, VAR9);

if (VAR4 == NULL)
return NULL;
}

return VAR4;
}