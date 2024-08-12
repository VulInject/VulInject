int FUN1(struct VAR1 *VAR2, VAR3 *VAR4)
{
struct VAR5 *VAR6 = (struct VAR5 *)(VAR2->VAR7);
uint32_t VAR8;
uint32_t VAR9;
int VAR10 = 0;

if (VAR2->VAR11.VAR12.VAR13)
return -1;

if (VAR6->VAR14[VAR15].VAR16)
VAR10 = FUN2(VAR2, VAR4);
else {
uint32_t VAR17 = FUN3(VAR18, 0,
VAR19, VAR20);
VAR8 = (FUN4(VAR2->VAR21,
VAR17) & VAR22) >>
VAR23;

if (VAR8 == 0)
return -VAR24;

VAR9 = FUN5(VAR2);

*VAR4 = 60 * VAR9 * 10000 / VAR8;
}

return VAR10;
}