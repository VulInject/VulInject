static int FUN1(struct VAR1 *VAR2,
struct range VAR3, int VAR4, const u32 VAR5[],
struct hl_block_glbl_sec VAR6[],
int VAR7)
{
u32 VAR8;
int VAR9, VAR10, VAR11 = 0;

VAR10 = FUN2(VAR2,
VAR3.VAR12 + VAR4, VAR5,
VAR7);
if (VAR10 < 0)
return VAR10;

for (VAR9 = VAR3.VAR12 ; VAR9 <= VAR3.VAR13 ; VAR9 += 4) {
VAR8 = (VAR9 + VAR4) - VAR5[VAR10];
VAR11 |= FUN3(VAR2, VAR8,
&VAR6[VAR10]);
}

return VAR11;
}