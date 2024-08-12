static int FUN1(struct VAR1 *VAR2, const char *VAR3,
VAR4 *VAR5)
{
struct VAR6 *VAR7;
void *VAR8;
size_t VAR9;

VAR7 = FUN2(VAR2, VAR3);
if (FUN3(VAR7))
return FUN4(VAR7);

VAR8 = FUN5(VAR7, &VAR9);
FUN6(VAR7);
if (FUN3(VAR8))
return FUN4(VAR8);

if (VAR9 > sizeof(VAR4)) {
FUN7(VAR8);
return -VAR10;
}

memcpy(VAR5, VAR8, VAR9);

FUN7(VAR8);
return 0;
}