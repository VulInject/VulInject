static int FUN1(const VAR1 *VAR2)
{

uint16_t VAR3 = FUN2(VAR2->VAR4);
if ((VAR3 == 0x0B8D || VAR3 == 0x0C0D || VAR3 == 0x0C8D) &&
VAR2->VAR4[2] == '' && VAR2->VAR4[3] == '' &&
VAR2->VAR4[4] == '' && VAR2->VAR4[5] == 0)
return VAR5;
else
return 0;
}