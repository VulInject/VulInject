static int
FUN1(VAR1 *VAR2, VAR3 *VAR4, void *VAR5, char *VAR6)
{
VAR7 *VAR8;
uint64_t VAR9, VAR10;
blkptr_t VAR11;
int VAR12;

VAR8 = (VAR7 *)VAR6;
VAR6 += VAR13;
VAR9 = FUN2(VAR4);
VAR10 = FUN3(VAR9);


if (FUN4(VAR10, 0, VAR13, (char *)VAR8) == 0) {
FUN5("");
return (1);
}


FUN6(&VAR11);
FUN7(&VAR11, VAR14);
FUN8(&VAR11, VAR15);
FUN9(&VAR11.VAR16, FUN10(VAR4),
FUN2(VAR4), VAR2->VAR17, 0);
if (FUN11(&VAR11, (char *)VAR8, VAR13)) {
FUN5("");
return (1);
}

for (VAR12 = 0; VAR12 < VAR18; VAR12++) {
if (FUN12(&VAR8->VAR19[VAR12]))
continue;

if (FUN13(&VAR8->VAR19[VAR12], VAR5, VAR6))
return (1);
VAR5 += FUN14(&VAR8->VAR19[VAR12]);
}

return (0);
}