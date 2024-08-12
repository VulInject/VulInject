FUN1 (VAR1 *VAR2, unsigned int VAR3)
{

const unsigned int VAR4 = VAR5;
VAR6 *VAR7 = (VAR6 *)(void *)(VAR2 + VAR4 - sizeof(VAR6));
u32 VAR8;

VAR8 = FUN2(*VAR7) + VAR3;
*VAR7 = FUN2(VAR8);

return VAR8; 
}