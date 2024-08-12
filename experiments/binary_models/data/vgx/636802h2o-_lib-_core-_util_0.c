static void FUN1(VAR1 *VAR2, VAR3 *VAR4, const char *VAR5,
int (*VAR6)(VAR1 *, VAR7 *), size_t VAR8)
{
int64_t VAR9;
if (FUN2(VAR2, &VAR9) == 0)
return;
if (VAR4->VAR10 == 0) {
if (VAR8 != VAR11)
VAR4->VAR12 = FUN3(&VAR2->VAR13, *VAR4->VAR12, VAR8);
} else {
VAR4->VAR12[VAR4->VAR10++] = '';
VAR4->VAR12[VAR4->VAR10++] = '';
}
size_t VAR14 = strlen(VAR5);
memcpy(VAR4->VAR12 + VAR4->VAR10, VAR5, VAR14);
VAR4->VAR10 += VAR14;
VAR4->VAR12[VAR4->VAR10++] = '';
VAR4->VAR12[VAR4->VAR10++] = '';
VAR4->VAR10 += FUN4(VAR4->VAR12 + VAR4->VAR10, VAR9);
}