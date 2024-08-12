static unsigned int FUN1(void VAR1 *VAR2, int VAR3)
{
u32 VAR4;

VAR4 = (FUN2(VAR2) >> VAR3) & 0x7;
if (VAR4 > 6)
return 0;
return VAR4;
}