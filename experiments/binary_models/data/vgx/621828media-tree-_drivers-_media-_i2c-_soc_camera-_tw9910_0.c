static const struct VAR1 *FUN1(v4l2_std_id VAR2,
u32 VAR3, u32 VAR4)
{
const struct VAR1 *VAR5;
const struct VAR1 *VAR6 = NULL;
__u32 VAR7 = 0xffffffff, VAR8;
int VAR9, VAR10;

if (VAR2 & VAR11) {
VAR5 = VAR12;
VAR9 = FUN2(VAR12);
} else if (VAR2 & VAR13) {
VAR5 = VAR14;
VAR9 = FUN2(VAR14);
} else {
return NULL;
}

for (VAR10 = 0; VAR10 < VAR9; VAR10++) {
VAR8 = FUN3(VAR3 - VAR5[VAR10].VAR3) +
FUN3(VAR4 - VAR5[VAR10].VAR4);
if (VAR8 < VAR7) {
VAR7 = VAR8;
VAR6 = VAR5 + VAR10;
}
}

return VAR6;
}