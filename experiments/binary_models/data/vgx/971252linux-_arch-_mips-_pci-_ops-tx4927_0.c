static int FUN1(struct tx4927_pcic_reg VAR1 *VAR2)
{
int VAR3 = VAR4;


while (FUN2(&VAR2->VAR5) & VAR6)
;
if (FUN2(&VAR2->VAR7)
& (VAR8 << 16)) {
FUN3((FUN2(&VAR2->VAR7) & 0x0000ffff)
| (VAR8 << 16),
&VAR2->VAR7);

FUN4();
VAR3 = VAR9;
}
return VAR3;
}