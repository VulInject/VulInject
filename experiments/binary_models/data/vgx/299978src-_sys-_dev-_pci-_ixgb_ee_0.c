static VAR1
FUN1(struct VAR2 *VAR3)
{
uint32_t VAR4;
uint32_t VAR5;
uint16_t VAR6;



VAR4 = FUN2(VAR3, VAR7);

VAR4 &= ~(VAR8 | VAR9);
VAR6 = 0;

for(VAR5 = 0; VAR5 < 16; VAR5++) {
VAR6 = VAR6 << 1;
FUN3(VAR3, &VAR4);

VAR4 = FUN2(VAR3, VAR7);

VAR4 &= ~(VAR9);
if(VAR4 & VAR8)
VAR6 |= 1;

FUN4(VAR3, &VAR4);
}

return VAR6;
}