static int FUN1(struct VAR1 *VAR2, bool VAR3)
{
FUN2(VAR4, VAR2, "",
VAR5, VAR3 ? "" : "");

if (VAR3)
FUN3(VAR2, 0xA8 | 0x00);
else
FUN3(VAR2, 0xA8 | 0x07);
return 0;
}