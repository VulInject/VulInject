VAR1 FUN1(uint64_t VAR2, uint64_t VAR3)
{
LMIValue VAR4, VAR5;
unsigned VAR6;

VAR4.VAR7 = VAR2;
VAR5.VAR7 = VAR3;
for (VAR6 = 0; VAR6 < 8; ++VAR6) {
int VAR8 = VAR4.VAR9[VAR6] - VAR5.VAR9[VAR6];
VAR4.VAR9[VAR6] = (VAR8 < 0 ? -VAR8 : VAR8);
}
return VAR4.VAR7;
}