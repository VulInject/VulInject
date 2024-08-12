}
FUN1(VAR1);

int FUN2(struct VAR2 *VAR3, u32 VAR4, u32 VAR5,
int VAR6)
{
int VAR7 = 0;

do {
if ((FUN3(VAR3, VAR4) & VAR5) == VAR5)
return VAR7;
FUN4(VAR8);
VAR7 += VAR8;
} while (VAR7 < VAR6);

return -VAR9;
}