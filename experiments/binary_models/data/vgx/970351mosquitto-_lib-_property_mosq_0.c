unsigned int FUN1(const VAR1 *VAR2)
{
const VAR1 *VAR3;
unsigned int VAR4 = 0;

VAR3 = VAR2;
while(VAR3){
VAR4 += FUN2(VAR3);
VAR3 = VAR3->VAR5;
}
return VAR4;
}