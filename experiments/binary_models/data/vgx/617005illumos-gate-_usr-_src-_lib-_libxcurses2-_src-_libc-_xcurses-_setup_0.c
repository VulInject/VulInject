static short
FUN1(int VAR1)
{
unsigned char	VAR2[2];

if (read(VAR1, VAR2, 2) != 2)
return (VAR3);

return ((short) (VAR2[0] + VAR2[1] * 256));
}