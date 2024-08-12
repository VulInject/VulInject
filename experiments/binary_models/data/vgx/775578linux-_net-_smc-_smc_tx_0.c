static int FUN1(struct VAR1 *VAR2, size_t VAR3,
size_t VAR4, size_t VAR5,
size_t VAR6, size_t VAR7)
{
int VAR8 = VAR5, VAR9 = VAR7;
int VAR10, VAR11;
int VAR12;

for (VAR11 = 0; VAR11 < 2; VAR11++) {
for (VAR10 = 0; VAR10 < 2; VAR10++) {
void *VAR13 = VAR2->VAR14->VAR15 + VAR4;

VAR12 = FUN2(VAR2, VAR13, VAR5, VAR6 +
sizeof(struct VAR16), 0);
if (VAR12)
return VAR12;
VAR6 += VAR5;
VAR4 += VAR5;
if (VAR4 >= VAR2->VAR14->VAR3)
VAR4 -= VAR2->VAR14->VAR3;

if (VAR8 == VAR7)
break; 

VAR5 = VAR7 - VAR5; 
VAR8 += VAR5;
}
if (VAR9 == VAR3)
break; 

VAR6 = 0; 
VAR7 = VAR3 - VAR7; 
VAR9 += VAR7;
VAR5 = FUN3(int, VAR7, VAR2->VAR14->VAR3 - VAR4);
VAR8 = VAR5;
}
return 0;
}