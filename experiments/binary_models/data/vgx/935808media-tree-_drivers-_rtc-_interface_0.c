static int FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4)
{
int VAR5;

VAR5 = FUN2(&VAR2->VAR6);
if (VAR5)
return VAR5;

if (VAR2->VAR7 == NULL)
VAR5 = -VAR8;
else if (!VAR2->VAR7->VAR9)
VAR5 = -VAR10;
else {
VAR4->VAR11 = 0;
VAR4->VAR12 = 0;
VAR4->VAR13.VAR14 = -1;
VAR4->VAR13.VAR15 = -1;
VAR4->VAR13.VAR16 = -1;
VAR4->VAR13.VAR17 = -1;
VAR4->VAR13.VAR18 = -1;
VAR4->VAR13.VAR19 = -1;
VAR4->VAR13.VAR20 = -1;
VAR4->VAR13.VAR21 = -1;
VAR4->VAR13.VAR22 = -1;
VAR5 = VAR2->VAR7->FUN3(VAR2->VAR23.VAR24, VAR4);
}

FUN4(&VAR2->VAR6);
return VAR5;
}