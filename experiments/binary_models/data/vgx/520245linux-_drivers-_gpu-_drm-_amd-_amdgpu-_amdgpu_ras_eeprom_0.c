int FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4 = FUN2(VAR2);
struct VAR5 *VAR6 = &VAR2->VAR7;
struct VAR8 *VAR9 = FUN3(VAR4);
u8 VAR10;
int VAR11;

FUN4(&VAR2->VAR12);

VAR6->VAR13 = VAR14;
VAR6->VAR15 = VAR16;
VAR6->VAR17 = VAR18;
VAR6->VAR19 = VAR20;

VAR10 = FUN5(VAR2);
VAR10 = -VAR10;
VAR6->VAR21 = VAR10;
VAR11 = FUN6(VAR2);

VAR2->VAR22 = 0;
VAR2->VAR23 = 0;

FUN7(VAR4, VAR2->VAR22);

VAR2->VAR24 = 0;
FUN8(VAR4, VAR2->VAR24);
VAR9->VAR25 = false;

FUN9(VAR2);

FUN10(&VAR2->VAR12);

return VAR11;
}