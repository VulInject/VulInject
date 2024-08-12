static int
FUN1(uintptr_t VAR1, const VAR2 *VAR3, VAR4 **VAR5)
{
VAR4 *VAR6 = *VAR5;
mdb_walk_cb_t VAR7;
const char *VAR8;
int VAR9 = (VAR3->VAR10 & VAR11);

if (!FUN2(VAR3))
return (VAR12);

if (VAR9) {
VAR8 = "";
VAR7 = (VAR13)VAR14;
} else {
VAR8 = "";
VAR7 = (VAR13)VAR15;
}
if (FUN3(VAR8, VAR7, VAR5, VAR1) == -1) {
FUN4("", VAR1,
VAR3->VAR16);
return (VAR17);
}

for (; VAR6 < *VAR5; VAR6++) {
VAR6->VAR18 = VAR6->VAR19 + VAR3->VAR20;
if (!VAR9)
VAR6->VAR21 = FUN5(VAR1, VAR22);
}

return (VAR12);
}