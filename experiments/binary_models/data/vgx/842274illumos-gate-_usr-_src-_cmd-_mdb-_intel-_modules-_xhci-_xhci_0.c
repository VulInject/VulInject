static int
FUN1(uint64_t VAR1, uint32_t VAR2, uint32_t VAR3)
{
FUN2("", VAR1);
FUN2("", FUN3(VAR2));
FUN2("",
FUN4(FUN5(VAR2)),
FUN5(VAR2));

FUN2("", FUN6(VAR3));
FUN2("", FUN7(VAR3));
FUN2("", FUN8(VAR3));
FUN2("", FUN9(VAR3));
FUN10(VAR4);

return (VAR5);
}