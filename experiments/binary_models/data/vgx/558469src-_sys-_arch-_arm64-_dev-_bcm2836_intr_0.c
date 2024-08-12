int
FUN1(int VAR1)
{
struct VAR2 *VAR3 = VAR4;
uint32_t VAR5;
int32_t VAR6 = VAR1 + 1;


if (VAR6 < 0)
VAR6 = 0;



if (FUN2(VAR6)) {
VAR5 = FUN3(VAR3->VAR7, VAR3->VAR8,
VAR9);
if (VAR5 == 0) {
VAR6 = VAR10;	
} else do {
if (VAR5 & (1 << FUN4(VAR6)))
return VAR6;
VAR6++;
} while (FUN2(VAR6));
}
if (FUN5(VAR6)) {
VAR5 = FUN3(VAR3->VAR7, VAR3->VAR8,
VAR11);
if (VAR5 == 0) {
VAR6 = VAR12;	
} else do {
if (VAR5 & (1 << FUN6(VAR6)))
return VAR6;
VAR6++;
} while (FUN5(VAR6));
}
if (FUN7(VAR6)) {
VAR5 = FUN3(VAR3->VAR7, VAR3->VAR8,
VAR13);
if (VAR5 == 0) {
VAR6 = VAR14;	
} else do {
if (VAR5 & (1 << FUN8(VAR6)))
return VAR6;
VAR6++;
} while (FUN7(VAR6));
}
if (FUN9(VAR6)) {
VAR5 = FUN3(VAR3->VAR7, VAR3->VAR15,
FUN10(FUN11()));
VAR5 &= VAR16;
if (VAR5 != 0) do {
if (VAR5 & (1 << FUN12(VAR6)))
return VAR6;
VAR6++;
} while (FUN9(VAR6));
}
return (-1);
}