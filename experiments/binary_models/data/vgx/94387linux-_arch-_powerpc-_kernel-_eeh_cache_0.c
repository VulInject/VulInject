static struct VAR1 *
FUN1(struct VAR2 *VAR3, resource_size_t VAR4,
resource_size_t VAR5, unsigned long VAR6)
{
struct VAR7 **VAR8 = &VAR9.VAR10.VAR7;
struct VAR7 *VAR11 = NULL;
struct VAR1 *VAR12;


while (*VAR8) {
VAR11 = *VAR8;
VAR12 = FUN2(VAR11, struct VAR1, VAR7);
if (VAR5 < VAR12->VAR13) {
VAR8 = &VAR11->VAR14;
} else if (VAR4 > VAR12->VAR15) {
VAR8 = &VAR11->VAR16;
} else {
if (VAR3 != VAR12->VAR17 ||
VAR4 != VAR12->VAR13 || VAR5 != VAR12->VAR15) {
FUN3("");
}
return VAR12;
}
}
VAR12 = FUN4(sizeof(struct VAR1), VAR18);
if (!VAR12)
return NULL;

VAR12->VAR13 = VAR4;
VAR12->VAR15 = VAR5;
VAR12->VAR19 = FUN5(VAR3);
VAR12->VAR17 = VAR3;
VAR12->VAR6 = VAR6;

FUN6(VAR12->VAR19, "",
&VAR4, &VAR5);

FUN7(&VAR12->VAR7, VAR11, VAR8);
FUN8(&VAR12->VAR7, &VAR9.VAR10);

return VAR12;
}