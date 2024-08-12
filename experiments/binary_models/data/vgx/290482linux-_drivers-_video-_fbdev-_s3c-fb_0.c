static int FUN1(struct VAR1 *VAR2, u32 VAR3)
{
unsigned long VAR4;
int VAR5;

if (VAR3 != 0)
return -VAR6;

FUN2(VAR2->VAR7);

VAR4 = VAR2->VAR8.VAR4;
FUN3(VAR2);
VAR5 = FUN4(VAR2->VAR8.VAR9,
VAR4 != VAR2->VAR8.VAR4,
FUN5(VAR10));

FUN6(VAR2->VAR7);

if (VAR5 == 0)
return -VAR11;

return 0;
}