static int
FUN1(struct VAR1 *VAR2, int VAR3,
__u32 VAR4, __u8 VAR5)
{
struct VAR6 *VAR7;
int VAR8 = FUN2(VAR5);
struct VAR9 *VAR10;
struct VAR11 *VAR12;
int VAR13;

VAR10 = FUN3(VAR14, 1  ,
sizeof(struct VAR6),
VAR2, NULL);

if (FUN4(VAR10)) {
FUN5(VAR15, VAR2, "",
"");
return FUN6(VAR10);
}

VAR7 = (struct VAR6 *)VAR10->VAR16;
VAR7->VAR17 = VAR18;
VAR7->VAR19 = VAR3;
VAR7->VAR20 = VAR2->VAR21[VAR8].VAR20;
VAR7->VAR4 = VAR4;
VAR7->VAR22 = VAR2->VAR21[VAR8].VAR22;
VAR7->VAR23 = VAR2->VAR21[VAR8].VAR23;
VAR12 = VAR10->VAR24;
VAR12->VAR25 = VAR26;
VAR12->VAR27 = (VAR28)FUN7(VAR7);
VAR12->VAR29 = VAR30;
VAR12->VAR31 = sizeof(struct VAR6);

VAR10->VAR32 = VAR2;
VAR10->VAR33 = VAR2;
VAR10->VAR34 = NULL;
VAR10->VAR35 = 256;
VAR10->VAR36 = 10*VAR37;
VAR10->VAR38 = FUN8();
VAR10->VAR39 = VAR40;
FUN9(VAR41, &VAR10->VAR29);

VAR13 = FUN10(VAR10);

FUN11(VAR10, VAR10->VAR33);
return VAR13;
}