static void FUN1(struct VAR1 *VAR2,
int VAR3, void *VAR4,
void *VAR5, size_t VAR6)
{
struct VAR1 *VAR7 = VAR2;
int VAR8;


FUN2(VAR3 > 0);


for (; !FUN3(VAR7); VAR7 = FUN4(VAR7)) {
if (VAR7->VAR9) {
VAR8 = FUN5(VAR7->VAR10) +
VAR3;
VAR7->VAR10 = FUN6(VAR8);
}
}

memmove(VAR4, VAR5, VAR6);
}