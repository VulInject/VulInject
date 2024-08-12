static int FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4 = FUN2(VAR2);
u8 VAR5;
int VAR6;

VAR6 = FUN3(VAR2);
if (VAR6)
return VAR6;

FUN4(VAR2, 0x60, &VAR5);
if ((VAR5 & 0x40) == 0)
FUN5(VAR2, 0x60, VAR5 | 0x40);

FUN6(VAR4);
return 0;
}