static int FUN1(struct VAR1 *VAR2, u32 VAR3)
{
u8 VAR4;

if (VAR3 == 8000000)
VAR4 = VAR2->VAR5;
else
VAR4 = VAR2->VAR6;

FUN2(VAR2, VAR7, 0xF0, VAR4 << 4);

return 0;
}