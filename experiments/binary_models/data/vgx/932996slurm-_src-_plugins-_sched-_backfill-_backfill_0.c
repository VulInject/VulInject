static void FUN1(VAR1 *VAR2, time_t VAR3,
uint32_t VAR4)
{
VAR5 *VAR6;
VAR7 *VAR8;

if (VAR4 == VAR9)
VAR4 = VAR2->VAR10;
if (VAR2->VAR11) {
VAR6 = FUN2(VAR12, VAR13,
&VAR2->VAR11);
if (VAR6) {
if (!VAR6->VAR4) {
VAR6->VAR4 = VAR4;
} else {
VAR6->VAR4 = FUN3(VAR6->VAR4,
VAR4);
}
VAR8 = FUN2(VAR6->VAR14,
VAR15,
&VAR2->VAR16);
if (VAR8 && (VAR8->VAR3 <= VAR3)) {

} else if (VAR8) {
VAR8->VAR3 = VAR3;
VAR8->VAR17 = VAR2->VAR17;
VAR8->VAR18 = VAR2->VAR18;
} else {
VAR8 = xmalloc(sizeof(VAR7));
VAR8->VAR16 = VAR2->VAR16;
VAR8->VAR2 = VAR2;
VAR8->VAR3 = VAR3;
VAR8->VAR17 = VAR2->VAR17;
VAR8->VAR18 = VAR2->VAR18;
FUN4(VAR6->VAR14, VAR8);
}
} else {
VAR8 = xmalloc(sizeof(VAR7));
VAR8->VAR16 = VAR2->VAR16;
VAR8->VAR2 = VAR2;
VAR8->VAR3 = VAR3;
VAR8->VAR17 = VAR2->VAR17;
VAR8->VAR18 = VAR2->VAR18;

VAR6 = xmalloc(sizeof(VAR5));
VAR6->VAR4 = VAR4;
VAR6->VAR11 = VAR2->VAR11;
VAR6->VAR14 = FUN5(VAR19);
FUN4(VAR6->VAR14, VAR8);
FUN4(VAR12, VAR6);
}

FUN6(VAR20, "",
VAR2, VAR2->VAR17->VAR21,
FUN7(0, FUN8(VAR6, 0) - FUN9(NULL)));
}
}