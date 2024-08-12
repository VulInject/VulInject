int
FUN1(int VAR1, size_t VAR2, size_t VAR3,
struct VAR4 **VAR5)
{
struct VAR6 *VAR7 = &VAR6;
struct VAR4 *VAR8;
int VAR9;
paddr_t VAR10;

VAR9 = 1;
VAR8 = malloc(sizeof(*VAR8) + sizeof(*VAR8->VAR11) * VAR9, VAR12,
VAR13 | VAR14);
if (VAR8 == NULL)
return 1;
VAR8->VAR15 = VAR1;
VAR8->VAR16 = VAR2;
VAR8->VAR17 = VAR3;
VAR8->VAR18 = VAR2 * VAR3;
VAR8->VAR19 = VAR7->VAR20;
VAR8->VAR11 = (void *)(VAR8 + 1);
VAR8->VAR21 = VAR9;

FUN2(VAR8);

for (VAR10 = VAR8->VAR22; VAR10 < VAR8->VAR22 + VAR8->VAR18;
VAR10 += VAR8->VAR16)
FUN3(VAR8, VAR10);

*VAR5 = VAR8;

return 0;
}