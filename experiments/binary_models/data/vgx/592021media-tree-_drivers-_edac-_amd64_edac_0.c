static void FUN1(struct VAR1 *VAR2, u32 VAR3, int VAR4)
{
FUN2(1, "", VAR4, VAR3);

if (VAR2->VAR5 == VAR6) {
u32 VAR7 = VAR2->VAR8[VAR4].VAR9[0];

FUN2(1, "", (VAR7 & 0x3));
}

FUN2(1, "",
(VAR3 & FUN3(19)) ? "" : "");


FUN2(1, "",
(VAR3 & FUN3(8)) ?  "" : "");

if (VAR2->VAR10 == 0x10)
FUN2(1, "",
(VAR3 & FUN3(11)) ?  "" : "");

FUN2(1, "",
(VAR3 & FUN3(12)) ?  "" : "",
(VAR3 & FUN3(13)) ?  "" : "",
(VAR3 & FUN3(14)) ?  "" : "",
(VAR3 & FUN3(15)) ?  "" : "");
}