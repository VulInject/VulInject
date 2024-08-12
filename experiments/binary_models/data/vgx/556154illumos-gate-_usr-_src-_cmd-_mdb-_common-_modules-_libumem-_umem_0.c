int
FUN1(VAR1 *VAR2)
{
vmem_seg_t VAR3;
VAR4 *VAR5 = VAR2->VAR6;
uintptr_t VAR7 = VAR5->VAR8;
static size_t VAR9 = 0;
int VAR10;

if (!VAR9) {
if (FUN2(&VAR9, "") == -1) {
FUN3("");
VAR9 = sizeof (VAR11);
}
}

if (VAR9 < sizeof (VAR3))
FUN4((VAR12)&VAR3 + VAR9, sizeof (VAR3) - VAR9);

if (FUN5(&VAR3, VAR9, VAR7) == -1) {
FUN3("", VAR7);
return (VAR13);
}

VAR5->VAR8 = (VAR14)VAR3.VAR15;
if (VAR5->VAR16 != VAR17 && VAR3.VAR18 != VAR5->VAR16) {
VAR10 = VAR19;
} else {
VAR10 = VAR2->FUN6(VAR7, &VAR3, VAR2->VAR20);
}

if (VAR5->VAR8 == VAR5->VAR21)
return (VAR22);

return (VAR10);
}