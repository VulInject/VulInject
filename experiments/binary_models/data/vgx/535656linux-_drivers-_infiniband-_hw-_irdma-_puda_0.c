static int FUN1(struct VAR1 *VAR2,
struct VAR3 *VAR4,
struct VAR3 *VAR5,
struct VAR6 *VAR7, u16 VAR8)
{
int VAR9 = 0;
struct VAR6 *VAR10;
u32 VAR11;
u16 VAR12 = VAR8 - VAR7->VAR13;
bool VAR14 = false;

VAR11 = VAR7->VAR15 + VAR7->VAR13;
do {
VAR10 = FUN2(VAR4);
if (!VAR10) {
VAR9 = -VAR16;
break;
}
FUN3(&VAR10->VAR17, VAR5);
if (VAR10->VAR15 != VAR11) {
VAR2->VAR18++;
VAR9 = -VAR19;
break;
}
if (VAR10->VAR13 >= VAR12) {
VAR14 = true;
} else {
VAR12 -= VAR10->VAR13;
VAR11 = VAR10->VAR15 + VAR10->VAR13;
}

} while (!VAR14);

return VAR9;
}