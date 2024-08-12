int getchar(void)
{
struct biosregs VAR1, VAR2;

FUN1(&VAR1);

FUN2(0x16, &VAR1, &VAR2);

return VAR2.VAR3;
}