static int FUN1(struct VAR1 *VAR2, void *VAR3, size_t VAR4, bool VAR5)
{
struct VAR6 *VAR7 =
FUN2(VAR2, struct VAR6, VAR2);
u32 VAR8;
int VAR9 = 0;

FUN3((struct VAR10 *) VAR7->VAR2.VAR7);

while (VAR4 > sizeof(VAR11)) {
VAR8 = FUN4(VAR7->VAR12 + VAR13);
if (!VAR8 && VAR5) {
unsigned int VAR14 = VAR15;

do {
FUN5();
VAR8 = FUN4(VAR7->VAR12 + VAR13);
} while (!VAR8 && --VAR14);
}


if (VAR8 != VAR16) {
if (FUN6(VAR8 & (VAR17 | VAR18),
"", VAR8))
FUN7(0, VAR7->VAR12 + VAR13);
break;
}

*(VAR11 *)VAR3 = FUN4(VAR7->VAR12 + VAR19);

VAR9 += sizeof(VAR11);
VAR3 += sizeof(VAR11);
VAR4 -= sizeof(VAR11);
}

FUN8((struct VAR10 *) VAR7->VAR2.VAR7);
FUN9((struct VAR10 *) VAR7->VAR2.VAR7);

return VAR9 || !VAR5 ? VAR9 : -VAR20;
}