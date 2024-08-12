static int FUN1(struct VAR1 *VAR2, u32 VAR3, const VAR4 *VAR5, size_t VAR6)
{
int VAR7;
const VAR4 *VAR8;

if (!FUN2(VAR5)) {
VAR8 = FUN3(VAR5, VAR6, VAR9);
if (!VAR8)
return -VAR10;
} else {
VAR8 = VAR5;
}
VAR7 = FUN4(VAR2, VAR3, VAR8, VAR6);
if (VAR8 != VAR5)
FUN5(VAR8);
return VAR7;
}