int FUN1(VAR1 *VAR2,
unsigned char VAR3[16])
{

if (VAR2->VAR4 > 0U) {

VAR2->VAR5[VAR2->VAR4] = 1U;
VAR2->VAR4++;


memset(&VAR2->VAR5[VAR2->VAR4],
0,
VAR6 - VAR2->VAR4);

FUN2(VAR2, 1U,           
VAR2->VAR5, 0U);   
}

FUN3(VAR2, VAR3);

return 0;
}