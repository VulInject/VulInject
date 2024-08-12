main ()
{
unsigned int VAR1;
unsigned int VAR2;
int VAR3 = 0;
for (VAR1 = 0; VAR1 < (1 << VAR4); VAR1++)
for (VAR2 = 0; VAR2 < (1 << VAR5); VAR2++)
{

union { float VAR6; uint32_t VAR7; } VAR8;
VAR8.VAR7 = ((VAR9) VAR1 << (32 - VAR4))
| ((VAR9) ((VAR10) ((VAR9) VAR2 << (32 - VAR5))
>> (32 - VAR5 - VAR4))
>> VAR4);
VAR3 |= FUN1 (VAR8.VAR6);
}
return (VAR3 ? 1 : 0);
}