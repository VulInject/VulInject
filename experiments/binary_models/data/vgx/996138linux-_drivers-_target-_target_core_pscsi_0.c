static enum VAR1 FUN1(struct VAR2 *VAR3,
blk_status_t VAR4)
{
struct VAR5 *VAR6 = VAR3->VAR7;
struct VAR8 *VAR9 = FUN2(VAR3);
enum sam_status VAR10 = VAR9->VAR11 & 0xff;
int VAR12 = VAR6->VAR13 - VAR9->VAR14;
VAR15 *VAR16 = VAR6->VAR17;

if (VAR10 != VAR18) {
FUN3(""
"", VAR6, VAR16[0], VAR9->VAR11);
}

FUN4(VAR6, VAR10, VAR9->VAR19, VAR12);

switch (FUN5(VAR9->VAR11)) {
case VAR20:
FUN6(VAR6, VAR10, VAR12);
break;
default:
FUN3(""
"", VAR6, VAR16[0], VAR9->VAR11);
FUN7(VAR6, VAR21);
break;
}

FUN8(VAR3);
return VAR22;
}