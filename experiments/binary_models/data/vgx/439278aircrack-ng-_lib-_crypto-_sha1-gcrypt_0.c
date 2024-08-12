int FUN1(VAR1 * VAR2,
uint8_t VAR3[static VAR4])
{
unsigned int VAR5 = FUN2(FUN3(*VAR2));
unsigned char * VAR6 = FUN4(*VAR2, VAR7);

if (!VAR6) return (-1);

memcpy(VAR3, VAR6, VAR5);
FUN5(*VAR2);

return (0);
}