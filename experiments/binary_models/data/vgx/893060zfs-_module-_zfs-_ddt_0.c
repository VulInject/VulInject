void
FUN1(VAR1 *VAR2, const VAR3 *VAR4)
{
VAR5 *VAR6;
ddt_entry_t VAR7;
enum ddt_type VAR8;
enum ddt_class class;

if (!VAR9 || VAR4 == NULL || !FUN2(VAR4))
return;


VAR6 = FUN3(VAR2, VAR4);
FUN4(&VAR7.VAR10, VAR4);

for (VAR8 = 0; VAR8 < VAR11; VAR8++) {
for (class = 0; class < VAR12; class++) {
FUN5(VAR6, VAR8, class, &VAR7);
}
}
}



typedef struct VAR13 {
uint16_t	VAR14[VAR15];
} VAR16;