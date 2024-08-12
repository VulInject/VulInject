static int FUN1(struct VAR1* VAR2, VAR3* VAR4)
{
struct VAR5 *VAR6 = VAR2->VAR7;


u8 signal = FUN2 (VAR6, 0x27)+128;
*VAR4 = (signal << 8) | signal;

return 0;
}