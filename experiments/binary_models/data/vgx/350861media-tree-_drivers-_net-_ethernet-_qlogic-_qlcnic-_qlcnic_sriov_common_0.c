int FUN1(struct VAR1 *VAR2,
struct VAR3 *VAR4, u16 VAR5)
{
struct VAR6 *VAR7 = &VAR2->VAR8->VAR7;
struct qlcnic_cmd_args VAR9;
int VAR10;
u32 VAR11;

VAR10 = FUN2(&VAR9, VAR2, VAR12);
if (VAR10)
return VAR10;

VAR9.VAR13.VAR14[1] = VAR5 << 16 | 0x1;
VAR10 = FUN3(VAR2, &VAR9);
if (VAR10) {
FUN4(&VAR2->VAR8->VAR7,
"", VAR10);
FUN5(&VAR9);
return VAR10;
}

VAR11 = VAR9.VAR15.VAR14[2] & 0xffff;
if (VAR11 & VAR16)
VAR4->VAR17 = FUN6(VAR9.VAR15.VAR14[2]);
if (VAR11 & VAR18)
VAR4->VAR19 = FUN7(VAR9.VAR15.VAR14[3]);
if (VAR11 & VAR20)
VAR4->VAR21 = FUN6(VAR9.VAR15.VAR14[3]);
if (VAR11 & VAR22)
VAR4->VAR23 = FUN7(VAR9.VAR15.VAR14[4]);
if (VAR11 & VAR24)
VAR4->VAR25 = FUN6(VAR9.VAR15.VAR14[4]);
if (VAR11 & VAR26)
VAR4->VAR27 = FUN7(VAR9.VAR15.VAR14[5]);
if (VAR11 & VAR28)
VAR4->VAR29 = FUN6(VAR9.VAR15.VAR14[5]);
if (VAR11 & VAR30)
VAR4->VAR31 = FUN7(VAR9.VAR15.VAR14[6]);
if (VAR11 & VAR32)
VAR4->VAR33 = FUN6(VAR9.VAR15.VAR14[6]);
if (VAR11 & VAR34)
VAR4->VAR35 = FUN7(VAR9.VAR15.VAR14[7]);

VAR4->VAR36 = FUN6(VAR9.VAR15.VAR14[7]);
VAR4->VAR37 = FUN7(VAR9.VAR15.VAR14[8]);
VAR4->VAR38 = FUN6(VAR9.VAR15.VAR14[8]);
VAR4->VAR39 = FUN7(VAR9.VAR15.VAR14[9]);

FUN8(VAR7, ""
""
""
""
""
"",
VAR4->VAR17, VAR4->VAR19,
VAR4->VAR21, VAR4->VAR23,
VAR4->VAR25,
VAR4->VAR27, VAR4->VAR29,
VAR4->VAR31, VAR4->VAR33,
VAR4->VAR35, VAR4->VAR36,
VAR4->VAR37, VAR4->VAR38,
VAR4->VAR39);

FUN5(&VAR9);
return VAR10;
}