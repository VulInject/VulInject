int
FUN1(struct VAR1 *VAR2,
unsigned char *VAR3, VAR4 *VAR5,
unsigned char *VAR6, VAR4 *VAR7)
{
struct VAR8 *VAR9;
struct sc_path VAR10;
struct VAR11 *VAR12;
unsigned char *VAR13 = NULL;
size_t VAR14 = 0;
int VAR15;

if (!VAR2)
return VAR16;

VAR9 = VAR2->VAR9;

FUN2(VAR9);

FUN3("", &VAR10);
VAR15 = FUN4(VAR2, &VAR10, &VAR12);
FUN5(VAR9, VAR15, "");

if (VAR12->VAR17) {
VAR14 = VAR12->VAR17;
} else {
VAR14 = 64;
}
VAR13 = malloc(VAR14);
if (!VAR13) {
VAR15 = VAR18;
goto VAR19;
}

VAR15 = FUN6(VAR2, 0, VAR13, VAR14, 0);
FUN5(VAR9, VAR15, "");

VAR15 = FUN7(VAR13, VAR15, VAR3, VAR5, VAR6, VAR7);

VAR19:
FUN8(VAR12);
free(VAR13);

FUN9(VAR9, VAR15);
}