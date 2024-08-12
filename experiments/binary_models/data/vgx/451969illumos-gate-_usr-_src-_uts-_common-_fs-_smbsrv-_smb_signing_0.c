static int
FUN1(VAR1 *VAR2, struct VAR3 *VAR4,
uint32_t VAR5, unsigned char *VAR6);

uint32_t VAR7 = 10;


static int
FUN2(
VAR1 *VAR2,
struct VAR3 *VAR4,
unsigned char *VAR8,
unsigned char *VAR9)
{
struct VAR10 *VAR11 = &VAR2->VAR12->VAR13;
uint32_t VAR14, VAR15;

for (VAR14 = 1; VAR14 < VAR7; VAR14++) {
VAR15 = VAR2->VAR16 + VAR14;
(void) FUN1(VAR2, VAR4, VAR15, VAR8);
if (memcmp(VAR8, VAR9, VAR17) == 0) {
goto VAR18;
}
VAR15 = VAR2->VAR16 - VAR14;
(void) FUN1(VAR2, VAR4, VAR15, VAR8);
if (memcmp(VAR8, VAR9, VAR17) == 0) {
goto VAR18;
}
}
FUN3(VAR19, "", VAR14);
return (-1);

VAR18:
FUN3(VAR19, "",
VAR11->VAR5, VAR15);
VAR11->VAR5 = VAR15;
return (0);
}