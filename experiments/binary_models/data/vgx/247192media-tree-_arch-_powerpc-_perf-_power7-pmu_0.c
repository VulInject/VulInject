static VAR1 FUN1(u64 VAR2)
{
int VAR3, VAR4;


VAR3 = (VAR2 >> VAR5) & VAR6;
VAR4 = VAR2 & VAR7;
if ((VAR3 == 2 || VAR3 == 4) && (VAR4 & ~7) == 0x40)
return VAR2 - (1 << VAR5) + 8;
if ((VAR3 == 1 || VAR3 == 3) && (VAR4 & ~7) == 0x48)
return VAR2 + (1 << VAR5) - 8;
return -1;
}