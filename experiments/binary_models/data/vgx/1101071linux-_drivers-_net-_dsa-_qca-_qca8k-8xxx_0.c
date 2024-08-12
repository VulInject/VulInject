static int
FUN1(struct VAR1 *VAR2, int VAR3, u32 VAR4, u32 VAR5)
{
int VAR6;
u16 VAR7;

VAR7 = VAR5 & 0xffff;
VAR6 = VAR2->write(VAR2, VAR3, VAR4, VAR7);
if (VAR6 < 0)
FUN2(&VAR2->VAR8,
"");

return VAR6;
}