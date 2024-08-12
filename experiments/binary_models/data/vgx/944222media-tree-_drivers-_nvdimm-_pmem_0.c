static int FUN1(struct VAR1 *VAR2, struct VAR3 *VAR3,
unsigned int VAR4, unsigned int VAR5, bool VAR6,
sector_t VAR7)
{
int VAR8 = 0;
bool VAR9 = false;
phys_addr_t VAR10 = VAR7 * 512 + VAR2->VAR11;
void *VAR12 = VAR2->VAR13 + VAR10;

if (FUN2(FUN3(&VAR2->VAR14, VAR7, VAR4)))
VAR9 = true;

if (!VAR6) {
if (FUN2(VAR9))
VAR8 = -VAR15;
else {
VAR8 = FUN4(VAR3, VAR5, VAR12, VAR4);
FUN5(VAR3);
}
} else {

FUN5(VAR3);
FUN6(VAR12, VAR3, VAR5, VAR4);
if (FUN2(VAR9)) {
VAR8 = FUN7(VAR2, VAR10, VAR4);
FUN6(VAR12, VAR3, VAR5, VAR4);
}
}

return VAR8;
}