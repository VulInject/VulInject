static int
FUN1(struct VAR1 *VAR2)
{
const struct VAR3 *VAR4;
const struct VAR5 *VAR6;
const VAR7 *VAR8;
u32 VAR9;
u32 VAR10;
u32 VAR11;
int VAR12;

if (VAR13)
return 0;

VAR12 = FUN2(&VAR13, VAR14, &VAR2->VAR15->VAR16);
if (VAR12) {
FUN3(VAR2->VAR16, ""%VAR17\"",
VAR14);
return VAR12;
}

VAR8 = VAR13->VAR18;
VAR11 = VAR13->VAR19;
if (VAR11 < sizeof(struct VAR3))
goto VAR20;

VAR4 = (struct VAR3 *) VAR8;
if (memcmp(VAR4->VAR21, "", 8))
goto VAR20;

VAR9 = FUN4(VAR4->VAR9);
VAR8 += sizeof(struct VAR3);
VAR11 -= sizeof(struct VAR3);

while (VAR9--) {
if (VAR11 < sizeof(struct VAR5))
goto VAR20;

VAR6 = (struct VAR5 *) VAR8;
VAR8 += sizeof(struct VAR5);
VAR10 = FUN4(VAR6->VAR22);

if (VAR11 < VAR10)
goto VAR20;

VAR8 += VAR10;
VAR11 -= VAR10;
}

return 0;

VAR20:
FUN3(VAR2->VAR16, "");
FUN5(VAR13);
VAR13 = NULL;
return -VAR23;
}