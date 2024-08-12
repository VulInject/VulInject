static int FUN1(VAR1 *VAR2)
{
int VAR3;
uint64_t VAR4;

VAR4 = FUN2(VAR2);

for (VAR3 = 0; VAR3 < VAR2->VAR5; VAR3++)
VAR4 += FUN3(VAR2, VAR3);

VAR4 += (8 - (VAR4 & 7)) & 7; 
VAR4 += 16;                    

VAR4 >>= 3;
if (VAR4 > VAR6)
return VAR7;
return VAR4;
}