void FUN1(void)
{
uint8_t VAR1[256];
uint32_t VAR2;
uint32_t VAR3=0;
time_t VAR4,VAR5;

FUN2(&VAR4);
for (VAR2=0; VAR2<256; ++VAR2) VAR1[VAR2] = '';
for (VAR2=0; VAR2<1; ++VAR2) 
{
VAR3 = FUN3(&VAR1[0],1,VAR3);
}
FUN2(&VAR5);
if (VAR5-VAR4 > 0) FUN4("", VAR5-VAR4, VAR3);
}