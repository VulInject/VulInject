}
FUN1(VAR1);

static struct VAR2 *FUN2(struct VAR3 *VAR4,
struct VAR5 *VAR6)
{
struct VAR2 *VAR7 = NULL;
const VAR8 *VAR9;
int VAR10, VAR11;
struct VAR12 *VAR13 = FUN3(FUN4(VAR6));

FUN5("", VAR6->VAR14);
if (!FUN6(VAR6))
return NULL;

VAR9 = FUN7(VAR6, "", &VAR10);
if (VAR9 == NULL || VAR10 < 20)
return NULL;
VAR11 = (FUN8(VAR9, 1) >> 8) & 0xff;


VAR7 = FUN9(VAR4, VAR11);
if (VAR7) {
FUN10(VAR7);
return VAR7;
}


if (VAR13 && (VAR13->VAR15 & VAR16))
return NULL;


VAR7 = FUN11(VAR6, VAR4, VAR11);
if (!VAR7)
return NULL;

FUN5("", VAR7->VAR17);
return VAR7;
}