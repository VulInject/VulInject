static int FUN1(struct VAR1* VAR2, VAR3 * signal)
{
struct VAR4* VAR5 = VAR2->VAR6;
u8 VAR7;

FUN2 ("", VAR8);

VAR7 = 0xff - FUN3(VAR5, 0x43);
*signal = (VAR7 << 8) | VAR7;

return 0;
}