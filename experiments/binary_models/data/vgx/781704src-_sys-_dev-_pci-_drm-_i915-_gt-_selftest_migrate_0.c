static int FUN1(struct VAR1 *VAR2,
struct VAR3 *VAR4,
enum i915_cache_level VAR5,
bool VAR6,
struct VAR3 *VAR7,
enum i915_cache_level VAR8,
bool VAR9,
size_t VAR10)
{
ktime_t VAR11[5];
int VAR12;
int VAR13 = 0;

for (VAR12 = 0; VAR12 < FUN2(VAR11); VAR12++) {
struct VAR14 *VAR15;
ktime_t VAR16, VAR17;

VAR16 = FUN3();

VAR13 = FUN4(VAR2, NULL,
VAR4, VAR5,
VAR6,
VAR7, VAR8,
VAR9,
&VAR15);
if (VAR15) {
if (FUN5(VAR15, 0, VAR18) < 0)
VAR13 = -VAR19;
FUN6(VAR15);
}
if (VAR13)
break;

VAR17 = FUN3();
VAR11[VAR12] = FUN7(VAR17, VAR16);
}
if (VAR13)
return VAR13;

FUN8(VAR11, FUN2(VAR11), sizeof(*VAR11), VAR20, NULL);
FUN9("",
VAR2->VAR21->VAR22, VAR10 >> 10,
FUN10(FUN11(4 * VAR10,
1000 * 1000 * 1000),
VAR11[1] + 2 * VAR11[2] + VAR11[3]) >> 20);
return 0;
}