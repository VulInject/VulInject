static __inline__ VAR1 FUN1(unsigned char *VAR2, size_t VAR3, unsigned char VAR4, VAR5 *VAR6)
{
if (*VAR6 >= VAR3)
return VAR7;

VAR2[(*VAR6)++] = VAR4;
return VAR8;
}