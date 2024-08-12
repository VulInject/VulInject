void FUN1(void *VAR1)
{
const char VAR2[] = "";
const char VAR3[] = "";
const char VAR4[] = "";
const char VAR5[] = "";
const char VAR6[] = "";

struct ccsr_gur VAR7 *VAR8 = (void *)(VAR9);
u32 VAR10;
u32 VAR11;
u32 VAR12;


VAR10 = FUN2(&VAR8->VAR13[VAR14 - 1])
& VAR15;
VAR10 >>= VAR16;

if (VAR10 == VAR17) {
FUN3(VAR1, VAR4, "", "",
sizeof(""), 1);
FUN3(VAR1, VAR2, "", "",
sizeof(""), 1);
} else {
FUN3(VAR1, VAR2, "", "",
sizeof(""), 1);
FUN3(VAR1, VAR4, "", "",
sizeof(""), 1);
}


VAR11 = FUN2(&VAR8->VAR13[VAR18 - 1])
& VAR19;
VAR11 >>= VAR20;

if (VAR11 == VAR21) {
FUN3(VAR1, VAR5, "", "",
sizeof(""), 1);
FUN3(VAR1, VAR3, "", "",
sizeof(""), 1);
} else {
FUN3(VAR1, VAR3, "", "",
sizeof(""), 1);
FUN3(VAR1, VAR5, "", "",
sizeof(""), 1);
}


VAR12 = FUN2(&VAR8->VAR13[VAR14 - 1])
& VAR22;
VAR12 >>= VAR23;

if (VAR12 == VAR24)
FUN3(VAR1, VAR6, "", "",
sizeof(""), 1);
else
FUN3(VAR1, VAR6, "", "",
sizeof(""), 1);
}