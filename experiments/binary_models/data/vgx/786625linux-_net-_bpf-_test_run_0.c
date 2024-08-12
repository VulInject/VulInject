static int FUN1(struct VAR1 **VAR2, int VAR3,
struct VAR4 **VAR5,
struct VAR6 *VAR7)
{
gfp_t VAR8 = VAR9 | VAR10;
int VAR11, VAR12;
FUN2(VAR13);

VAR12 = FUN3(VAR14, VAR8, VAR3, (void **)VAR5);
if (FUN4(VAR12 == 0)) {
for (VAR11 = 0; VAR11 < VAR3; VAR11++)
FUN5(VAR2[VAR11]);
return -VAR15;
}

for (VAR11 = 0; VAR11 < VAR3; VAR11++) {
struct VAR1 *VAR16 = VAR2[VAR11];
struct VAR4 *VAR17 = VAR5[VAR11];

VAR17 = FUN6(VAR16, VAR17, VAR7);
if (!VAR17) {
FUN5(VAR16);
continue;
}

FUN7(&VAR17->VAR13, &VAR13);
}
FUN8(&VAR13);

return 0;
}