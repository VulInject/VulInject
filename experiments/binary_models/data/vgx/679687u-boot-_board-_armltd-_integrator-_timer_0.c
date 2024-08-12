static ulong VAR1;		





int FUN1 (void)
{

*(volatile VAR2 *)(VAR3 + 0) = VAR4;

*(volatile VAR2 *)(VAR3 + 8) = 0x000000C2;

*(volatile VAR2 *)(VAR3 + 8) = 0x00000088;


VAR5 = 0ULL;

VAR6	  = VAR7;

VAR1 = 0L;

VAR8 = VAR9;
FUN2(VAR8, VAR10);
FUN2(VAR8, VAR11);

return (0);
}