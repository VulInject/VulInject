static int FUN1(struct VAR1 *VAR2, int VAR3,
void *VAR4, size_t VAR5)
{
bool VAR6 = false;
bool VAR7 = false;
int VAR8;

for (VAR8 = 0; VAR8 < VAR9; VAR8++) {
struct VAR10 *VAR11 = &VAR2->VAR12[VAR8].VAR13;

if (!VAR11->VAR14 || VAR11->VAR15 > 0)
continue;

while (FUN2(VAR2, VAR11))
VAR6 = true;

if (VAR11->VAR15 == 0)
VAR7 = true;
}

if (VAR6)
FUN3(VAR2->VAR16,
VAR17);

if (VAR7) {
VAR2->VAR18 =
FUN4(0, VAR19 * 1000 * 1000ULL);
if (!FUN5(&VAR2->VAR20))
FUN6(&VAR2->VAR20,
VAR2->VAR18,
VAR21);
}
return 0;
}