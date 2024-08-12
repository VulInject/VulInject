FUN1 (char *VAR1, unsigned long VAR2, int VAR3)
{

char *VAR4 = VAR1;
memset (VAR1, 0, 5);

if (VAR3 > 4)
return NULL;

while (--VAR3 >= 0) {
*VAR4++ = VAR5[VAR2&0x3f];
VAR2 >>= 6;
}

return VAR1;
}