static int FUN1(struct VAR1 *VAR2,
u32 VAR3, const VAR4 *VAR5, u8 VAR6)
{
const u8 VAR7 = VAR8 -
(VAR3 - FUN2(VAR3, VAR8));
int VAR9;

if (VAR6 > VAR7) {

VAR9 = FUN3(VAR2, VAR3, VAR5, VAR7);
if (VAR9)
return VAR9;

VAR3 += VAR7;
VAR5 += VAR7;
VAR6  -= VAR7;
}

return FUN3(VAR2, VAR3, VAR5, VAR6);
}