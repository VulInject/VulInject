static void FUN1(struct VAR1 *VAR2, u16 VAR3,
u32 VAR4, u32 VAR5)
{
u32 VAR6, VAR7;
int VAR8;
struct VAR9 *VAR10 = (struct VAR9 *)VAR2->VAR11;

FUN2(3, "");

if (VAR3 & 0x0202) {
VAR6 = VAR4;


VAR7 = VAR6 >> (VAR12 - 4);

VAR8 = VAR10->VAR13 ?

((VAR7 >> 1) & 3) :
FUN3(VAR2, VAR7);


FUN4(VAR14, VAR2, 1,
VAR7,
FUN5(VAR6 << 4), 0,
VAR8, -1, -1,
"", "");

}
if (VAR3 & 0x0404) {
VAR6 = VAR5;


VAR7 = VAR6 >> (VAR12 - 4);

VAR8 = VAR10->VAR13 ?

((VAR7 >> 1) & 3) :
FUN3(VAR2, VAR7);


FUN4(VAR14, VAR2, 1,
VAR7,
FUN5(VAR6 << 4), 0,
VAR8, -1, -1,
"", "");
}
}