static void FUN1(struct VAR1 *VAR2,
const VAR3 *VAR4, int VAR5)
{
u32 VAR6 = 0;
int VAR7 = 0;

while (VAR7 < VAR5) {
if (VAR5 - VAR7 >= 4)
VAR6 = *(VAR8 *)VAR4;
else
memcpy(&VAR6, VAR4, VAR5 - VAR7);

FUN2(VAR2->VAR9, VAR10 + VAR7, VAR6);

VAR4 += 4;
VAR7 += 4;
}
}