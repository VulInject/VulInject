FUN1 (gcry_mpi_t VAR1, unsigned int VAR2, int VAR3,
unsigned int *VAR4, int *VAR5, int VAR6)
{
unsigned char *VAR7, *VAR8, *VAR9;
unsigned int VAR10, VAR11;
mpi_limb_t VAR12;
int VAR13;
size_t VAR14, VAR15;

if (VAR5)
*VAR5 = VAR1->VAR5;

*VAR4 = VAR1->VAR16 * VAR17;
VAR14 = *VAR4? *VAR4:1; 
if (VAR14 < VAR2)
VAR14 = VAR2;
if (VAR3 < 0)
VAR15 = VAR14 + -VAR3;
else
VAR15 = VAR14 + VAR3;

VAR9 = (VAR6 || FUN2(VAR1))? FUN3 (VAR15)
: FUN4 (VAR15);
if (!VAR9)
return NULL;
if (VAR3 < 0)
VAR8 = VAR9 + -VAR3;
else
VAR8 = VAR9;
VAR7 = VAR8;

for (VAR13=VAR1->VAR16-1; VAR13 >= 0; VAR13--)
{
VAR12 = VAR1->VAR18[VAR13];
*VAR7++ = VAR12 >> 24;
*VAR7++ = VAR12 >> 16;
*VAR7++ = VAR12 >>  8;
*VAR7++ = VAR12	  ;
*VAR7++ = VAR12 >> 56;
*VAR7++ = VAR12 >> 48;
*VAR7++ = VAR12 >> 40;
*VAR7++ = VAR12 >> 32;
*VAR7++ = VAR12 >> 24;
*VAR7++ = VAR12 >> 16;
*VAR7++ = VAR12 >>  8;
*VAR7++ = VAR12	  ;
}

if (VAR2)
{
VAR10 = *VAR4;

for (VAR13=0; VAR13 < VAR10/2; VAR13++)
{
VAR11 = VAR8[VAR13];
VAR8[VAR13] = VAR8[VAR10-1-VAR13];
VAR8[VAR10-1-VAR13] = VAR11;
}

for (VAR7 = VAR8 + VAR10; VAR10 < VAR2; VAR10++)
*VAR7++ = 0;
*VAR4 = VAR10;

return VAR9;
}


for (VAR7=VAR8; *VAR4 && !*VAR7; VAR7++, --*VAR4)
;
if (VAR7 != VAR8)
memmove (VAR8, VAR7, *VAR4);
return VAR9;
}