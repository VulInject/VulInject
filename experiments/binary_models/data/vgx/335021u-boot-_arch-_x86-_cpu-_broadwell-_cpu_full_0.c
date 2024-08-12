int FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4 = FUN2(VAR2);
int VAR5;
int VAR6;
msr_t VAR7;
int VAR8;

VAR7 = FUN3(VAR9);
VAR5 = (VAR7.VAR10 >> 0) & 0xffff;
VAR6 = (VAR7.VAR10 >> 16) & 0xffff;
FUN4("", VAR6,
VAR5);

VAR4->VAR11 = VAR5 == VAR6;

VAR8 = FUN5(VAR2);
if (VAR8)
return VAR8;

FUN6();

return VAR8;
}