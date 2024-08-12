void
FUN1(const char *VAR1, size_t VAR2, const char *VAR3,
size_t VAR4)
{
struct dwbuf		 VAR5 = { .VAR6 = VAR1, .VAR7 = VAR2 };
struct dwbuf		 VAR8 = { .VAR6 = VAR3, .VAR7 = VAR4 };
struct VAR9		*VAR10 = NULL;
struct ioff_tree	 VAR11;
struct itype_queue	 VAR12;
struct VAR13		*VAR14;
int			 VAR15;

for (VAR15 = 0; VAR15 < VAR16; VAR15++)
FUN2(&VAR17[VAR15]);
FUN2(&VAR18);

VAR19 = FUN3(++VAR20, VAR21, "", 0,
VAR22, 0, VAR23, 0);
FUN4(&VAR24, VAR19, VAR25);

while (FUN5(&VAR5, &VAR8, VAR2, &VAR10) == 0) {
FUN6(&VAR12);


FUN2(&VAR11);


FUN7(VAR10, &VAR12, &VAR11);


FUN8(VAR10, &VAR12, &VAR11);
assert(FUN9(&VAR11));


FUN10(VAR10, &VAR12);


FUN11();


FUN12(VAR10, &VAR12);

FUN13(VAR10);
}


FUN14(VAR14, VAR26, &VAR17[VAR23]) {
if (FUN15(VAR14) == NULL || VAR14->VAR27 != (8 * sizeof(long)))
continue;

if (strcmp(FUN15(VAR14), "") == 0) {
VAR28 = VAR14->VAR29;
break;
}
}
}