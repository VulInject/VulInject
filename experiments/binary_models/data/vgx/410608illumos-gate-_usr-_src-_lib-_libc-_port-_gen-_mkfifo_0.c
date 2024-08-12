int
FUN1(const char *VAR1, mode_t VAR2)
{
VAR2 &= 0777;		
VAR2 |= VAR3;	
return (FUN2(VAR1, VAR2, 0));
}