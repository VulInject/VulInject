static void FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4 = FUN2(VAR2);
unsigned long VAR5;
unsigned int VAR6, VAR7, VAR8;
u8 VAR9 = 0;

if (VAR4->VAR10->VAR9)
VAR9 = VAR4->VAR10->VAR9[VAR4->VAR11];

FUN3(VAR4->VAR12, FUN4(VAR4->VAR13), &VAR6);

VAR5 = (VAR4->VAR14.VAR15 / FUN5(VAR6)) *
(FUN6(VAR6, VAR4->VAR16) + 1);
VAR8 = (VAR6 >> VAR17) & VAR18;
VAR7 = (VAR6 >> VAR19) & VAR9;

if (VAR4->VAR14.VAR20 != VAR5 ||
VAR4->VAR14.VAR21 != FUN7(VAR4->VAR12, FUN4(VAR4->VAR13)) ||
VAR8 != VAR18 ||
(VAR9 && VAR7 != VAR9))
FUN8("");
}