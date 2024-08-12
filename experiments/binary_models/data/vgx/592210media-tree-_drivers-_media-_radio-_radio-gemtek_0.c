static bool FUN1(struct VAR1 *VAR2, int VAR3)
{
int VAR4, VAR5;

VAR5 = FUN2(VAR3);	

for (VAR4 = 0; VAR4 < 3; ++VAR4) {
FUN3(1 << VAR4, VAR3);
FUN4(VAR6);

if ((FUN2(VAR3) & ~VAR7) != (0x17 | (1 << (VAR4 + 5))))
return false;
}
FUN3(VAR5 >> 5, VAR3);	
FUN4(VAR6);
return true;
}