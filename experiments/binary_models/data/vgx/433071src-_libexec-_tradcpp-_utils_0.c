void *
FUN1(void *VAR1, size_t VAR2)
{
struct VAR3 *VAR4, *VAR5;
size_t VAR6;

if (VAR1 == NULL) {
assert(VAR2 == 0);
return VAR1;
}

VAR6 = FUN2(VAR2, sizeof(struct VAR3));
VAR4 = VAR1;
VAR4--;
assert(VAR4->VAR7 == VAR4);
assert(VAR4->VAR2 == VAR2);
VAR5 = (void *)(((unsigned char *)(VAR4 + 1)) + VAR6);
assert(VAR5->VAR7 == VAR4);
assert(VAR5->VAR2 == VAR2);
return VAR4;
}