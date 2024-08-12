static VAR1
FUN1(void *VAR2, u32 VAR3, u32 VAR4, struct VAR5 *VAR6)
{
struct VAR7 *VAR8 = VAR2;
u32 VAR9;
if (VAR3 + VAR4 <= 0x00100000) {
for (VAR9 = VAR3; VAR9 < VAR3 + VAR4; VAR9 += 4)
*(VAR1 *)&VAR6->VAR2[VAR9] = FUN2(VAR8, 0x300000 + VAR9);
return VAR4;
}
return 0;
}