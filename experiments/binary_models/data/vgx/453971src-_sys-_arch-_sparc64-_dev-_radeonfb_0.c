void
FUN1(struct VAR1 *VAR2, struct VAR1 *VAR3, void *VAR4)
{
struct VAR5 *VAR6 = (struct VAR5 *)VAR3;
struct VAR7 *VAR8 = VAR4;
struct VAR9 *VAR10;
int VAR11, VAR12, VAR13;
char *VAR14;

VAR6->VAR15 = VAR8->VAR16;

VAR11 = FUN2(VAR8->VAR16);
VAR12 = FUN3(VAR11);

FUN4("");

VAR14 = FUN5(VAR11, "");
FUN4("", VAR3->VAR17, VAR14);

if (FUN6(VAR8, VAR18, VAR19,
VAR20, &VAR6->VAR21, &VAR6->VAR22,
&VAR6->VAR23, &VAR6->VAR24, 0)) {
FUN4("", VAR3->VAR17);
return;
}

if (FUN6(VAR8, VAR25, VAR19, 0,
&VAR6->VAR26, &VAR6->VAR27, &VAR6->VAR28,
&VAR6->VAR29, 0)) {
FUN4("", VAR3->VAR17);
return;
}

FUN7(&VAR6->VAR30, 8, 1152, 900, VAR11, 0);

FUN4("", VAR6->VAR30.VAR31, VAR6->VAR30.VAR32);


VAR6->VAR33 =
FUN8(VAR6->VAR26, VAR6->VAR27, VAR34);

VAR10 = &VAR6->VAR30.VAR35;
VAR10->VAR36 = FUN9(VAR6->VAR21, VAR6->VAR22);
VAR10->VAR36 += VAR6->VAR33;
VAR10->VAR37 = VAR6;

if (VAR6->VAR30.VAR38 == 32)
VAR13 = 0;
else
VAR13 = VAR39;

FUN10(&VAR6->VAR30, VAR13, VAR12);
FUN11(&VAR6->VAR30, VAR40);
VAR6->VAR41 = VAR42;

FUN12(VAR6);
VAR10->VAR43.VAR44 = VAR45;
VAR10->VAR43.VAR46 = VAR47;
VAR10->VAR43.VAR48 = VAR49;
VAR10->VAR43.VAR50 = VAR51;

if (VAR12)
FUN13(&VAR6->VAR30, -1);
FUN14(&VAR6->VAR30, &VAR52, VAR12);
}