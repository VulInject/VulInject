static void  FUN1(struct VAR1 *VAR2, int VAR3)
{
struct VAR2 *VAR4 = &VAR2->VAR2;
struct VAR5 *VAR6;
int VAR7;
struct VAR8 *VAR9;
struct VAR10 *VAR10;
int VAR11, VAR12;


VAR7 = FUN2((int)(FUN3() - 1), VAR3);
if (!VAR7)
return;

VAR6 = FUN4(VAR2);
if (!VAR6)
return;

VAR6->VAR7 = VAR7;
VAR9 = &VAR6->VAR13;
VAR10 = &VAR9->VAR10;


FUN5(VAR2->VAR14, VAR15);


memset(VAR9, 0, sizeof(struct VAR8));
FUN6(&VAR9->VAR16);
VAR10->VAR17 = VAR18;
VAR10->VAR19 = VAR20;
VAR10->VAR21 = VAR7;

VAR11 = FUN7(VAR2->VAR14, VAR10,
sizeof(struct VAR10),
VAR22,
VAR23,
VAR24);

if (VAR11 != 0) {
FUN8(VAR4, "", VAR11);
return;
}

VAR12 = FUN9(&VAR9->VAR16, 10*VAR25);
if (VAR12 == 0) {
FUN8(VAR4, "");
return;
}

if (VAR10->VAR17 != VAR26 ||
VAR10->VAR27 != 0) {
FUN8(VAR4, "",
VAR10->VAR17, VAR10->VAR27);
return;
}


}