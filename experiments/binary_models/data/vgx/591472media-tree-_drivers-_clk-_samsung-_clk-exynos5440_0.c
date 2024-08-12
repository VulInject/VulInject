static int FUN1(struct VAR1 *this,
unsigned long VAR2, void *VAR3)
{
u32 VAR4, VAR5;

VAR5 = FUN2(VAR6 + 0xbc);
VAR4 = FUN2(VAR6 + 0xcc);
VAR4 = (VAR4 & 0xffff0000) | (VAR5 & 0xffff);
FUN3(VAR4, VAR6 + 0xcc);

return VAR7;
}